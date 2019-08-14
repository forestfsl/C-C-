#include <iostream>
using namespace std;

/*
面向对象的3大特性：
封装
继承
多态

重写（override）：子类重写（覆盖）父类的方法
重载（overload）
*/

class Animal {
public:
	virtual void run() {
		cout << "Animal::run()" << endl;
	}
};

class Dog : public Animal {
public:
	void run() {
		cout << "Dog::run()" << endl;
	}
};

class ErHa : public Dog {
public:
	void run() {
		cout << "ErHa::run()" << endl;
	}
};

int main() {
	/*Animal *animal0 = new Animal();
	animal0->run();

	Animal *animal1 = new Dog();
	animal1->run();

	Animal *animal2 = new ErHa();
	animal2->run();*/

	Dog *dog0 = new Dog();
	dog0->run();

	Dog *dog1 = new ErHa();
	dog1->run();

	getchar();
	return 0;
}

//class Animal {
//public:
//	virtual void run() {
//		cout << "Animal::run()" << endl;
//	}
//};
//
//class Cat : public Animal {
//public:
//	void run() {
//		cout << "Cat::run()" << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	void run() {
//		cout << "Dog::run()" << endl;
//	}
//};
//
//class Pig : public Animal {
//public:
//	void run() {
//		cout << "Pig::run()" << endl;
//	}
//};

//int main() {
//
//	Animal *animal = new Pig();
//	animal->run();
//
//	getchar();
//	return 0;
//}


//void liu(Animal *animal) {
//	animal->run();
//	// ....
//	// ....
//	// ....
//}
//
//int main() {
//	liu(new Dog());
//	liu(new Cat());
//	liu(new Pig());
//
//	getchar();
//	return 0;
//}


//void liu(Dog *dog) {
//	dog->run();
//	// ....
//	// ....
//	// ...
//}
//
//void liu(Cat *cat) {
//	cat->run();
//	// ....
//	// ....
//	// ...
//}
//
//void liu(Pig *pig) {
//	pig->run();
//	// ....
//	// ....
//	// ...
//}