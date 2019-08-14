#include <iostream>
using namespace std;

// 类似于Java中接口、抽象类
// 类似于OC中的协议protocol

// Animal是个抽象类
class Animal {
public:
	virtual void speak() = 0;
	virtual void run() = 0;
};

class Cat : public Animal {
public:
	void run() {

	}
};

class WhiteCat : public Cat {
public:
	void speak() {

	}
	void run() {

	}
};

int main() {
	Cat *cat = new WhiteCat();

	getchar();
	return 0;
}