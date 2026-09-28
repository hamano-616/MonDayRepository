#pragma once
#include"Config.h"
class CardManager
{
private:
	int cards[CARD_TOTAL];
	int cardCount;
public:
	//コンストラクタ
	CardManager();
	//カードを生成
	void CreateCards();
	//カードを一枚引く
	int DrawCard();
	//残りのカード枚数を取得
	int GetCardCount();
};

