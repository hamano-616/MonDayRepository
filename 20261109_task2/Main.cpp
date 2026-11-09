#include<iostream>
#include"Enemy.h"
using namespace std;

int main(void)
{
	cout << "ƒQ[ƒ€ŠJŽn" << endl;

	unique_ptr<Enemy>enemy = make_unique<Enemy>();

	enemy->GetHp();

	enemy->Draw();

	void ShowEnemy(const Enemy & enemy);
	if (enemy != nullptr)
	{
		cout << "Enemy‚Í‚Ü‚¾‘¶Ý‚µ‚Ä‚¢‚Ü‚·" << endl;
	}

	return 0;
}