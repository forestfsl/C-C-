#include <iostream>
using namespace std;

//int sum(int a, int b) {
//	// 业务逻辑写错了
//	return a - b;
//}

void test() {
	cout << "1" << endl;

	// 如果内存不够，就会抛出异常(运行过程中抛出一个错误)
	try {
		for (int i = 0; i < 9999999; i++) {
			int *p = new int[9999999];
		}

		cout << "2" << endl;
	}
	catch (...) {
		cout << "发生了异常" << endl;
	}

	cout << "3" << endl;

	// delete[] p;
}

void test(int a, int b, int c) {
	if (a <= 0) return;

}

int divide(int a, int b) {
	if (b == 0) throw "不能除以0";
	return a / b;
}

void test2() {
	cout << "1" << endl;

	try {
		int v1 = 10;
		int v2 = 0;
		cout << divide(v1, v2) << endl;
	}
	catch (int exception) {
		cout << "捕捉到异常1：" << exception << endl;
	}
	catch (const char *exception) {
		cout << "捕捉到异常2：" << exception << endl;
	}

	cout << "2" << endl;
}

void test3() {
	try {
		throw 3;
	} catch (const char *exception) {
		cout << "test3-捕捉到异常：" << exception << endl;
	}

	// 432432
	// 4324234
	// .....
}

void test4() {
	try {
		test3();
	} catch (int exception) {
		cout << "test4-捕捉到异常：" << exception << endl;
	}

	// .....
}

class Exception {
public:
	virtual const char *what() const = 0;
};

class DivideException : public Exception {
public:
	const char *what() const {
		return "不能除以0";
	}
};

class AddException : public Exception {
public:
	const char *what() const {
		return "加法有问题";
	}
};

int divide2(int a, int b) {
	if (b == 0) throw DivideException();
	return a / b;
}

int main() {

	/*try {
		divide2(10, 0);
	} catch (const DivideException &e) {
		cout << e.what() << endl;
	} catch (const AddException &e) {

	}*/

	try {
		for (int i = 0; i < 9999999; i++) {
			int *p = new int[9999999];
		}

		// 234234234
	} catch (bad_alloc e) {
		cout << e.what() << endl;
	}

	getchar();
	return 0;
}