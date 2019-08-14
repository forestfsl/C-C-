#include <iostream>
using namespace std;

class Person {
	int m_age;
public:
	Person()  {
		cout << "Person() - " << this << endl;
	}
	explicit Person(int age) :m_age(age) {
		cout << "Person(int) - " << this << endl;
	}
	Person(const Person &person) {
		cout << "Person(const Person &person) - " << this << endl;
	}
	~Person() {
		cout << "~Person() - " << this << endl;
	}
	void display() {
		cout << "display() - age is " << this->m_age << endl;
	}
};

void test1(Person person) {

}

Person test2() {
	return 30;
}

int main() {

	// test1(40);

	// Person person = test2();
	// Person person(10);
	// person = test2();

	Person person = 10;

	// Person person(10);
	person = 20;
	// person.display();
		
	getchar();
	return 0;
}