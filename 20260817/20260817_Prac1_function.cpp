#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"
//球種表示関数
void PitingType(int piting)
{
	//入力された数字の球種の表示
	switch (piting)
	{
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//結果表示関数
void Result(int out)
{
	//アウトが三回でプレイヤーの勝ち
	if (out >= 3)
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	else
	{
		cout << "CPU WINNER!!" << endl;
	}
}