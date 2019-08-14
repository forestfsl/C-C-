#include <iostream>
using namespace std;

class Student {
public:
	int m_score;
	Student(int score = 0) :m_score(score) { }
	void study() {
		cout << "Student::study() - score = " << m_score << endl;
	}
	~Student() {
		cout << "~Student" << endl;
	}
};

class Worker {
public:
	int m_salary;
	Worker(int salary = 0) :m_salary(salary) { }
	void work() {
		cout << "Worker::work() - salary = " << m_salary << endl;
	}
	~Worker() {
		cout << "~Worker" << endl;
	}
};

class Undergraduate : public Student, public Worker {
public:
	int m_grade;
	Undergraduate(
		int score = 0, 
		int salary = 0, 
		int grade = 0) :Student(score), Worker(salary), m_grade(grade) {

	}
	void play() {
		cout << "Undergraduate::play() - grade = " << m_grade << endl;
	}
	~Undergraduate() {
		cout << "~Undergraduate" << endl;
	}
};

int main() {
	{
		Undergraduate ug;
		ug.m_score = 100;
		ug.m_salary = 2000;
		ug.m_grade = 4;
		ug.study();
		ug.work();
		ug.play(); 
	}

	cout << sizeof(Undergraduate) << endl;

	getchar();
	return 0;
}