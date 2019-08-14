#include <iostream>
using namespace std;

/*
编译器会为每个类生成一个默认的无参的构造函数
*/

class Person {
public:
	int m_age = 0;
};

class Student : public Person {

};

int main() {
	Student student;

	getchar();
	return 0;
}