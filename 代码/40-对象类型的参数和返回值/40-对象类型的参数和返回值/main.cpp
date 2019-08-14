#include <iostream>
using namespace std;

class Car {
	int m_price;
public:
	Car(int price = 0) :m_price(price) { 
		cout << "Car(int) - " << this << " - " << this->m_price << endl;
	}

	Car(const Car &car) :m_price(car.m_price) {
		cout << "Car(const Car &) - " << this << " - " << this->m_price << endl;
	}
};
 
//void test1(Car &car) {
//
//}
void test1(Car car) {

}

Car test2() {
	Car car(10);
	return car;
}

int main() {
	// Car car1(10);
	// test1(car1);

	Car car2 = test2();

	// Car car3;
	// car3 = test2();


	getchar();
	return 0;
}