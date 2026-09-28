#include "Trun.h"
#include<iostream>
#include"Config.h"

using namespace std;

bool Trun::PlayPlayerTurn(Player* player, CardManager* cardManager)
{
	while (true)
	{
		cout << "\n=======================\n";
		cout << "PLAYER TURN\n";
		cout << "=======================\n";

		player->ShowStatus();

		if (player->GetTotal() == TARGET_SCORE)
		{
			cout << "\nPlayer's Total : 21\n";

			return true;
		}

		cout << "\nカードを引きますか？\n";
		cout << INPUT_YES << ":Yes\n";
		cout << INPUT_NO << ":No\n";

		int input;
		cin >> input;
		//

		if (input == INPUT_NO)
		{
			cout << "\nカードを引きません\n";
			return true;
		}
		if (input == INPUT_YES)
		{
			int card = cardManager->DrawCard();
			cout << "\nPlayerがカードを引きました\n";
			cout << "引いたカード:" << card << endl;
				//Playerに引いたカードを追加
				player->AddCard(card);

			player->ShowStatus();
		}

		if (player->GetTotal() >= BURST_SCORE)
		{
			cout << "\nPlayerはバーストしました\n";
			return false;
		}

	}
}
