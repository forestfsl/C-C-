#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//	void run() {
//		cout << "run()" << endl;
//	}
//};
//
//struct Student : Person {
//	int m_score;
//	void study() {
//		cout << "study()" << endl;
//	}
//};
//
//struct Worker : Person {
//	int m_salary;
//	void work() {
//		cout << "work()" << endl;
//	}
//};

// Java：所有的Java对象最终都继承自java.lang.Object这个类
// OC：所有的OC对象最终都继承自NSObject这个类

void test() {
	/*Student student;
	student.m_age = 18;
	student.m_score = 100;
	student.run();
	student.study();*/
}

struct Person {
	int m_age;
};

struct Student : Person {
	int m_no;
};

struct GoodStudent : Student {
	int m_money;
};

int main() {
	// 12
	GoodStudent gs;
	gs.m_age = 20;
	gs.m_no = 1;
	gs.m_money = 2000;

	cout << &gs << endl;
	cout << &gs.m_age << endl;
	cout << &gs.m_no << endl;
	cout << &gs.m_money << endl;

	// 4
	Person person;

	// 8
	Student stu;

	cout << sizeof(Person) << endl;
	cout << sizeof(Student) << endl;
	cout << sizeof(GoodStudent) << endl;

	getchar();
	return 0;
}