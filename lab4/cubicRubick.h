#pragma once
class cubicRubick {


public:

	cubicRubick() {

		for (int i = 0; i < 3; i++) {


			for (int j = 0; j < 3; j++) {


				for (int k = 0; k < 3; k++) {

					index NEW(i, j, k);

					cubic temp(NEW);

					cubicsArr[i][j][k] = temp;
				}

			}

		}

		for (int j = 0; j < 3; j++) {


			for (int k = 0; k < 3; k++) {


				cubicsArr[0][j][k].Set_color(white);

			}
		}


		for (int i = 0; i < 3; i++) {


			for (int k = 0; k < 3; k++) {


				cubicsArr[i][0][k].Set_color(red);

			}
		}

		for (int i = 0; i < 3; i++) {


			for (int j = 0; j < 3; j++) {


				cubicsArr[i][j][2].Set_color(green);


			}
		}

		for (int i = 0; i < 3; i++) {


			for (int k = 0; k < 3; k++) {


				cubicsArr[i][2][k].Set_color(blue);
			}

		}

		for (int i = 0; i < 3; i++) {


			for (int j = 0; j < 3; j++) {


				cubicsArr[i][j][0].Set_color(yellow);

			}
		}

		for (int j = 0; j < 3; j++) {


			for (int k = 0; k < 3; k++) {


				cubicsArr[2][j][k].Set_color(purple);
			}
		}


	}

	void print()
	{
		color temp = cubicsArr[0][1][1].getColor();


		for (int j = 0; j < 3; j++) {


			for (int k = 0; k < 3; k++) {


				if (cubicsArr[0][j][k].rotate.getX() == 0 && cubicsArr[0][j][k].rotate.getY() == 0 && cubicsArr[0][j][k].rotate.getZ() == 0) {


					if (cubicsArr[0][1][1].getColor() == white) {


						std::cout << "white  ";

					}

					else if (cubicsArr[0][j][k].countOfColors() > 1) {


						for (int g = 0; g < cubicsArr[0][j][k].countOfColors(); g++) {


							if (cubicsArr[0][j][k].Get_number_color(g) == temp) {


								std::cout << "white  ";
							}
						}
					}
				}
			}
			std::cout << "\n";
		}


		temp = this->cubicsArr[1][0][1].getColor();

		for (int j = 0; j < 3; j++) {


			for (int k = 0; k < 3; k++) {


				if (cubicsArr[j][0][k].rotate.getX() == 0 && cubicsArr[j][0][k].rotate.getY() == 0 && cubicsArr[j][0][k].rotate.getZ() == 0) {


					if (this->cubicsArr[1][0][1].getColor() == red) {


						std::cout << "red  ";

					}


					else if (this->cubicsArr[j][0][k].countOfColors() > 1) {


						for (int g = 0; g < this->cubicsArr[j][0][k].countOfColors(); g++) {


							if (this->cubicsArr[j][0][k].Get_number_color(g) == temp) {


								std::cout << "red  ";
							}
						}
					}
				}
			}

			std::cout << "\n";
		}


		temp = this->cubicsArr[1][1][2].getColor();

		for (int i = 0; i < 3; i++) {


			for (int j = 0; j < 3; j++) {


				if (cubicsArr[i][j][2].rotate.getX() == 0 && cubicsArr[i][j][2].rotate.getY() == 0 && cubicsArr[i][j][2].rotate.getZ() == 0) {


					if (this->cubicsArr[1][1][2].getColor() == green) {


						std::cout << "green  ";

					}

					else if (this->cubicsArr[i][j][2].countOfColors() > 1) {


						for (int g = 0; g < this->cubicsArr[i][j][2].countOfColors(); g++) {


							if (this->cubicsArr[i][j][2].Get_number_color(g) == temp) {

								std::cout << "green  ";
							}
						}
					}
				}
			}

			std::cout << "\n";
		}

		temp = cubicsArr[1][2][1].getColor();


		for (int i = 0; i < 3; i++) {


			for (int k = 0; k < 3; k++) {


				if (cubicsArr[i][2][k].rotate.getX() == 0 && cubicsArr[i][2][k].rotate.getY() == 0 && cubicsArr[i][2][k].rotate.getZ() == 0) {


					if (cubicsArr[i][2][k].getColor() == blue) {

						std::cout << "blue  ";

					}

					else if (cubicsArr[i][2][k].countOfColors() > 1) {


						for (int g = 0; g < this->cubicsArr[i][2][k].countOfColors(); g++) {


							if (this->cubicsArr[i][2][k].Get_number_color(g) == temp) {


								std::cout << "blue  ";
							}
						}
					}
				}
			}


			std::cout << "\n";

		}


		temp = cubicsArr[1][1][0].getColor();


		for (int i = 0; i < 3; i++) {


			for (int j = 0; j < 3; j++) {


				if (cubicsArr[i][j][0].rotate.getX() == 0 && cubicsArr[i][j][0].rotate.getY() == 0 && cubicsArr[i][j][0].rotate.getZ() == 0) {


					if (cubicsArr[1][1][0].getColor() == yellow) {


						std::cout << "yellow  ";
					}

					else if (this->cubicsArr[i][j][0].countOfColors() > 1) {

						for (int g = 0; g < this->cubicsArr[i][j][0].countOfColors(); g++) {


							if (this->cubicsArr[i][j][0].Get_number_color(g) == temp) {


								std::cout << "yellow  ";

							}
						}
					}
				}
			}

			std::cout << "\n";

		}

		temp = cubicsArr[2][1][1].getColor();

		for (int j = 0; j < 3; j++) {

			for (int k = 0; k < 3; k++) {


				if (cubicsArr[2][j][k].rotate.getX() == 0 && cubicsArr[2][j][k].rotate.getY() == 0 && cubicsArr[2][j][k].rotate.getZ() == 0) {


					if (this->cubicsArr[2][1][1].getColor() == purple) {

						std::cout << "purple  ";


					}

					else if (this->cubicsArr[2][j][k].countOfColors() > 1) {


						for (int g = 0; g < this->cubicsArr[2][j][k].countOfColors(); g++) {


							if (this->cubicsArr[2][j][k].Get_number_color(g) == temp) {


								std::cout << "purple  ";

							}
						}
					}
				}
			}

			std::cout << "\n";

		}
	}

