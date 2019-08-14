#include <iostream>
using namespace std;

//int sum(int a, int b) {
//	return a + b;
//}

class Sum {
	int m_age;
public:
	Sum(int age) :m_age(age) { }
	int operator()(int a, int b) {
		if (this->m_age > 10) {
		}
		else {
		}
		return a + b;
	}
};

class Point {
	friend ostream &operator<<(ostream &, const Point &);
public:
	int m_x;
	int m_y;
	Point(int x, int y) :m_x(x), m_y(y) { }


};

// output stream
ostream &operator<<(ostream &cout, const Point &point) {
	return cout << "(" << point.m_x << ", " << point.m_y << ")";
}

// input stream
istream &operator>>(istream &cin, Point &point) {
	return cin >> point.m_x >> point.m_y;
}

int main() {
	Point p1(10, 20);
	cin >> p1;
	cout << p1 << endl;

	// Sum sum(20);

	// cout << sum(10, 20) << endl;
	// cout << sum.operator()(10, 20) << endl;
	getchar();
	getchar();
	return 0;
}