#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	{
		Person person;
		person.setAge(20);
		cout << person.getAge() << endl; 
	}
	
	getchar();
	return 0;
}