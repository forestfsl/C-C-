#include <iostream>

//extern "C" {
#include "sum.h"
//}

// C语言库

using namespace std;

//extern "C" void func() {
//	cout << "func()" << endl;
//}
//
//extern "C" void func(int a) {
//	cout << "func(int a) " << a << endl;
//}

//extern "C" {
//	void func() {
//		cout << "func()" << endl;
//	}
//
//	void func(int a) {
//		cout << "func(int a) " << a << endl;
//	}
//}

//extern "C" void func();
//extern "C" void func(int a);

//extern "C" {
//	void func();
//	void func(int a);
//}

int main() {
	/*func();
	func(10);*/

	cout << sum(10, 20) << endl;

	getchar();

	return 0;
}

//void func() {
//	cout << "func()" << endl;
//}
//
//void func(int a) {
//	cout << "func(int a) " << a << endl;
//}
