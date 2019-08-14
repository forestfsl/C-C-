#include <iostream>
#include "Car.h"
#include "Person.h"
//using namespace MJ;
using namespace std;

//void test() {
//	cout << "test()" << endl;
//}
//
//namespace FX {
//	int g_no;
//
//	class Person {
//	public:
//		int m_age;
//	};
//
//	void test() {
//		cout << "FX::test()" << endl;
//	}
//}
//
//namespace MJ {
//	int g_no;
//
//	class Person {
//	public:
//		int m_height;
//	};
//
//	void test() {
//		cout << "MJ::test()" << endl;
//	}
//}
//
//void test1() {
//	FX::g_no = 1;
//	MJ::g_no = 2;
//
//	FX::Person *p1 = new FX::Person();
//	p1->m_age = 10;
//
//	MJ::Person *p2 = new MJ::Person();
//	p2->m_height = 180;
//
//	test();
//	FX::test();
//	MJ::test();
//}

//namespace MJ {
//	int g_no;
//
//	class Person {
//	public:
//		int m_height;
//	};
//
//	void test() {
//		cout << "MJ::test()" << endl;
//	}
//}

void test2() {
	/*using namespace MJ;
	g_no = 10;
	Person person;
	test();*/

	/*using MJ::g_no;
	using MJ::Person;
	g_no = 10;
	Person person;*/
}

namespace MJ {
	namespace SS {
		int g_no;
		class Person {

		};

		void test() {

		}
	}

	void test() {

	}
}

void test() {

}

void test3() {
	test();
	// 默认的命名空间，没有名字
	::test();

	::MJ::SS::g_no = 30;

	MJ::SS::g_no = 20;

	using namespace MJ;
	SS::g_no = 30;

	using namespace MJ::SS;
	g_no = 10;
}

int main() {
	MJ::Car car;
	MJ::Person person;

	getchar();
	return 0;
}