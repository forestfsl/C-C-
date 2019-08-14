#include <iostream>
using namespace std;

// 非虚继承：(10 + 10 + 3) * 4 = 23 * 4
// 虚继承：(10 + 2 + 2 + 1) * 4 = 15 * 4
class Person {
public:
	int m_age;
	int m_age1;
	int m_age2;
	int m_age3;
	int m_age4;
	int m_age5;
	int m_age6;
	int m_age7;
	int m_age8;
	int m_age9;
};

class Student : virtual public Person {
public:
	int m_score;
};

class Worker : virtual public Person {
public:
	int m_salary;
};

class Undergraduate : public Student, public Worker {
public:
	int m_grade;
};

int main() {
	/*Undergraduate ug;
	ug.m_grade = 10;
	ug.m_score = 20;
	ug.m_salary = 20;*/

	cout << sizeof(Student) << endl;

	getchar();
	return 0;
}