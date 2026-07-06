#include<iostream>
#include"20260706_Header1_hamano.h"
using namespace std;

int main(void)
{
	int playerhp = PLAYER_HP;
	int player;
	cout << "プレイヤーの体力を回復しますか？" << endl;
	cout << "「Yes：1」「No：2」とします。" << endl;
	player = InputCheck(MIN, MAX);
	if (player == Yes)
	{
		Heal(playerhp);
		cout << "回復しました。" << endl;
	}
	else if (player == No)
	{
		cout << "回復しませんでした。" << endl;
	}
	
	cout << "Hp" << playerhp << endl;
	return 0;
}