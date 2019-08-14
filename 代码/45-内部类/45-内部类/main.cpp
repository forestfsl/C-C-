#include <iostream>
using namespace std;

// Person
class Person {
private:
	static int ms_legs;
	static void other() {

	}
	int m_age;
	void walk() {

	}

	// Car
	class Car {
		int m_price;
	public:
		Car() {
			cout << "Car()" << endl;
		}

		void run() {
			Person person;
			person.m_age = 10;
			person.walk();

			ms_legs = 10;
			other();
		}
	};
public:
	Person() {
		cout << "Person()" << endl;

		Car car;
	}

	
};


int Person::ms_legs = 2;

class Point {
	class Math {
		void test();
	};
};

void Point::Math::test() {

}

int main() {
	cout << sizeof(Person) << endl;
	Person person;

	Person::Car car;

	getchar();
	return 0;
}