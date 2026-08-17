#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//球種の最低値
const int PITING_MIN = 0;
//球種の最大値
const int PITING_MAX = 3;
//確率
const int PROBABILITY = 4;
//ストライクの最大値
const int STRIKE_COUNT = 3;
//ボールの最大値
const int BALL_COUNT = 4;
//アウトの最大値
const int OUT_COUNT = 3;
//ヒット最大値
const int HIT_COUNT = 4;

int main(void)
{
    //プレイヤーとエネミーの変数
    int ply, emy;
    //確率
    int prod;
    //ストライクのカウント
    int Strike = 0;
    //ボールのカウント
    int Ball = 0;
    //アウトのカウント
    int Out = 0;
    //ヒットのカウント
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //アナウンス
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //アウトかヒットが最大値になるまでループ
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力チェック
        while (true)
        {
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        //球種の表示関数の呼び出し
        PitingType(ply);

        //エネミーの球種の選択
        emy = rand() % PROBABILITY;

        //確率の乱数生成
        prod = rand() % PROBABILITY;
        //判定
        //異なる場合
        if (ply != emy)
        {
            //1/4の確率でボール
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //プレイヤーとエネミーの数字が等しい場合
        else
        {
            //ストライクとボールの初期化
            Strike = 0;
            Ball = 0;
            //1/4の確率でアウトに
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //ストライクとボールのカウントが最大値に達すると
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            if (Strike >= STRIKE_COUNT)
            {
                //アウトカウント＋１
                Out++;
            }
            else
            {
                //ヒットカウント＋１
                Hit++;
            }
            //ストライクとボールの初期化
            Strike = 0;
            Ball = 0;
        }
        //結果の表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //結果表示関数の呼び出し
    Result(Out);

    return 0;
}