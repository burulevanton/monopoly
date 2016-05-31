#include "tax.h"

Tax::Tax(string name,int cost) :Field(name) {
	this->mCost = cost;
}
void Tax::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " popal na " << this->getName() << endl;
	cout << player[playerNum]->getName() << " platit " << mCost << endl;
	player[playerNum]->decBalance(mCost);
}
Tax::~Tax() {

}