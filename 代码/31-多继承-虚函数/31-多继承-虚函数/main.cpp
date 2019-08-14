#include <iostream>
using namespace std;

class Student {
public:
	virtual void study() {
		cout << "Student::study()" << endl;
	}
};

class Worker {
public:
	virtual void work() {
		cout << "Worker::work()" << endl;
	}
};

class Undergraduate : public Student, public Worker {
public:
	void study() {
		cout << "Undergraduate::study()" << endl;
	}
	void work() {
		cout << "Undergraduate::work()" << endl;
	}
	void play() {
		cout << "Undergraduate::play()" << endl;
	}
};

int main() {
	/*Undergraduate ug;
	ug.study();
	ug.work();
	ug.play();*/

	Student *stu = new Undergraduate();
	stu->study();

	Worker *worker = new Undergraduate();
	worker->work();

	cout << sizeof(Undergraduate) << endl;

	getchar();
	return 0;
}