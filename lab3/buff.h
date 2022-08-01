// laba3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define size unsigned long long

template <typename T>
class buff {

public:
	buff(size cap = 1) {
	
		rbuff = new T[cap];

		condition = new status[cap];

		for (int i = 0; i < cap; i++) {

			rbuff[i] = 0; 
			condition[i] = white;
		

		}
		this->cap = cap;
		this->begin = 0;
		this->end = 0;
		this->sizeofring = 0;
	}

	void print() {

		for (int i = 0; i < cap; i++) {

			std::cout << rbuff[i] << " ";
			
		

		}
		std::cout << std::endl;
		//for (int i = 0; i < cap; i++) {

		//	std::cout << condition[i] << " ";


		//}


	}

	void printInOrder() {


		int i = begin;

		if (sizeofring == 1) {

			std::cout << rbuff[i] << " ";
			std::cout << std::endl;
			return;
		}

		for (i; i != end; i++) {


			try
			{
				if (i > cap - 1) {

					throw - 1;

				}
			}
			catch (int j) 
			{
				if (j == -1) {

					i = 0;

				}
			} 

			if (condition[i] == white) {

				continue;

			}

			if (i == end) {

				std::cout << rbuff[i] << " ";
				std::cout << std::endl;
				return;

			}

			
			std::cout << rbuff[i] << " ";


		}
		if (i == end) {

			std::cout << rbuff[i] << " ";
			std::cout << std::endl;
			return;

		}


	}

	void push_back(T temp) {

		if (sizeofring == 0) {
			sizeofring++;
			rbuff[end] = temp;
			condition[end] = blue;
			return;

		}

		if (sizeofring > 1 && sizeofring != cap) {
			sizeofring++;
			end++;
			rbuff[end] = temp;
			condition[end] = blue;
			return;
		}

		if (sizeofring == cap) {

			try
			{
				end++;
				begin++;
				if (end < 0 || end > cap - 1) {

					throw - 1;
				}

				if (begin > cap - 1) {

					throw - 2;
				}
			}
			catch (int i)
			{
				if (i == -1) {
				
					end = 0;

				}
				if (i == -2) {

					begin = 0;

				}
			}

			rbuff[end] = temp;
			return;
		}

	}

	void push_front(T temp) {

		if (sizeofring == 0) {
			
			sizeofring++;
			rbuff[begin] = temp;
			condition[begin] = blue;
			return;

		}
		if (sizeofring == 1 && condition[cap - 1] == white) {

			sizeofring++;
			rbuff[cap - 1] = temp;
			begin = cap - 1;
			condition[cap - 1] = blue;
			return;

		}
		if (sizeofring > 1 && condition[cap - 1] == blue) {
			

			if (end != begin - 1) {
				sizeofring++;
				rbuff[begin - 1] = temp;
				begin--;
				condition[begin] = blue;
				return;
			}
			else {
				
				rbuff[begin - 1] = temp; 
				begin--;
				try
				{
					end--;
					if (end < 0 || end > cap) {

						throw - 1;
					}
				}
				catch (int i)
				{	
					if (i == -1) {

						end = cap - 1;
					}


				}
				rbuff[begin] = temp;
				return;

			}

		}

	}


	T& getStart() {

		return rbuff[begin];
	}

	T& getEnd() {

		return rbuff[end];

	}

	T& operator[] (size i) {


		try
		{

			if (i >= cap) {

				throw - 1;
			}

			return rbuff[i];
		}
		catch (int j)
		{
			if (j == -1) {


				std::cout << "Error: Overflow" << std::endl;

				exit(-1);

			}
		}
	}

	void raiseCap(size i) {

		size newSize = cap + i;

		T* temp = new T[newSize]();

		status* temp2 = new status[newSize]();

		for (size j = 0; j < cap   ; j++) {

			temp[j] = rbuff[j];

			temp2[j] = blue; 
			

		}
		rbuff = temp;

		condition = temp2;

		temp = nullptr;
		
		delete[] temp;

		temp2 = nullptr;

		delete[] temp2; 

		cap = newSize;
	}

	void lowerCap(size i) {

		if (cap == 0) {

			std::cout << "Error: Overflow" << std::endl;

			exit(-1);

		}

		size newSize = cap - i;


		T* temp = new T[newSize]();

		int n = 0;
		

		for (int c = begin; c != end; c++) {

			

			try
			{
				if (c > cap - 1) {

					throw - 1;

				}
			}
			catch (int j)
			{
				if (j == -1) {

					c = 0;

				}
			}

			if (c == end) {

				break;

			}
			
			if (n > cap - 1) {

				break;
			}
			
			temp[n] = rbuff[c];

			n++;
		}


		try
		{
			end--;

			if (end < 0 || end > cap - 1) {

				throw - 1;
			}
		}
		catch (int j)
		{
			if (j == -1) {

				end = cap-1;

			}
		}
		


		rbuff = temp;

		temp = nullptr;

		delete[] temp;

		cap = newSize;

		begin = 0;

	}





private:


	T* rbuff;

	size cap;
	size begin;
	size end;
	size sizeofring;


	enum status
	{
		white,
		blue,
		red
	};


	status* condition;

};

