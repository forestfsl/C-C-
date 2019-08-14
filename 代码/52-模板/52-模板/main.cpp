#include <iostream>
#include "Array.hpp"
using namespace std;

//template <class Item> 
//class Array {
//	// friend ostream &operator<<(ostream &, const Array &);
//	int m_size = 0;
//	int m_capacity = 0;
//	Item *m_data = NULL;
//public:
//	Array(int capacity) {
//		if (capacity <= 0) return;
//
//		this->m_data = new Item[capacity] {};
//		this->m_capacity = capacity;
//	}
//
//	~Array() {
//		if (!this->m_data) return;
//
//		delete[] this->m_data;
//		this->m_data = NULL;
//	}
//
//	void add(Item value) {
//		if (this->m_size == this->m_capacity) {
//			// 扩容
//			cout << "数组已满" << endl;
//			return;
//		}
//		this->m_data[this->m_size++] = value;
//	}
//
//	Item get(int index) {
//		if (index < 0 || index >= this->m_size) return 0;
//		return this->m_data[index];
//	}
//
//	int size() {
//		return this->m_size;
//	}
//
//	Item operator[](int index) {
//		return get(index);
//	}
//
//	void display() {
//		cout << "[";
//		for (int i = 0; i < this->m_size; i++) {
//			cout << this->m_data[i];
//			if (i != this->m_size - 1) {
//				cout << ", ";
//			}
//		}
//		cout << "]" << endl;
//	}
//};

//ostream &operator<<(ostream &cout, const Array &array) {
//	cout << "[";
//	for (int i = 0; i < array.m_size; i++) {
//		cout << array.m_data[i];
//		if (i != array.m_size - 1) {
//			cout << ", ";
//		}
//	}
//	return cout << "]";
//}

class Person {
	friend ostream &operator<<(ostream &, const Person &);
	int m_age;
public:
	Person(int age = 0) :m_age(age) { }
};

ostream &operator<<(ostream &cout, const Person &person) {
	return cout << "age=" << person.m_age;
}

int main() {
	/*Array<Person *> array(3);
	array.add(new Person(11));
	array.add(new Person(12));
	array.add(new Person(13));
	array.display();*/

	Array<Person> array(3);
	array.add(Person(11));
	array.add(Person(12));
	array.add(Person(13));
	// array.display();

	cout << array << endl;

	/*Array<int> array(5);
	array.add(11);
	array.add(22);
	array.add(33);
	array.add(44);
	array.add(55);
	array.display();

	Array<double> array2(3);
	array2.add(10.8);
	array2.add(10.9);
	array2.add(10.4);
	array2.display();*/

	// cout << array << endl;

	/*Array array;
	array.add(10);
	array.add(20);
	array.add(11);
	array.add(22);

	array.get(2);
	array[2];

	array.size() == 4;

	array.remove(3);
	array.insert(1, 30);*/

	getchar();
	return 0;
}