	bool isTrue()
	{
		int rot[7] = { -270, -180, -90, 0, 90, 180, 270 };

		bool flag = false;

		int counter = 0;

		for (int g = 0; g < 7; g++) {


			for (int i = 0; i < 3; i++) {


				for (int j = 0; j < 3; j++) {


					for (int k = 0; k < 3; k++) {


						if (i != 1 || j != 1 || k != 1) {



							if (cubicsArr[i][j][k].rotate.getX() == rot[g] && cubicsArr[i][j][k].rotate.getY() == rot[g] && cubicsArr[i][j][k].rotate.getZ() == rot[g]) {


								counter++;

							}

							if (counter == 26) {


								flag = true;
							}
						}
					}
				}
			}

			counter = 0;

			if (counter == 26) {


				break;

			}

		}

		if (flag) {

			return true;

		}

		else {

			return false;
		}
	}

	void generateScramble(int modificator)
	{
		if (modificator == 2) {


			int rotationCount = 0;


			if (rotationCount < 0) {


				rotationCount *= -1;
			}

			rotationCount = rand() % 100;


			while (rotationCount != 0) {


				int number_of_rotation = 0;


				number_of_rotation = rand() % 12;


				if (number_of_rotation < 0) {


					number_of_rotation *= -1;

				}

				if (number_of_rotation == 0) {

					F(1);

					path.push_back("F'");

				}

				if (number_of_rotation == 1) {

					F(2);

					path.push_back("F");
				}

				if (number_of_rotation == 2) {

					B(1);

					path.push_back("B'");

				}

				if (number_of_rotation == 3) {

					B(2);

					path.push_back("B");
				}

				if (number_of_rotation == 4) {

					L(1);

					path.push_back("L'");

				}

				if (number_of_rotation == 5) {

					L(2);

					path.push_back("L");
				}

				if (number_of_rotation == 6) {

					R(1);

					path.push_back("R'");

				}

				if (number_of_rotation == 7) {

					R(2);

					path.push_back("R");
				}

				if (number_of_rotation == 8) {

					U(1);

					path.push_back("U'");
				}

				if (number_of_rotation == 9) {

					U(2);

					path.push_back("U");
				}

				if (number_of_rotation == 10) {

					D(1);

					path.push_back("D'");
				}

				if (number_of_rotation == 11) {

					D(2);

					path.push_back("D");
				}

				rotationCount--;
			}
		}

		std::cout << "generation end...   " << '\n';

	}


