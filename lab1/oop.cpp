// oop.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#include <math.h>
#include <cmath>
#include <oop.h>






int main()
{

	std::cout << "Point:" << std::endl;

	Point a(2, 4);

	a.print();

	std::cout << "____________________" << std::endl;

	std::cout << "Polyline:" << std::endl << std::endl;

	Point b(3, -8);

	Point c(1, 2);

	Polyline line(a, b, c);

	std::cout << "Point in line: " << std::endl << std::endl;

	line.printPolyLine();

	std::cout << std::endl;

	std::cout << "Perimeter of line: " << std::endl;

	line.printLenOfPolyLine();

	std::cout << "____________________" << std::endl;

	std::cout << "Locked Polyline:" << std::endl << std::endl;

	LockedPolyLine locked(a, b, c);

	std::cout << "Perimeter of line: " << std::endl;

	locked.printLenOfLockedPolyLine();

	std::cout << std::endl;

	std::cout << "____________________" << std::endl;

	std::cout << "Polyangle:" << std::endl << std::endl;

	PolyAngle polyangle(a, b, c);

	std::cout << "Perimeter of polyangle: " << std::endl;

	std::cout << polyangle.lenOfPolyAngle() << std::endl;

	std::cout << std::endl;

	std::cout << "Area of polyangle: " << std::endl;

	polyangle.findArea();

	std::cout << "____________________" << std::endl;

	std::cout << "Triangle:" << std::endl << std::endl;

	TriForce triangle(a, b, c);

	std::cout << std::endl;

	std::cout << "Perimeter of triangle: " << std::endl;

	std::cout << triangle.lenOfTriForce() << std::endl;

	std::cout << std::endl;

	std::cout << "Area of triangle: " << std::endl;

	triangle.areaOfTriangle();

	std::cout << "____________________" << std::endl;

	std::cout << "Trapezium" << std::endl << std::endl;

	Point d(9, 4);

	Point fp(2, 2);
	Point sp(7, 2);
	Point tp(6, 4);
	Point fop(4, 4);

	Trapezium trapezium(fp, sp, tp, fop);

	std::cout << std::endl;

	std::cout << "Perimeter of trapezium: " << std::endl;


	std::cout<<trapezium.lenOfTrapezium()<<std::endl;

	std::cout << std::endl;

	std::cout << "Area of trapezium: " << std::endl;


	trapezium.areaOfTrapezium();

	std::cout << std::endl;

	std::cout << "____________________" << std::endl;

	std::cout << "Right Polyangle" << std::endl;

	std::cout << std::endl;

	Point r1(0, 0);
	Point r2(0, 5);
	Point r3(5, 5);
	Point r4(5, 0);

	CoolPolyAngle cpa(r1,r2,r3,r4);

	std::cout << std::endl;

	std::cout << "Perimeter of right polyangle: " << std::endl;

	std::cout <<cpa.lenOfCoolPolyAngle() << std::endl;

	std::cout << std::endl;

	std::cout << "Area of right polyangle: " << std::endl;

	cpa.areaOfCoolPolyAngle();

}
