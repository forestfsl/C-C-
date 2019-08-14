#include <iostream>
using namespace std;

// 浅拷贝（shallow copy）：指针类型仅仅是拷贝地址值
// 深拷贝（deep copy）：拷贝内容到新申请的内存空间

class Car {
	int m_price;
	char *m_name;

public:
	Car(int price = 0, const char *name = NULL) :m_price(price) { 
		if (name == NULL) return;

		// 申请堆空间存储字符串内容
		this->m_name = new char[strlen(name) + 1]{};
		// 拷贝字符串内容到堆空间(string copy)
		strcpy(this->m_name, name);

		cout << "Car(int, const char *)" << endl;
	}

	Car(const Car &car) :m_price(car.m_price) {
		if (car.m_name == NULL) return;

		// 申请堆空间存储字符串内容
		this->m_name = new char[strlen(car.m_name) + 1]{};
		// 拷贝字符串内容到堆空间(string copy)
		strcpy(this->m_name, car.m_name);

		cout << "Car(const Car &car)" << endl;
	}

	~Car() {
		if (this->m_name == NULL) return;

		delete[] this->m_name;
		this->m_name = NULL;

		cout << "~Car()" << endl;
	}

	void display() {
		cout << "price is " << this->m_price << ", name is " << this->m_name << endl;
	} 
};


int main() {
	/*char name[] = { 'b', 'm', 'w', '\0' };
	Car *car = new Car(100, name);
	car->display();
	delete car;*/


	Car car1(100, "bmw");

	// 将car1的内存空间（8个字节）覆盖car2的内存空间（8个字节）
	Car car2 = car1;

	cout << endl;


	// Car car(100, "bmw");


	//char name[] = { 'b', 'm', 'w', '\0' };
	//const char *name2 = "bmw";

	//cout << name2 << endl;

	//// string length
	//cout << strlen(name) << endl;

	getchar();
	return 0;
}