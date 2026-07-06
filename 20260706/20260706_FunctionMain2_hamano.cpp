#include<iostream >
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
void Run()
{

}