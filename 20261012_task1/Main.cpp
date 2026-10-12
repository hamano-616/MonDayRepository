#include<iostream>
#include"Character.h"
using namespace std;

int main(void)
{
	//コンストラクタ
	Character character("奇怪竜");

	cout << character.GetName() << endl;
	character.Attack();
	return 0;
}