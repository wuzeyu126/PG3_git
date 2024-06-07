#include "Enemy.h"

void Enemy::Closing()
{
	printf("closing\n");
}

void Enemy::Shooting()
{
	printf("shooting\n");
}

void Enemy::RunAway()
{
	printf("runaway\n");
}

void Enemy::Call(int state) {
	(this->*pState[state])();
}

void (Enemy::* Enemy::pState[])() = {
	&Enemy::Closing,
	&Enemy::Shooting,
	&Enemy::RunAway
};
