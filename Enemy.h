#pragma once
#include <stdio.h>

class Enemy
{
public:
	//�ӽ�
	void Closing();
	//����
	void Shooting();
	//�x��
	void RunAway();
	//�v���ݥ��󥿺��ӳ���
	void Call(int state);
private:
	//�Ʃ`�֥�
	static void (Enemy::* pState[3])();
};
