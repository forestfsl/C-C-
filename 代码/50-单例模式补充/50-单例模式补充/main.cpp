#include <iostream>
using namespace std;
class Rocket {
public:
	static Rocket * sharedRocket() {
		if (ms_rocket) return ms_rocket;
		return ms_rocket = new Rocket();
	}
	static void deleteRocket() {
		if (!ms_rocket) return;

		delete ms_rocket;
		ms_rocket = NULL;
	}
private:
	static Rocket *ms_rocket;
	Rocket() { }
	Rocket(const Rocket &rocket) { }
	void operator=(const Rocket &rocket) { }
};

Rocket *Rocket::ms_rocket = NULL;

/*
单例需要禁止掉：拷贝行为、赋值行为
*/

int main() {

	Rocket *p1 = Rocket::sharedRocket();
	Rocket *p2 = Rocket::sharedRocket();

	getchar();
	return 0;
}