#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
};

void testAuto() {
	auto i = 10;
	auto name = "jack";
	auto d = 9.6;
	auto p = new Person();
	p->m_age = 10;
}

void func(int p) {
	cout << "func(int) - " << p << endl;
}

void func(int *p) {
	cout << "func(int *) - " << p << endl;
}

void test_nullptr() {
	/*int i = 10;
	const char *name = "jack";
	double d = 9.6;*/

	// int i = 0;
	// int *p = nullptr;

	/*func(0);
	func(NULL);
	func(nullptr);

	cout << (nullptr == NULL) << endl;*/

	int array[]{ 10, 20, 30, 40 };
	for (int item : array) {
		cout << item << endl;
	}

	/*int length = sizeof(array) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << endl;
	}*/
}

//int sum(int a, int b) { return a + b; }
//int minus1(int a, int b) { return a - b; }
//int multiple(int a, int b) { return a * b; }
//int divide(int a, int b) { return a / b; }

int exec(int a, int b, int (*func)(int, int)) {
	// ....
	// ...
	return func(a, b);
}

int main() {
	/*int (*p)(int, int) = [](int a, int b) -> int {
		return a + b;
	};

	cout << p(10, 20) << endl;*/

	/*cout << [](int a, int b) -> int {
		return a + b;
	}(10, 20) << endl;*/

	/*cout << [](int a, int b) {
		return a + b;
	}(10, 20) << endl;*/

	/*void(*p)() = [] {
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
	};
	p();
	p();*/

	/*cout << exec(20, 10, sum) << endl;
	cout << exec(20, 10, minus1) << endl;
	cout << exec(20, 10, multiple) << endl;
	cout << exec(20, 10, divide) << endl;*/

	/*cout << exec(20, 10, [](int a, int b) { return a + b; }) << endl;
	cout << exec(20, 10, [](int a, int b) { return a - b; }) << endl;
	cout << exec(20, 10, [](int a, int b) { return a * b; }) << endl;
	cout << exec(20, 10, [](int a, int b) { return a / b; }) << endl;*/


	//int a = 10;
	//int b = 20;

	//auto p = [a] () mutable {
	//	a++;
	//	cout << "lambda - " << a << endl;
	//};
	//p();

	//// 10
	//cout << a << endl;

	// 默认情况是值捕获
	/*auto p = [=, &a] {
		cout << a << endl;
		cout << b << endl;
	};

	a = 11;
	b = 22;

	p();*/


	
	if (int a = 10;  a > 5) {

	}
	else if (int b = 20; b > 10) {

	}
	else if (2) {

	}
	else {

	}


	

	getchar();
	return 0;
}