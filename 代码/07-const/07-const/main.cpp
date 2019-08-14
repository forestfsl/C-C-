#include <iostream>
using namespace std;

//struct Student {
//	int age;
//};

//int func() {
//	return 10;
//}

//int sum(int *a, int *b) {
//	cout << "sum(int *a, int *b)" << endl;
//	return *a + *b;
//}

int sum(const int *a, const int *b) {
	cout << "sum(const int *a, const int *b)" << endl;
	return *a + *b;
}

int main() {
	/*int age = 10;
	int &rAge = age;
	rAge = 20;*/

	/*int v1 = 10;
	int v2 = 20;
	sum(&v1, &v2);

	const int v3 = 10;
	const int v4 = 20;
	sum(&v3, &v4);*/

	/*int a = 10;
	int b = 20;
	int *p = &b;
	*p = a; 
	p = &a;*/

	// sum(50, 60);
	

	/*int a = 20;
	int b = 30;
	int age = 10; */// 4
	//const double &ref = age; // 8
	//const int &rAge = func();
	//const int &rAge = 40;
	//const int &rAge = a + b;

	// 引用的本质就是指针
	//int age = 10;
	// rAge的指向不能改
	// int & const rAge = age;

	// 不能通过引用修改所指向的内容
	/*const int &rAge = age;
	rAge = 30;*/

	// 不能通过指针修改所指向的内容
	// int const *pAge1 = &age;
	// 不能修改指针的指向，但是可以通过指针修改所指向的内容
	// int * const pAge2 = &age;


	/*const int age = 10;

	const Student stu = { 20 };
	Student stu2 = { 40 };
	stu = stu2;
	stu.age = 50;*/

	/*Student stu = { 20 };
	stu.age = 40;

	const Student *pStu = &stu;
	pStu->age = 50;*/

	//int height = 20;

	//int age = 10;
	//// *p0是常量，p0不是常量
	//const int *p0 = &age;
	//// *p1是常量，p1不是常量
	//int const *p1 = &age;
	//// p2是常量，*p2不是常量
	//int * const p2 = &age;
	//// *p3是常量，p3是常量
	//const int * const p3 = &age;
	//// *p4是常量，p4是常量
	//int const * const p4 = &age;


	/*Student stu1 = { 10 };
	Student stu2 = { 20 };

	const Student * pStu = &stu1;
	*pStu = stu2;
	(*pStu).age = 30;
	pStu->age = 40;
	pStu = &stu2;*/

	getchar();
	return 0;
}