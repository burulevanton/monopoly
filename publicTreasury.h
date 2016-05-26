#ifndef PUBLICTREASURY_H
#define PUBLICTREASURY_H
#pragma once

#include "field.h"

class Treasury :public Field {
public:
	Treasury(string name);
	virtual void doTurn(Player* player[], int playerNum);

	~Treasury();
};
#endif 

