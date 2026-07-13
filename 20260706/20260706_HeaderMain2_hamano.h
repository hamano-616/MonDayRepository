#pragma once
//定数
const int EXP_MAX = 15;
const int EXP_MIN = 1;
const int HAND_MAX = 2;
const int HAND_MIN = 0;
const int HAND_NUMBER=3;
const int THERSHHOLD = 20;
//関数プロトタイプ宣言
int InputCheck(int min, int max);
void Hand(int hand);
int Judgement(int player, int cpu);
void LevelUp(int& exp, int& lv);
void Run(int &exp,int &level);
//
enum jyannkenn
{
	gu,
	tyoki,
	pa
};