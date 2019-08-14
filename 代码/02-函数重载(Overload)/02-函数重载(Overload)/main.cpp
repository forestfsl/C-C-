#include <iostream>
using namespace std;

/*
C语言不支持函数重载
*/

// g++
// msvc


// display_v
void display() {
	cout << "display() " << endl;
}

// display_i
void display(int a) {
	cout << "display(int a) " << a << endl;
}

// display_l
void display(long a) {
	cout << "display(long a) " << a << endl;
}

// display_d
void display(double a) {
	cout << "display(double a) " << a << endl;
}

// 逆向工程
int main() {
	display();
	display(10);
	display(10l);
	display(10.1);

	getchar();

	return 0;
}