#ifndef GAME_H
#define GAME_H
#pragma once
#include <queue>
#include <deque>
#include <algorithm>
#include <string>
#include <vector>
#include "player.h"
#include "chance.h"
#include "field.h"
#include "forward.h"
#include "freeParking.h"
#include "goToJail.h"
#include "jail.h"
#include "property.h"
#include "publicTreasury.h"
#include "railway.h"
#include "tax.h"
#include "utility.h"
class Game {
private:
	vector <Field*> board;
	int numOfPlayers;
	Player* player[8];
	queue <int> cardChance;
	queue <int> cardTreasury;
public:
	Game();
	void setNumOfPlayers();
	void setPlayers();
	void playRound();
	void fillQueue(queue <int> &q);
	void checkPlayerBalance(Player * player[],int playerNum);
	~Game();
};
#endif