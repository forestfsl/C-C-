#include <iostream>
using namespace std;

//class Person {
//public:
//	int m_age;
//	void run() {
//		cout << "run()" << endl;
//	}
//};
//
//int main() {
//	Person person;
//	person.m_age = 10;
//	person.run();
//
//	return 0;
//}

struct Person {
private:
	int m_age;

public:
	void setAge(int age) {
		// 过滤
		if (age < 0) return;

		this->m_age = age;
	}

	int getAge() {
		return this->m_age;
	}
};


// 在C\C++中，定义在函数外面的就是全局变量
// 全局变量的特点：整个程序运行过程中都存在
int age;
Person p;

int main() {
	Person person;
	person.setAge(-20);

	cout << person.getAge() << endl;

	getchar();
	return 0;
}