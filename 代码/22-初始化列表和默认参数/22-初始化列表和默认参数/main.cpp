#include <iostream>
using namespace std;

class Person {
	int m_age;
	int m_height;
public:
	/*Person() :Person(0, 0) {

	}

	Person(int age) :Person(age, 0) {

	}*/

	// 默认参数只能写在函数的声明中
	Person(int age = 0, int height = 0);
};

// 构造函数的初始化列表只能写在实现中
Person::Person(int age, int height) :m_age(age), m_height(height) {

}

int main() {
	Person person;
	Person person2(10);
	Person person3(20, 180);

	getchar();
	return 0;
}