	void printPath() {

		auto start = path.begin();

		auto end = path.end();

		end--;

		fout.open("path.txt");

		for (end; end != start; end--) {

			fout << *end << " ";

		}

		fout << *start << " ";

		fout << std::endl << std::endl;
	}

	void turnCube(std::string input) {

		if (fileFlag == 1) {

			fout.open(fileName, std::ios::app | std::ios::ate);

			fout << input << "\n";

			fout.close();

			cnt++;

			scrambling(input);


		}

		if (fileFlag == 0) {

			fout.open(fileName);

			fout.seekp(0, fout.beg);

			std::cout << fout.tellp();

			fout << input << "\n";

			fileFlag = 1;

			fout.close();

			scrambling(input);

			cnt++;
		}




		scrambling(input);


	}


	void changeFileName(std::string newName) {


		fileName = newName;

	}


	void scrambleFromFile(std::string name) {



		std::ifstream fin(name);



		std::string input;

		if (fin.is_open()) {

			//if (fileFlag == 0) fileName = name;

			//if (fileFlag == 1) std::ofstream fout(fileName, std::ios_base::app | std::ios_base::ate);

			std::ofstream fout(fileName, std::ios_base::app | std::ios_base::ate);

			while (std::getline(fin, input)) {


				cnt++;

				std::cout << input << std::endl;

				fout << input << "\n";

				scrambling(input);

				input.clear();
			}



			std::cout << std::endl;

			std::cout << cnt << std::endl;

			fileFlag = 1;
		}

		fin.close();

	}

	//void genPath() {

	//	auto start = path.begin();

	//	auto end = path.end();

	//	for (start; start != end; start++) {

	//		if (*start == "F") std::cout << "F' ";
	//		if (*start == "F'") std::cout << "F ";
	//		if (*start == "R'") std::cout << "R ";
	//		if (*start == "R") std::cout << "R' ";
	//		if (*start == "U") std::cout << "U' ";
	//		if (*start == "U'") std::cout << "U ";
	//		if (*start == "B") std::cout << "B' ";
	//		if (*start == "B'") std::cout << "B ";
	//		if (*start == "L") std::cout << "L' ";
	//		if (*start == "L'") std::cout << "L ";
	//		if (*start == "D") std::cout << "D' ";
	//		if (*start == "D'") std::cout << "D ";
	//	}

	//}


	void checkForEnd() {





		if (this->isTrue())
		{

			std::cout << "DONE \n" << std::endl;

			print();

			printPath();

			//genPath();

			exit(0);
		}


		this->print();

	}



	void cubeAssembling() {

		std::ifstream fin;

		std::ofstream frout;

		std::string input;

		fin.open(fileName);


		if (!isTrue()) {

			try
			{
				int flag = 1;

				if (flag == 1) {

					throw 3 ;
				}

			}
			catch (int i)
			{


				cubicRubick an;

				while (std::getline(fin, input)) {

					an.scrambling(input);

					input.clear();
				}

				fin.close();

				fin.open(fileName);

				fout.open("path.txt");

				fin.seekg(-3, fin.end);

				int tmp = 0;

				for (int i = 2; i < cnt + 2; i++) {

					getline(fin, input);

					

					if (input == "'") {

						fin.seekg((-3 * (i - 1)) - 1 - tmp, fin.end);

						getline(fin, input);



						tmp++;

					}

					
					an.buildFromFile(input);

					input = inverse(input);

					fout << input << " ";

					input.clear();

					an.checkForEndFromFile();

					fin.seekg((-3 * i) - tmp, fin.end);
					
				}
			}
		}
	}





private:
	cubic cubicsArr[3][3][3];


	void checkForEndFromFile() {



		if (this->isTrue()) {


			std::cout << "DONE \n" << std::endl;

			print();

			exit(0);
		}


		print();

	}

