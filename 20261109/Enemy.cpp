#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy()
{
	cout <<"エネミーを生成しました"<< endl;
}
Enemy::~Enemy()
{
	cout << "エネミーを破棄しました" << endl;

}
void Enemy::Update()
{
	cout << "エネミーを更新しました" << endl;
} 
void Enemy::Draw()
{
	cout << "エネミーを描画"<<endl;
}