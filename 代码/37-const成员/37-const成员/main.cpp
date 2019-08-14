#include <iostream>
using namespace std;

class Car {
public:
	int m_price;
	// static const int msc_wheelsCount = 4;

	Car() :m_price(0) {

	}

	static void test3() {

	}

	void test4() {
		test1();
	}

	void test2() const {
		// this->m_price = 20;
	}

	// 不能在这个函数内部修改当前对象的成员变量
	void test1() const {
		// this->m_price = 10;

		test2();
		test3();
	}

	void test() {
		cout << "test()" << endl;
	}

	void test() const {
		cout << "test() const" << endl;
	}
};

int main() {
	Car car;
	car.test();

	Car *p = new Car();
	p->test();

	const Car car2;
	car2.test();

	const Car *p2 = new Car();
	p2->test();

	/*Car car1;
	car1.m_price = 100;

	Car car2;
	car2.m_price = 500;

	cout << sizeof(Car) << endl;*/

	getchar();
	return 0;
}