	void F(int flag) {


		if (flag == 1) {

			for (int i = 0; i < 3; i++) {


				for (int k = 0; k < 3; k++) {


					cubicsArr[i][0][k].rotate.setX(cubicsArr[i][0][k].rotate.getX() + 90);


					cubicsArr[i][0][k].rotate.setY(cubicsArr[i][0][k].rotate.getY() + 90);


					cubicsArr[i][0][k].rotate.setZ(cubicsArr[i][0][k].rotate.getZ() + 90);


					if (cubicsArr[i][0][k].rotate.getX() == 360) {


						cubicsArr[i][0][k].rotate.setX(0);

					}

					if (cubicsArr[i][0][k].rotate.getY() == 360) {


						cubicsArr[i][0][k].rotate.setY(0);

					}

					if (cubicsArr[i][0][k].rotate.getZ() == 360) {


						cubicsArr[i][0][k].rotate.setZ(0);

					}
				}
			}
		}

		else {

			for (int i = 0; i < 3; i++) {


				for (int k = 0; k < 3; k++) {


					cubicsArr[i][0][k].rotate.setX(cubicsArr[i][0][k].rotate.getX() - 90);


					cubicsArr[i][0][k].rotate.setY(cubicsArr[i][0][k].rotate.getY() - 90);


					cubicsArr[i][0][k].rotate.setZ(cubicsArr[i][0][k].rotate.getZ() - 90);


					if (cubicsArr[i][0][k].rotate.getX() == -360) {


						cubicsArr[i][0][k].rotate.setX(0);
					}

					if (cubicsArr[i][0][k].rotate.getY() == -360) {


						cubicsArr[i][0][k].rotate.setY(0);

					}

					if (cubicsArr[i][0][k].rotate.getZ() == -360) {


						cubicsArr[i][0][k].rotate.setZ(0);
					}
				}
			}

		}
	}

	void B(int flag) {


		if (flag == 1) {

			for (int i = 0; i < 3; i++) {


				for (int k = 0; k < 3; k++) {


					cubicsArr[i][2][k].rotate.setX(cubicsArr[i][2][k].rotate.getX() - 90);

					cubicsArr[i][2][k].rotate.setY(cubicsArr[i][2][k].rotate.getY() - 90);

					cubicsArr[i][2][k].rotate.setZ(cubicsArr[i][2][k].rotate.getZ() - 90);

					if (cubicsArr[i][2][k].rotate.getX() == -360) {


						cubicsArr[i][2][k].rotate.setX(0);

					}

					if (cubicsArr[i][2][k].rotate.getY() == -360) {


						cubicsArr[i][2][k].rotate.setY(0);

					}

					if (cubicsArr[i][2][k].rotate.getZ() == -360) {


						cubicsArr[i][2][k].rotate.setZ(0);

					}
				}
			}
		}

		else {

			for (int i = 0; i < 3; i++) {


				for (int k = 0; k < 3; k++) {


					cubicsArr[i][2][k].rotate.setX(cubicsArr[i][2][k].rotate.getX() + 90);


					cubicsArr[i][2][k].rotate.setY(cubicsArr[i][2][k].rotate.getY() + 90);


					cubicsArr[i][2][k].rotate.setZ(cubicsArr[i][2][k].rotate.getZ() + 90);

					if (this->cubicsArr[i][2][k].rotate.getX() == 360) {


						cubicsArr[i][2][k].rotate.setX(0);

					}

					if (cubicsArr[i][2][k].rotate.getY() == 360) {


						cubicsArr[i][2][k].rotate.setY(0);

					}

					if (cubicsArr[i][2][k].rotate.getZ() == 360) {


						cubicsArr[i][2][k].rotate.setZ(0);

					}
				}
			}

		}

	}


