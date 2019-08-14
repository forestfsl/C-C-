#include <iostream>
using namespace std;

//void func(int a = 10, int b = 60, int c = 20);
//
//void func(int a, int b, int c) {
//	cout << "a is " << a << endl;
//	cout << "b is " << b << endl;
//	cout << "c is " << c << endl;
//}

int age = 70;

//void func(int a = 10, int b = 60, int c = age) {
//	cout << "a is " << a << endl;
//	cout << "b is " << b << endl;
//	cout << "c is " << c << endl;
//}

//void test() {
//	cout << "test()" << endl;
//}
//
//void display(int a, void (*func)() = test) {
//	cout << "a is " << a << endl;
//	cout << "func is " << func << endl;
//	func();
//}

//void display() {
//	cout << "display" << endl;
//}

void display(int a = 10, int b = 20) {
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
}

int main() {
	display(10);
	display(1);
	display(2);
	display(3);
	display(4);

	//display(50);

	// 指向函数的指针
	/*void (*funcPtr)() = test;
	funcPtr();*/


	getchar();

	return 0;
}