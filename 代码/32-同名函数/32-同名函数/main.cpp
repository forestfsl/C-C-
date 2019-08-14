#include <iostream>
using namespace std;

class Student {
public:
	int m_age;
};

class Worker {
public:
	int m_age;
};

class Undergraduate : public Student, public Worker {
public:
	int m_age;
};

int main() {
	Undergraduate ug;
	ug.m_age = 10;
	ug.Student::m_age = 20;
	ug.Worker::m_age = 30;
	ug.Undergraduate::m_age = 40;

	cout << sizeof(Undergraduate) << endl;

	getchar();
	return 0;
}

//class Student {
//public:
//	void eat() {
//		cout << "Student::eat()" << endl;
//	}
//};
//
//class Worker {
//public:
//	void eat() {
//		cout << "Worker::eat()" << endl;
//	}
//};
//
//class Undergraduate : public Student, public Worker {
//public:
//	void eat() {
//		cout << "Undergraduate::eat()" << endl;
//	}
//};
//
//int main() {
//	Undergraduate ug;
//	ug.eat();
//	ug.Worker::eat();
//	ug.Student::eat();
//	ug.Undergraduate::eat();
//
//	getchar();
//	return 0;
//}