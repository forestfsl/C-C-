﻿#include <iostream>
using namespace std;

enum Season {
	Spring,
	Summer,
	Fall,
	Winter
};

struct Student {
	int age;
};

//int age = 10;
//
//int &func() {
//	//// age .....
//	//int &rAeg = age;
//	//return rAeg;
//	return age;
//}

//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}

//void swap(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int v1 = 10;
	int v2 = 20;
	swap(v1, v2);
	cout << "v1 is " << v1 << endl;
	cout << "v2 is " << v2 << endl;

	/*func() = 30;

	cout << age << endl;*/

	/*int age = 20;
	int &rAge = age;
	rAge = 30;

	int *p = &age;*/

	// 定义了一个引用，相当于是变量的别名
	/*int &rAge = age;
	int &rAge1 = rAge;
	int &rAge2 = rAge1;

	rAge = 11;
	cout << age << endl;

	rAge1 = 22;
	cout << age << endl;

	rAge2 = 33;
	cout << age << endl;*/

	/*Season season;
	Season &rSeason = season;
	rSeason = Winter;
	cout << season << endl;*/

	/*Student stu;
	Student &rStu = stu;
	rStu.age = 20;
	cout << stu.age << endl;*/

	/*int a = 10;
	int b = 20;

	int *p = &a;
	int *&rP = p;
	rP = &b;
	*p = 30;
	cout << a << endl;
	cout << b << endl;*/

	/*int array[] = { 10, 20, 30 };
	int (&rArray)[3] = array;

	int *a[4];
	int (*b)[4];*/
	

	getchar();
	return 0;
}