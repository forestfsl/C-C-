#include <iostream>
using namespace std;

struct Person {
	int m_age;

	Person() {
		cout << "Person()" << endl;
		// this->m_age = 0;
		memset(this, 0, sizeof(Person));
	}

	Person(int age) {
		cout << "Person(int age)" << endl;
		this->m_age = age;
	}
};

// 全局区
Person g_person1; // Person()
Person g_person2(); // 这是一个函数声明，函数名叫g_person2，无参，返回值类型是Person
Person g_person3(10); // Person(int age)

int main() {
	// 栈空间
	Person person1; // Person()
	Person person2(); // 函数声明，函数名叫person2，无参，返回值类型是Person
	Person person3(20);  // Person(int age)

	// 堆空间
	Person *p1 = new Person; // Person()
	Person *p2 = new Person(); // Person()
	Person *p3 = new Person(30);  // Person(int age)

	// 4次无参构造函数
	// 3次有参构造函数

	getchar();
	return 0;
}