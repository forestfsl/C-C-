#include <iostream>
using namespace std;

//class Person {
//	int m_age;
//public:
//	Person() {
//		cout << "Person()" << endl;
//	}
//	Person(int age) :m_age(age) {
//		cout << "Person(int age)" << endl;
//	}
//};
//
//class Student : public Person {
//	int m_score;
//public:
//	Student() {
//		cout << "Student()" << endl;
//	}
//	Student(int age, int score) :m_score(score), Person(age) {
//		cout << "Student(int age, int score)" << endl;
//	}
//};

class Person {
	int m_age;
public:
	Person(int age) :m_age(age) {
		cout << "Person(int age)" << endl;
	}
};

class Student : public Person {
	int m_score;
public:
	Student() :Person(0) {

	}
};

int main() {
	Student student;

	getchar();
	return 0;
}