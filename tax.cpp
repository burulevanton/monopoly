#include "tax.h"

Tax::Tax(string name, int location,int cost) :Field(name,location) {
	this->mCost = cost;
}
void Tax::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " попадает на поле " << this->getName() << endl;
	cout << player[playerNum]->getName() << " платит " << mCost << endl;
	player[playerNum]->decBalance(mCost);
}
Tax::~Tax() {

}