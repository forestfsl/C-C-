#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	virtual void run() { }
};

class Student : public Person {
public:
	int m_score;
};

class Car {

};

void test1const_cast() {
	const Person *p1 = new Person();

	Person *p2 = const_cast<Person *>(p1);
	Person *p3 = (Person *)p1;


	p2->m_age = 20;
	p3->m_age = 30;

	cout << p1->m_age << endl;
}

void test2dynamic_cast() {
	Person *p1 = new Person();
	Person *p2 = new Student();

	/*Student *stu1 = (Student *) p1;
	Student *stu2 = (Student *) p2;
	Car *car = (Car *) p2;*/

	Student *stu1 = dynamic_cast<Student *>(p1);
	Student *stu2 = dynamic_cast<Student *>(p2);
	Car *car = dynamic_cast<Car *>(p2);

	cout << stu1 << endl;
	cout << stu2 << endl;
	cout << car << endl;
}

void test3static_cast() {
	Person *p1 = new Person();
	Person *p2 = new Student();

	Student *stu1 = static_cast<Student *>(p1);
	Student *stu2 = static_cast<Student *>(p2);

	int i = 10;
	double d = i;

	cout << stu1 << endl;
	cout << stu2 << endl;
}

int main() {
	/*int a = 10;

	double d1 = (double) a;
	double d2 = double(a);

	cout << d1 << endl;
	cout << d2 << endl;*/

	/*Person *p1 = new Person();
	Person *p2 = new Student();

	Student *stu1 = reinterpret_cast<Student *>(p1);
	Student *stu2 = reinterpret_cast<Student *>(p2);
	Car *car = reinterpret_cast<Car *>(p2);

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p2 << endl;

	cout << stu1 << endl;
	cout << stu2 << endl;
	cout << car << endl;*/


	//// 0a 00 00 00
	//int i = 10;
	//// 00 00 00 00 00 00 24 40
	//double d = i;

	//double d1 = 10.0;
	//int i1 = d1;

	// 0a 00 00 00
	// int i = 10;
	// 0a 00 00 00 cc cc cc cc 
	// double d = reinterpret_cast<double&>(i);
	// cout << i << endl;
	// cout << d << endl;



	/*int *p = reinterpret_cast<int *>(100);
	int i = reinterpret_cast<int>(p);*/

	//cout << "i = " << i << endl;
	//cout << "d = " << d << endl;

	//cout << sizeof(i) << endl;
	//cout << sizeof(d) << endl;

	getchar();
	return 0;
}