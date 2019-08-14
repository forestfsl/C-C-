#include <iostream>
using namespace std;

int g_age = 20;

void test() {
	int age = 10;
	static int s_age = 30;

	// 局部类
	class Person {
	public:
		static void run() {
			g_age = 30;
			s_age = 40;

			cout << "run()" << endl;
		}
	};

	Person person;
	Person::run();
}

int main() {
	test();

	getchar();
	return 0;
}