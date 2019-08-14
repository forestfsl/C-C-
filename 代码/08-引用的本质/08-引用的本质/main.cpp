#include <iostream>
using namespace std;
// 机器代码：01010111001  - 汇编语言

// 内存对齐

//struct Student {
//	int &age;
//};

// 引用不能改的特点 从汇编怎么体现的？

/*
8086汇编的时候，老师说过，
bp-2是取出局部变量，
bp+2是取参数，
x86取局部变量bp+2却是取局部变量？
*/

/*
int &rAge = age 好像相当于 int *const rAge = &age一样的作用
*/

int main() {
	//cout << sizeof(Student) << endl;

	/*int a = 1;
	int b = 2;
	int c = a + b;*/

	/*int age = 5;
	int *p = &age;
	*p = 6;*/

	int age = 5;
	int &rAge = age;
	rAge = 6;

	/*int &rAge = age;
	rAge = 30;*/

	getchar();
	return 0;
}

/*
int age = 20;
C7 45 F4 14 00 00 00 mov         dword ptr [age],14h

*/