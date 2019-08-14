#include <iostream>
using namespace std;

class Person {
public:
	static int ms_count;
};

class Student : public Person {

};

int Person::ms_count = 0;

int main() {

	Person::ms_count = 20;
	Student::ms_count = 10;

	cout << Person::ms_count << endl;

	getchar();
	return 0;
}

//class Car {
//private:
//	static int m_count;
//public:
//	Car() {
//		m_count++;
//	}
//	~Car() {
//		m_count--;
//	}
//	static int getCount() {
//		return m_count;
//	}
//};
//
//int Car::m_count = 0;
//
//int main() {
//	/*Car car1;
//	Car car2;
//	Car *p = new Car();
//	delete p;
//
//	cout << car1.getCount() << endl;*/
//
//	cout << Car::getCount() << endl;
//
//	/*Car car1;
//	car1.m_count = 10;
//	car1.getCount();
//
//	p->m_count = 10;
//	p->getCount();
//
//	Car::m_count = 20;
//	Car::getCount();*/
//
//	getchar();
//	return 0;
//}

//class Car {
//public:
//	static int m_price;
//	void run() {
//		cout << "run()" << endl;
//
//	}
//};
//
//// 初始化静态成员变量
//int Car::m_price = 0;
//
//int main() {
//	Car car;
//	car.m_price = 10;
//
//	Car car2;
//	car2.m_price = 20;
//
//	Car::m_price = 30;
//
//	Car *p = new Car();
//	p->m_price = 40;
//
//	Car car3;
//	cout << car3.m_price << endl;
//
//
//	getchar();
//	return 0;
//}