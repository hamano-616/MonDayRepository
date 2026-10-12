#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;

int main(void)
{
	//コンストラクタ
	Character character("奇怪竜");

	cout << character.GetName() << endl;
	character.Attack();
	//
	Player player("あなた");

	cout << player.GetName() << endl;
	player.Attack();
	//
	Enemy enemy("てき");

	cout << enemy.GetName() << endl;
	enemy.Attack();
	//
	Boss boss("ボス");

	cout << boss.GetName() << endl;
	boss.Attack();
	return 0;
}