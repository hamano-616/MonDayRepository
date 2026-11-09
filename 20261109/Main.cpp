#include<iostream>
#include"Enemy.h"

using namespace std;

int main(void)
{
	cout << "ゲーム開始" << endl;

	/*Enemy* enemy = new Enemy();*/
	unique_ptr<Enemy>enemy = make_unique<Enemy>();
	enemy->Update();
	enemy->Draw();

	/*delete enemy;
	enemy = nullptr;*/

	cout << "ゲーム終了\n";
		return 0;
}