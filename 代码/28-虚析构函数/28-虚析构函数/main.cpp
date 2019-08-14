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
	virtual ~Animal() {
		cout << "~Animal()" << endl;
	}
};

class Cat : public Animal {
public:
	int m_life;
	Cat() :m_life(0) {}
	void speak() {
		cout << "Cat::speak()" << endl;
	}
	void run() {
		cout << "Cat::run()" << endl;
	}
	~Cat() {
		cout << "~Cat()" << endl;
	}
};


int main() {
	Animal *cat1 = new Cat();
	cat1->speak();
	cat1->run();

	delete cat1;

	getchar();
	return 0;
}