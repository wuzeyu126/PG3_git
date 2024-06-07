#pragma once
#include <stdio.h>

class Enemy
{
public:
	//接近
	void Closing();
	//攻撃
	void Shooting();
	//離脱
	void RunAway();
	//関数ポインタ呼び出す
	void Call(int state);
private:
	//テーブル
	static void (Enemy::* pState[3])();
};
