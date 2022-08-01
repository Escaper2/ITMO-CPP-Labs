
#include <iostream>
#include <list>
#include <vector>
#include "buff.h"
#include "algo.h"


#define endl std::endl 
#define cout std::cout

 


int main() {


	cout << "Create ring buffer:" << endl;

	cout << endl;

	buff <int> a(4);

	a.print();          

	cout << endl;

	cout << "Push_back 1:" << endl; 

	cout << endl; 

	a.push_back(1);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl; 

	cout << endl;

	a.printInOrder();

	cout << endl;

	cout << "Push_front 2:" << endl;

	cout << endl;

	a.push_front(2);

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	a.printInOrder();

	cout << endl;

	cout << "Push_back 3:" << endl;

	cout << endl;

	a.push_back(3);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;

	cout << "Push_front 4:" << endl;

	cout << endl;

	a.push_front(4);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;

	cout << "Push_front 5:" << endl;

	cout << endl;

	a.push_front(5);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;

	cout << "Push_front 6:" << endl;

	cout << endl;

	a.push_front(6);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;

	cout << "Rise cap to 5:" << endl;

	cout << endl;

	a.raiseCap(1);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;

	cout << "Push back 7:" << endl;

	cout << endl;

	a.push_back(7);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;


	cout << "low cap to 4:" << endl;

	cout << endl;

	a.lowerCap(1);

	cout << endl;

	cout << "Print in memory:" << endl;

	cout << endl;

	a.print();

	cout << endl;

	cout << "Print in order:" << endl;

	cout << endl;

	a.printInOrder();

	cout << endl;


}