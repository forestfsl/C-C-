#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
};

// Student是一个Person
class Student : public Person {
public:
	int m_score;
};

int main() {
	// 学生是一个人
	//Person *stu = new Student();
	//stu->m_age = 10;
	
	/*Student *p = (Student *) new Person();
	p->m_age = 10;
	p->m_score = 20;*/

	getchar();
	return 0;
}