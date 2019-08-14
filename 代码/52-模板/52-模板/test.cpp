
#include <iostream>
#include "Swap.hpp"
using namespace std;

void test() {
	double a = 20.8;
	double b = 30.4;
	swapValues(a, b); 
	cout << "test() a = " << a << ", b = " << b << endl;
}