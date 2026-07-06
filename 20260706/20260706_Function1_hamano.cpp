#include<iostream>
#include"20260706_Header1_hamano.h"
using namespace std;
void Heal(int& player)
{
	player += 20;
}
int InputCheck(int MIN, int MAX)
{
	int innum;

	while (true)
	{
		cin >> innum;
		if (innum<MIN || innum>MAX)
		{
			cout << "‰½‚à‹N‚±‚ç‚È‚©‚Á‚½" << endl;
		}
		else
		{
			break;
		}
	}
	return innum;
}