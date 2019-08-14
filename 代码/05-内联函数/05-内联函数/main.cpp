#include <iostream>
using namespace std;

inline int sum(int a, int b);

int main() {
	sum(10, 20);

	getchar();
	return 0;
}

inline int sum(int a, int b) {
	return a + b;
}