	void L(int flag) {


		if (flag == 1) {

			for (int i = 0; i < 3; i++) {


				for (int j = 0; j < 3; j++) {


					cubicsArr[i][j][0].rotate.setX(cubicsArr[i][j][0].rotate.getX() + 90);

					cubicsArr[i][j][0].rotate.setY(cubicsArr[i][j][0].rotate.getY() + 90);

					cubicsArr[i][j][0].rotate.setZ(cubicsArr[i][j][0].rotate.getZ() + 90);

					if (cubicsArr[i][j][0].rotate.getX() == 360) {


						cubicsArr[i][j][0].rotate.setX(0);

					}

					if (cubicsArr[i][j][0].rotate.getY() == 360) {


						cubicsArr[i][j][0].rotate.setY(0);

					}

					if (cubicsArr[i][j][0].rotate.getZ() == 360) {


						cubicsArr[i][j][0].rotate.setZ(0);

					}
				}
			}
		}

		else {

			for (int i = 0; i < 3; i++) {


				for (int j = 0; j < 3; j++) {


					cubicsArr[i][j][0].rotate.setX(cubicsArr[i][j][0].rotate.getX() - 90);


					cubicsArr[i][j][0].rotate.setY(cubicsArr[i][j][0].rotate.getY() - 90);


					cubicsArr[i][j][0].rotate.setZ(cubicsArr[i][j][0].rotate.getZ() - 90);


					if (cubicsArr[i][j][0].rotate.getX() == -360) {


						cubicsArr[i][j][0].rotate.setX(0);

					}

					if (cubicsArr[i][j][0].rotate.getY() == -360) {


						cubicsArr[i][j][0].rotate.setY(0);

					}

					if (this->cubicsArr[i][j][0].rotate.getZ() == -360) {


						cubicsArr[i][j][0].rotate.setZ(0);

					}
				}
			}

		}
	}
	
	std::string inverse(std::string input) {


		if (input == "F") return("F'");
		if (input == "F'") return("F");
		if (input == "R'") return("R");
		if (input == "R") return("R'");
		if (input == "U") return("U'");
		if (input == "U'") return("U");
		if (input == "B") return("B'");
		if (input == "B'") return("B");
		if (input == "L") return("L'");
		if (input == "L'") return("L");
		if (input == "D") return("D'");
		if (input == "D'") return("D");


	}

	void R(int flag) {


		if (flag == 1) {

			for (int i = 0; i < 3; i++) {


				for (int j = 0; j < 3; j++) {


					cubicsArr[i][j][2].rotate.setX(cubicsArr[i][j][2].rotate.getX() - 90);

					cubicsArr[i][j][2].rotate.setY(cubicsArr[i][j][2].rotate.getY() - 90);

					cubicsArr[i][j][2].rotate.setZ(cubicsArr[i][j][2].rotate.getZ() - 90);


					if (cubicsArr[i][j][2].rotate.getX() == -360) {

						cubicsArr[i][j][2].rotate.setX(0);

					}

					if (cubicsArr[i][j][2].rotate.getY() == -360) {


						cubicsArr[i][j][2].rotate.setY(0);

					}

					if (cubicsArr[i][j][2].rotate.getZ() == -360) {


						cubicsArr[i][j][2].rotate.setZ(0);

					}
				}
			}

		}

		else {

			for (int i = 0; i < 3; i++) {


				for (int j = 0; j < 3; j++) {


					cubicsArr[i][j][2].rotate.setX(cubicsArr[i][j][2].rotate.getX() + 90);

					cubicsArr[i][j][2].rotate.setY(cubicsArr[i][j][2].rotate.getY() + 90);

					cubicsArr[i][j][2].rotate.setZ(cubicsArr[i][j][2].rotate.getZ() + 90);


					if (cubicsArr[i][j][2].rotate.getX() == 360) {


						cubicsArr[i][j][2].rotate.setX(0);

					}

					if (cubicsArr[i][j][2].rotate.getY() == 360) {


						cubicsArr[i][j][2].rotate.setY(0);
					}

					if (cubicsArr[i][j][2].rotate.getZ() == 360)

					{
						cubicsArr[i][j][2].rotate.setZ(0);
					}
				}
			}

		}
	}

