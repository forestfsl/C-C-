#include <iostream>
#include "Point.h"
using namespace std;

// operator overload

//class Point {
//	friend Point operator+(const Point &, const Point &);
//	int m_x;
//	int m_y;
//public:
//	Point(int x, int y) :m_x(x), m_y(y) { }
//	void display() {
//		cout << "(" << this->m_x << ", " << this->m_y << ")" << endl;
//	}
//};
//
//// 运算符（操作符）重载
//Point operator+(const Point &p1, const Point &p2) {
//	return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
//}


int main() {
	Point p0(5, 10);
	Point p1(30, 70);
	Point p2(10, 40);
	Point p3 = p1++ - p2;

	// Java.toString   OC.description
	cout << p0 << p1 << p2 << p3 << endl;

	// p0 << 1 << 2 << 3;

	// 运算符重载：最好保留运算符以前的语义

	// p1.display();
	// p3.display();

	/*int a = 10;
	int b = 0;
	b = a++ + 8;
	b = ++a + 8;
	cout << a << endl;*/

	// (a++) = 40;
	// (++a) = 50;

	/*
	int a = 10;
	a++;
	++a;
	(a++) = 30;
	(++a) = 40;
	*/

	// int a = 10;
	// int c = a++ + ++a + a++ + ++a;

	/*p1++;
	++p1;
	p1--;
	--p1;*/

	(-(-p1));

	// cout << (p1 != p2) << endl;

	/*Point p3 = p0 + p1 + p2;
	p3.display();

	Point p4 = p1 - p2;
	p4.display();

	(p1 += p2) = Point(100, 200);
	p1.display();*/


	/*int a = 10;
	int b = 20;
	(a += b) = 50;
	cout << a << endl;*/

	// Point p3 = p1.operator+(p2);
	// Point p3 = operator+(p1, p2);

	getchar();
	return 0;
}