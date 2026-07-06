#pragma once
//定数
const int PLAYER_HP = 100;
const int HEAL = 20;
const int MIN = 1;
const int MAX = 2;
//関数プロトタイプ宣言
void Heal(int &player);
int InputCheck(int MIN,int MAX);
//
enum serect
{
	Yes = 1,
	No
};