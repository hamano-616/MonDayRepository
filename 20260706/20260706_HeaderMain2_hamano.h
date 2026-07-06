#pragma once
//定数
const int EXP_MAX = 15;
const int EXP_MIN = 1;
const int HAND_MAX = 2;
const int HAND_MIN = 0;
const int MAX_LEVEL = 5;
//関数プロトタイプ宣言
int InputCheck(int min, int max);
void Hand(int hand);
void Run();
//
enum jyannkenn
{
	gu,
	tyoki,
	pa
};