	void D(int flag)
	{
		if (flag == 1) {

			for (int j = 0; j < 3; j++) {

				for (int k = 0; k < 3; k++) {


					cubicsArr[0][j][k].rotate.setX(cubicsArr[0][j][k].rotate.getX() + 90);

					cubicsArr[0][j][k].rotate.setY(cubicsArr[0][j][k].rotate.getY() + 90);

					cubicsArr[0][j][k].rotate.setZ(cubicsArr[0][j][k].rotate.getZ() + 90);


					if (cubicsArr[0][j][k].rotate.getX() == 360) {


						cubicsArr[0][j][k].rotate.setX(0);

					}

					if (cubicsArr[0][j][k].rotate.getY() == 360) {


						cubicsArr[0][j][k].rotate.setY(0);

					}

					if (cubicsArr[0][j][k].rotate.getZ() == 360) {


						cubicsArr[0][j][k].rotate.setZ(0);

					}
				}
			}
		}

		else {

			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					this->cubicsArr[0][j][k].rotate.setX(this->cubicsArr[0][j][k].rotate.getX() - 90);

					this->cubicsArr[0][j][k].rotate.setY(this->cubicsArr[0][j][k].rotate.getY() - 90);

					this->cubicsArr[0][j][k].rotate.setZ(this->cubicsArr[0][j][k].rotate.getZ() - 90);

					if (this->cubicsArr[0][j][k].rotate.getX() == -360)
					{
						this->cubicsArr[0][j][k].rotate.setX(0);
					}

					if (this->cubicsArr[0][j][k].rotate.getY() == -360)
					{
						this->cubicsArr[0][j][k].rotate.setY(0);
					}

					if (this->cubicsArr[0][j][k].rotate.getZ() == -360)
					{
						this->cubicsArr[0][j][k].rotate.setZ(0);
					}
				}
			}

		}
	}

	void U(int flag) {


		if (flag == 1) {

			for (int j = 0; j < 3; j++) {


				for (int k = 0; k < 3; k++) {


					cubicsArr[2][j][k].rotate.setX(cubicsArr[2][j][k].rotate.getX() - 90);


					cubicsArr[2][j][k].rotate.setY(cubicsArr[2][j][k].rotate.getY() - 90);


					cubicsArr[2][j][k].rotate.setZ(cubicsArr[2][j][k].rotate.getZ() - 90);


					if (cubicsArr[2][j][k].rotate.getX() == -360) {


						cubicsArr[2][j][k].rotate.setX(0);

					}

					if (cubicsArr[2][j][k].rotate.getY() == -360) {


						cubicsArr[2][j][k].rotate.setY(0);

					}

					if (cubicsArr[2][j][k].rotate.getZ() == -360) {


						cubicsArr[2][j][k].rotate.setZ(0);
					}
				}
			}
		}

		else {

			for (int j = 0; j < 3; j++) {


				for (int k = 0; k < 3; k++) {


					cubicsArr[2][j][k].rotate.setX(cubicsArr[2][j][k].rotate.getX() + 90);

					cubicsArr[2][j][k].rotate.setY(cubicsArr[2][j][k].rotate.getY() + 90);

					cubicsArr[2][j][k].rotate.setZ(cubicsArr[2][j][k].rotate.getZ() + 90);

					if (cubicsArr[2][j][k].rotate.getX() == 360) {


						cubicsArr[2][j][k].rotate.setX(0);

					}

					if (cubicsArr[2][j][k].rotate.getY() == 360) {


						cubicsArr[2][j][k].rotate.setY(0);
					}

					if (cubicsArr[2][j][k].rotate.getZ() == 360) {


						cubicsArr[2][j][k].rotate.setZ(0);

					}
				}
			}
		}
	}

	void buildFromFile(std::string turn) {

		if (turn == "F") F(2);
		if (turn == "F'") F(1);
		if (turn == "R'") R(1);
		if (turn == "R") R(2);
		if (turn == "U") U(2);
		if (turn == "U'") U(1);
		if (turn == "B") B(2);
		if (turn == "B'") B(1);
		if (turn == "L") L(2);
		if (turn == "L'") L(1);
		if (turn == "D") D(2);
		if (turn == "D'") D(1);


	}

	void scrambling(std::string turn) {


		if (turn == "F") F(1);
		if (turn == "F'") F(2);
		if (turn == "R'") R(2);
		if (turn == "R") R(1);
		if (turn == "U") U(1);
		if (turn == "U'") U(2);
		if (turn == "B") B(1);
		if (turn == "B'") B(2);
		if (turn == "L") L(1);
		if (turn == "L'") L(2);
		if (turn == "D") D(1);
		if (turn == "D'") D(2);


	}


	unsigned int cnt = 0;

	unsigned int fileFlag = 0;

	std::vector<std::string> path;

	std::string fileName = "laba4.txt";

	std::ofstream fout;
};