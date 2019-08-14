#include <iostream>
using namespace std;

struct Person {
	int m_age;

	/*Person() {
		cout << "Person()" << endl;
		this->m_age = 0;
	}*/
};

void test() {
	//int *p = new int();
	//memset(p, 1, 4);
	//// 0000 0001 0000 0001 0000 0001 0000 0001 
	//cout << *p << endl;

	//int *p = (int *) malloc(8);
	//free(p);

	/*int *p = (int *) malloc(2); 
	*p = 5;*/

	// 0000 0000 0000 0000 0000 0000 0000 0101
}

// 全局区（成员变量初始化为0）
Person g_person;

int main() {
	// 栈空间（成员变量没有初始化）
	Person person;

	// 堆空间
	Person *p1 = new Person; // 成员变量没有初始化
	Person *p2 = new Person(); // 成员变量有初始化

	cout << "g_person " << g_person.m_age << endl;
	cout << "p1 " << p1->m_age << endl;
	cout << "p2 " << p2->m_age << endl;

	getchar();
	return 0;
}