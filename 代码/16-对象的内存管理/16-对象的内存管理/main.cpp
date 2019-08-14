#include <iostream>
using namespace std;

struct Car {
	int m_price;
	Car() {
		cout << "Car()" << endl;
	}

	~Car() {
		cout << "~Car()" << endl;
	}
};

struct Person {
	int m_age; // 4
	Car *m_car; // 4

	// 初始化工作
	Person() {
		cout << "Person()" << endl;

		 this->m_car = new Car();

		/*Car car;
		this->m_car = &car;*/
	}

	// 内存回收、清理工作(回收Person对象内部申请的堆空间)
	~Person() {
		cout << "~Person()" << endl;

		delete this->m_car;
	}
};

void test() {
	Person *p = new Person();

	delete p;
}

int main() {
	test();

	getchar();
	return 0;
}