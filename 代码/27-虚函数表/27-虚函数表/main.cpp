#include <iostream>
using namespace std;

class Animal {
public:
	int m_age;
	virtual void speak() {
		cout << "Animal::speak()" << endl;
	}
	virtual void run() {
		cout << "Animal::run()" << endl;
	}
};

class Cat : public Animal {
public:
	int m_life;
	Cat() :m_life(0) {}
	void speak() {
		// 先执行父类中的成员函数
		Animal::speak();

		// 再执行自己的一些操作
		cout << "Cat::speak()" << endl;
	}
	void run() {
		cout << "Cat::run()" << endl;
	}
};


int main() {
	/*Animal *animal1 = new Animal(); 
	animal1->speak();
	animal1->run();*/

	Animal *animal2 = new Cat();
	animal2->speak();
	animal2->run(); 

	getchar();
	return 0;
}