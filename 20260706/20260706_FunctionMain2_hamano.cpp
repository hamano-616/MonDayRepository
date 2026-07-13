#include<iostream >
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_hamano.h"
using namespace std;
int InputCheck(int min, int max)
{
	int innum;

	while (true)
	{
		cin >> innum;
		if (innum<min || innum>max)
		{
			cout << "入力に誤りがあります再度入力してください" << endl;
		}
		else
		{
			break;
		}
	}
	return innum;
}
void Hand(int hand)
{
	switch (hand)
	{
		case gu:
			cout << "グー" << endl;
		break;
		case tyoki:
			cout << "チョキ" << endl;
			break;
		case pa:
			cout << "パー" << endl;
			break;

	}
}
int Judgement(int player, int cpu)
{
	int judge;
	judge = player - cpu;
	
	return judge;
}
void LevelUp(int& exp, int& lv)
{
	int expAC = rand() % EXP_MAX + EXP_MIN;

	exp += expAC;
	if (exp >= THERSHHOLD)
	{
		lv++;
		cout << "レベルアップ！！\n";

		cout << "Lv," << lv << "です" << endl;

		exp -= 20;
	}
	else
	{
		cout << "EXP," << expAC << "獲得しました" << endl;
	}
}
void Run(int &exp, int &level)
{
	int player = 0;
	int enemy = 0;

	int judge = 0;
	

	cout << "じゃんけんゲーム！！" << endl;
	cout << "出す手の選択は、「ぐー：0」「ちょき：1」「ぱー：2」とします。" << endl;
	cout << "勝つと経験値が獲得でき、閾値を越えるとレベルが上がっていきます。" << endl;

	cout << "プレイヤーのターン" << endl;
	player = InputCheck(HAND_MIN, HAND_MAX);
	cout << "プレイヤーの手" << endl;
	Hand(player);
	enemy = rand() % HAND_NUMBER;
	cout << "cpuの手" << endl;
	Hand(enemy);
	judge = Judgement(player, enemy);
	if (judge == -1 || judge == 2)
	{
		cout << "プレイヤーの勝ち" << endl;
		LevelUp(exp, level);
	}
	else if (judge == 0)
	{
		cout << "あいこ" << endl;
	}
	else
	{
		cout << "cpuの勝ち" << endl;
	}
}