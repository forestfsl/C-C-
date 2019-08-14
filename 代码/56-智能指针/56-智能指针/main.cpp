#include <iostream>
using namespace std;

void test() {
	throw 6;
}

void test1() {
	try {
		int *p = new int();

		test();

		delete p;
	}
	catch (...) {
		cout << "出现异常" << endl;
	}
}

class Person {
public:
	Person() {
		cout << "Person()" << endl;
	}
	~Person() {
		cout << "~Person()" << endl;
	}

	void run() {
		cout << "Person::run()" << endl;
	}
};

void test2() {
	//cout << "1" << endl;
	//
	//{
	//	// Person *p = new Person();

	//	auto_ptr<Person> p(new Person());
	//	p->run();

	//}

	//cout << "2" << endl;
}

template <class T>
class SmartPointer {
	T *m_pointer;

public:
	SmartPointer(T *pointer) :m_pointer(pointer) { }
	~SmartPointer() {
		if (m_pointer == nullptr) return;
		delete m_pointer;
	}
	T *operator->() {
		return m_pointer;
	}
};

int main() {

	cout << "1" << endl;
	{
		SmartPointer<Person> p(new Person());
		p->run();
	}
	cout << "2" << endl;

	getchar();
	return 0;
}