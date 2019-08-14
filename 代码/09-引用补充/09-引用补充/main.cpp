#include <iostream>
using namespace std;

int main() {
	/*int age = 10;
	const int &rAge = age;
	age = 30;

	cout << "age is " << age << endl;
	cout << "rAge is " <<  rAge << endl;*/

	/*int age = 10;
	const long &rAge = age;
	age = 30;

	cout << "age is " << age << endl;
	cout << "rAge is " << rAge << endl;*/

	/*int array[] = { 1, 2, 3, 4 };
	int * const &p = array;*/
	//int (&rArray)[4] = array;

	int a = 10;
	int b = 20;
	// (a = b) = 30;
	(a > b ? a : b) = 40;

	cout << "a is " << a << endl;
	cout << "b is " << b << endl;

	getchar();

	return 0;
}