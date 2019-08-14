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
		cout << "Cat::speak()" << endl;
	}
	void run() {
		cout << "Cat::run()" << endl;
	}
};


int main() {
	cout << sizeof(Animal) << endl;

	// cout << sizeof(Cat) << endl;
	/*Animal *animal = new Animal();

	Animal *cat1 = new Cat();
	cat1->speak();
	cat1->run();
	Animal *cat2 = new Cat();
	Animal *cat3 = new Cat();*/

	Animal *animal1 = new Animal();
	animal1->m_age = 10;
	animal1->run();

	Animal *animal2 = new Cat();
	animal2->run();


	getchar();
	return 0;
}