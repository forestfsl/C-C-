#include <iostream>
using namespace std;

class Person {
	int m_age;
public:
	// 对象创建完毕的时候调用
	Person() {
		cout << "Person()" << endl;
		this->m_age = 0;
	}

	Person(int age) {
		cout << "Person(int age)" << endl;
		this->m_age = age;
	}

	// 对象销毁(内存被回收)的时候调用
	~Person() {
		cout << "~Person()" << endl;
	}
};

//void test() {
//	Person person;
//}

int main() {
	Person person;

	/*{
		Person person;
	}*/

	/*Person *p = new Person();

	delete p;*/

	/*Person *p = (Person *) malloc(sizeof(Person));

	free(p);*/

	getchar();
	return 0;
}