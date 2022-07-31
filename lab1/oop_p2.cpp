
#include <iostream>
#include <vector>

class polinom
{
public:
    polinom()
    {
        if (!this->monoms.empty())
        {
            this->monoms.pop_back();
        }
    }

    polinom(const polinom& other)
    {
        while (!this->monoms.empty())
        {
            this->monoms.pop_back();
        }
        for (int i = 0; i < other.monoms.size(); i++)
        {
            this->monoms.push_back(other.monoms[i]);
        }
    }

    ~polinom() {}
    polinom& operator = (const polinom& other)
    {
        while (!this->monoms.empty())
        {
            this->monoms.pop_back();
        }
        for (int i = 0; i < this->monoms.size(); i++)
        {
            this->monoms.push_back(other.monoms[i]);
        }
        return *this;
    }

    bool operator == (const polinom& other)
    {
        bool flag = true;
        if (this->monoms.size() != other.monoms.size())
        {
            return false;
        }
        for (int i = 0; i < this->monoms.size(); i++)
        {
            if (this->monoms[i] != other.monoms[i])
            {
                return false;
            }
        }
        return true;
    }

    bool operator != (const polinom& other)
    {
        return (!(this->operator==(other)));
    }

    std::istream& operator >> (std::istream& mon)
    {
        std::cout << "enter monom\n";
        monom newMon(0, 'x', 0);
        int x, z;
        char y;
        std::cin >> x >> y >> z;
        newMon.degree = z;
        newMon.x = y;
        newMon.constant = x;
        this->adding(newMon);
        return mon;
    }

    polinom operator - (const polinom& other)
    {
        polinom temp;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            this->monoms[i].constant *= -1;
            temp.monoms.push_back(this->monoms[i]);
        }
        for (int i = 0; i < other.monoms.size(); i++)
        {
            temp.del(other.monoms[i]);
        }
        return temp;
    }

    polinom operator + (const polinom& other)
    {
        polinom temp;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            temp.monoms.push_back(this->monoms[i]);
        }
        /*for (int i = 0; i < this->monoms.size(); i++)
        {
            temp.monoms.pop_back();
        }*/
        for (int i = 0; i < other.monoms.size(); i++)
        {
            temp.adding(other.monoms[i]);
        }
        /* for (int i = 0; i < temp.monoms.size(); i++)
         {
             this->monoms.push_back(temp.monoms[i]);
         }*/
        return temp;
    }

    polinom operator ++()
    {
        for (int i = 0; i < this->monoms.size(); i++)
        {
            this->monoms[i].constant++;
        }
        return  *this;
    }

    polinom& operator +=(const polinom& other)
    {
        for (int i = 0; i < other.monoms.size(); i++)
        {
            this->adding(other.monoms[i]);
        }
        return *this;
    }

        polinom& operator -=(const polinom& other)
    {
        for (int i = 0; i < other.monoms.size(); i++)
        {
            this->del(other.monoms[i]);
        }
        return *this;
    }

    polinom operator -- ()
    {
        for (int i = 0; i < this->monoms.size(); i++)
        {
            this->monoms[i].constant--;
        }
        return  *this;
    }

    polinom operator ++ (int)
    {
        polinom temp;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            temp.monoms.push_back(this->monoms[i]);
            temp.monoms[i].constant++;
        }
        return temp;
    }

    polinom operator -- (int)
    {
        polinom temp;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            temp.monoms.push_back(this->monoms[i]);
            temp.monoms[i].constant--;
        }
        return temp;
    }

    int& operator [] (int id)
    {
        return this->monoms[id].constant;
    }

    polinom operator * (const polinom& other)
    {
        polinom temp;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            for (int j = 0; j < this->monoms.size(); j++)
            {
                monom mon(this->monoms[i].degree + other.monoms[j].degree, 'x', this->monoms[i].constant * other.monoms[j].constant);
                temp.adding(mon);
            }
        }
        return temp;
    }

    polinom& operator / (int d)
    {
        for (int i = 0; i < this->monoms.size(); i++)
        {
            this->monoms[i].constant /= d;;
        }
        return *this;
    }

    polinom& operator *= (const polinom& other)
    {
        polinom temp;
        temp = *this;
        for (int i = 0; i < temp.monoms.size(); i++)
        {
            for (int j = 0; j < other.monoms.size(); j++) {
                monom mon(temp.monoms[i].degree + other.monoms[j].degree, 'x', temp.monoms[i].constant * other.monoms[j].constant);
                temp.adding(mon);
            }
        }
        *this = temp;
        return *this;
    }

    polinom& operator /= (int d)
    {
        for (int i = 0; i < this->monoms.size(); i++)
        {
            this->monoms[i].constant /= d;;
        }
        return *this;
    }
        std::ostream& operator << (std::ostream& mon)
    {
        for (int i = 0; i < this->monoms.size(); i++)
        {
            if (this->monoms[i].constant == 0 && this->monoms.size() == 1)
            {
                std::cout << this->monoms[i].constant << " ";
            }
            else if (this->monoms[i].degree == 0)
            {
                if (this->monoms[i].constant < 0)
                {
                    std::cout << "- " << this->monoms[i].constant * (-1) << " ";
                }
                else
                {
                    std::cout << "+ " << this->monoms[i].constant << " ";
                }
            }
            else
            {
                if (this->monoms[i].constant < 0)
                {
                    std::cout << "- " << this->monoms[i].constant * (-1) << "x^" << this->monoms[i].degree << " ";
                }
                else
                {
                    std::cout << "+ " << this->monoms[i].constant << "x^" << this->monoms[i].degree << " ";
                }
            }
        }
        return mon;
    }
private:
    struct monom
    {
    public:
        monom(int degree, char x, int constant)
        {
            this->degree = degree;
            this->x = x;
            this->constant = constant;
        }

        ~monom() {}

        monom(const polinom::monom& other)
        {
            this->degree = other.degree;
            this->x = other.x;
            this->constant = other.constant;
        }

        bool operator != (const polinom::monom& other)
        {
            if (this->constant == other.constant && this->x == other.x && this->degree == other.degree)
            {
                return false;
            }
            return true;
        }

        polinom::monom& operator = (const polinom::monom& other)
        {
            this->constant = other.constant;
            this->x = other.x;
            this->degree = other.degree;
            return *this;
        }

        int degree;
        char x;
        int constant;
    };
    std::vector<monom> monoms;
public:
    void adding(monom newMon)
    {
        bool flag = 1;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            if (!(this->monoms[i].degree != newMon.degree))
            {
                this->monoms[i].constant += newMon.constant;
                return;
            }
        }
        this->monoms.push_back(newMon);
    }
    void del(monom newMon)
    {
        bool flag = 1;
        for (int i = 0; i < this->monoms.size(); i++)
        {
            if (!(this->monoms[i].degree != newMon.degree))
            {
                this->monoms[i].constant -= newMon.constant;
                return;
            }
        }
        newMon.constant *= -1;
        this->monoms.push_back(newMon);
    }
};

int main()
{
    polinom a;
    std::istream mon_in = std::istream(nullptr);
    a >> mon_in;
    a >> mon_in;
    std::ostream mon_out = std::ostream(nullptr);
    a << mon_out;
    ++a;
    std::cout << std::endl;
    std::cout << a[0] << '\n';
    polinom b;
    b >> mon_in;
    b >> mon_in;
    polinom c = (a * b);
    c *= a;
    //polinom h = (a / 2);
    c << mon_out;
    std::cout << std::endl;
    return 0;
}