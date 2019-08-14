#include <iostream>
using namespace std;

struct Sun {
	int tempValue;
	int value;
};

struct GameData {
	int tempValue;
	Sun *sun;
};

// &g_data是固定的
struct GameData *g_data;

int main() {

	g_data = new GameData();
	g_data->sun = new Sun();

	g_data->sun->value = 100;

	// [[[0x012DA2D0] + 0x4] + 0x4] = 100

	while (1) {
		cout << g_data->sun->value << endl;
	}

	getchar();
	return 0;
}