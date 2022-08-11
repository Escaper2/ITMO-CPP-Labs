#pragma warning(suppress : 4996)
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator> 
#include <cstdio>
#include <sstream>
#include "index.h"
#include "rotation.h"
#include "Cubic.h"
#include "cubicRubick.h"


int main()
{

	cubicRubick my;

	unsigned cnts;

	if (my.isTrue())
	{
		my.print();
	}

	my.turnCube("F'");

	my.turnCube("U");

	my.scrambleFromFile("scramble.txt");

	my.scrambleFromFile("scramble2.txt");
		 
	my.cubeAssembling();

	//my.generation_algorithm(2);

	//my.cubeAssembling();
	

	//if (fin.is_open()) {

	//	fin.unsetf(std::ios_base::skipws);

	//	cnts = std::count(std::istream_iterator<char>(fin), std::istream_iterator<char>(), '\n');



	//	while (std::getline(fin, line)) {

	//		getline(fin, line);

	//		std::cout << line << std::endl;
	//	}

	//}

		

		//std::cout << cnts;

	//}

	//fin.close();

	//fin.open("laba.txt",std::ios::ate);


	/*if (fin.is_open()) {

		while (std::getline(fin, input)) {

			cnt++;

			std::cout << input << std::endl;

			my.scrambling(input);

			input.clear();
		}

		

		std::cout << std::endl;

		std::cout << cnt << std::endl;
	}*/



	//my.print();




	//if (!my.is_true()) {

	//	int flag = my.build_algorithm();

	//	if (flag == 1) {

	//		cubik_rubic another;

	//		fin.open("laba4.txt");

	//		fout.open("path.txt");

	//		//int ds;

	//		//FILE * fin = fopen("laba4.txt", "r+");

	//		//ds = ftell(fin);

	//		while (std::getline(fin, input)) {

	//			another.scrambling(input);

	//			input.clear();
	//		}

	//		fin.close();

	//		fin.open("laba4.txt");

	//		fin.seekg(-3, fin.end);

	//		


	//		//int b = fin.tellg();

	//		//std::cout << b << std::endl;*/

	//		//fin.seekg(-3, fin.end);
	//		//char in[3];


	//		//
	//		//fseek(fin, -3, SEEK_END);

	//		//ds = ftell(fin);

	//		//fgets(in, 3, fin);


	//		//fseek(fin, -6, SEEK_CUR);

	//		//ds = ftell(fin);

	//		//fgets(in, 3, fin);
	//		//
	//		//fseek(fin, -6, SEEK_CUR);

	//		//ds = ftell(fin);

	//		//fgets(in, 3, fin);

	//		//fseek(fin, -5, SEEK_CUR);

	//		//fgets(in, 3, fin);
	//		//fgets(in, 3, fin);

	//		//int b = fin.tellg();

	//		//std::cout << b;

	//		//getline(fin, input);

	//		//fin.seekg(-3, fin.cur);

	//		//getline(fin, input);

	//	/*	fin.seekg(-3, fin.cur);

	//		b = fin.tellg();

	//		std::cout << b << std::endl;
	//		getline(fin, input);

	//		fin.seekg(-6, fin.cur); 

	//		b = fin.tellg();
	//		std::cout << b << std::endl;
	//		getline(fin, input);

	//		fin.seekg(-4, fin.cur);

	//		b = fin.tellg();
	//		std::cout << b << std::endl;
	//		getline(fin, input);

	//		fin.seekg(-3, fin.cur);

	//		b = fin.tellg();
	//		std::cout << b << std::endl;
	//		getline(fin, input);*/

	//		//fin.seekg(-7, fin.cur);

	//		//getline(fin, input);
	//		

	//		int tmp = 0;

	//		for (int i = 2; i < cnt+2; i++) {

	//			getline(fin, input);

	//			

	//			if (input == "'") {

	//				fin.seekg((-3*(i-1))-1-tmp, fin.end);

	//				getline(fin, input);

	//				fout << input << " " ;

	//				tmp++;

	//			}

	//			else {

	//				fout << input << " ";
	//			}

	//			another.buildFromFile(input);

	//			input.clear();

	//			fin.seekg((-3*i) - tmp, fin.end);

	//		}

	//	}

	//}
	 //cnts = std::count(std::istream_iterator<char>(fin), std::istream_iterator<char>(),"\n");



	

	//std::cout << cnts; 




	//if (my.is_true())
	//{
	//	my.print();
	//}
	//my.generation_algorithm(2);
	//my.build_algorithm();


	//std::cout << "\n" << "DONE" << std::endl;

	//my.print();
	//return 0;


}
