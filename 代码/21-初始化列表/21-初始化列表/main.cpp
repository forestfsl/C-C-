#include <iostream>
using namespace std;

int myAge() {
	cout << "myAge()" << endl;
	return 30;
}

int myHeight() {
	cout << "myHeight()" << endl;
	return 180;
}

//struct Person {
//	int m_age;
//	int m_height;
//
//	Person() {
//		this->m_age = 0;
//		this->m_height = 0;
//	}
//
//	// 初始化列表 :m_age(age), m_height(height)
//	/*Person(int age, int height) :m_height(height), m_age(m_height)   {
//
//	}*/
//	Person(int age, int height) :m_height(myHeight()), m_age(myAge()) {
//
//	}
//
//	void display() {
//		cout << "m_age is " << this->m_age << endl;
//		cout << "m_height is " << this->m_height << endl;
//	}
//};

struct Person {
	int m_age;
	int m_height;

	//Person() :Person(0, 0) {
	//	cout << "Person() " << this << endl;

	//	// 直接调用构造函数，会创建一个临时对象，传入一个临时的地址值给this指针
	//	// Person(0, 0);
	//}

	Person() :Person(0, 0) { }
	Person(int age, int height) :m_age(age), m_height(height) { }

	/*Person(int age, int height) {
		cout << "Person(int age, int height) " << this << endl;

		this->m_age = age;
		this->m_height = height;
	}*/

	void display() {
		cout << "m_age is " << this->m_age << endl;
		cout << "m_height is " << this->m_height << endl;
	}
};

int main() {
	Person person;
	// person.Person();
	person.display();

	/*Person person2(10, 20);
	person2.display();*/


	/*Person person1;
	person1.display();

	cout << "-----------------" << endl;*/


	getchar();
	return 0;
}