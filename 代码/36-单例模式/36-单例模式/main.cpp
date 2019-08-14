#include <iostream>
using namespace std;

/*
单例模式：
在程序运行过程中，可能会希望某些类的实例对象永远只有一个

1.把构造函数私有化
2.定义一个私有的静态成员变量指针，用于指向单例对象
3.提供一个公共的返回单例对象的静态成员函数
*/

//class Person {
//public:
//	static int ms_count;
//	virtual void run() {
//
//	}
//};
//
//int Person::ms_count = 0;
//
//class Student : public Person {
//public:
//	static int ms_count;
//	void run() {
//		ms_count = 10;
//	}
//};
//
//int Student::ms_count = 0;
//
//
//int main() {
//
//	Person::ms_count = 10;
//	Student::ms_count = 20;
//
//	cout << Person::ms_count << endl;
//	cout << Student::ms_count << endl;
//
//
//	getchar();
//	return 0;
//}

class Rocket {
public:
	// C++：静态成员函数
	// Java、OC：类方法
	static Rocket * sharedRocket() {
		// API p_thread
		if (ms_rocket == NULL) {
			ms_rocket = new Rocket();
		}
		return ms_rocket;
	}
	static void deleteRocket() {
		static Rocket *ms_rocket;
		if (ms_rocket == NULL) return;

		delete ms_rocket;
		ms_rocket = NULL;
	}
	static Rocket *ms_rocket;
private:
	Rocket() {
		cout << "Rocket()" << endl;
	}
	~Rocket() {
		cout << "~Rocket()" << endl;
	}
};

Rocket *Rocket::ms_rocket = NULL;

int main() {
	int *p = new int();
	*p = 5;
	delete p;
	p = NULL;

	cout << *p << endl;

	// mac
	// xcode


	Rocket *p1 = Rocket::sharedRocket();
	// ......
	Rocket::deleteRocket();


	Rocket *p2 = Rocket::sharedRocket();
	Rocket::deleteRocket();

	/*Rocket *p1 = Rocket::sharedRocket();
	Rocket *p2 = Rocket::sharedRocket();
	Rocket *p3 = Rocket::sharedRocket();
	Rocket *p4 = p3->sharedRocket();

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	cout << p4 << endl;*/

	getchar();
	return 0;
}