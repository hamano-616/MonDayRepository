#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy()
{
	hp = 100;
}

int Enemy::GetHp()
{
	return hp;
}
void Enemy::Draw()
{
	cout << "enemy Hp:" <<hp<< endl;
}