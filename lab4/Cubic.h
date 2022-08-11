#pragma once
enum color
{
	white,
	red,
	green,
	blue,
	yellow,
	purple
};

class cubic {


public:

	cubic()
	{
		index.setIndX(1);

		index.setIndY(1);

		index.setIndZ(1);

		if (colors.size() != 0) {


			while (colors.size() != 0) {


				colors.pop_back();
			}
		}
	}

	cubic(index index) {


		index.setIndX(index.getIndX());

		index.setIndY(index.getIndY());

		index.setIndZ(index.getIndZ());

		if (colors.size() != 0) {


			while (colors.size() != 0) {


				this->colors.pop_back();


			}
		}
	}

	cubic(index index, color one) {


		index = index;

		colors.push_back(one);

	}

	cubic(index index, color one, color two) : cubic(index, one) {


		colors.push_back(two);


	}

	cubic(index index, color one, color two, color three) : cubic(index, one, two) {


		colors.push_back(three);


	}


	cubic(const cubic &other) {


		index = other.index;


		for (int i = 0; i < other.colors.size(); i++) {


			colors[i] = other.colors[i];


		}
	}

	void Set_color(color NEW) {


		colors.push_back(NEW);


	}

	color getColor() {


		return colors.front();


	}

	int countOfColors() {


		return colors.size();


	}

	color Get_number_color(int number) {


		return colors[number];

	}



	rotation rotate;



private:


	index index;


	std::vector<color> colors;


};
