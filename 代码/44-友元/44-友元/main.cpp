#include <iostream>
using namespace std;

class Point {
	// friend Point add(const Point &, const Point &);
	friend class Math;
private:
	int m_x;
	int m_y;
public:
	int getX() const { return this->m_x; };
	int getY() const { return this->m_y; };
	Point(int x, int y) :m_x(x), m_y(y) { }
};

class Math {
public:
	Point add(const Point &point1, const Point &point2) {
		return Point(point1.m_x + point2.m_x, point1.m_y + point2.m_y);
	}
};

//Point add(const Point &point1, const Point &point2) {
//	return Point(point1.m_x + point2.m_x, point1.m_y + point2.m_y);
//}

int main() {
	Point point1(10, 20);
	Point point2(20, 30);


	Point point = add(point1, point2);

	cout << endl;

	getchar();
	return 0;
}