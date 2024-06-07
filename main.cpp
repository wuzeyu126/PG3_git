#include "Enemy.h"

int main(void) {

	Enemy* enemy = new Enemy;
	//呼び出し
	for (int i = 0; i < 3; i++) {
		enemy->Call(i);
	}
}