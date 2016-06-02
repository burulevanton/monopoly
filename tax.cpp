#include "tax.h"

<<<<<<< HEAD
Tax::Tax(string name,int cost) :Field(name) {
	this->mCost = cost;
}
void Tax::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName() << " popal na " << this->getName() << endl;
	cout << player[playerNum]->getName() << " platit " << mCost << endl;
=======
Tax::Tax(string name, int location,int cost) :Field(name,location) {
	this->mCost = cost;
}
void Tax::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " попадает на поле <" << this->getName()<<">" << endl;
	cout << player[playerNum]->getName() << " платит " << mCost << endl;
>>>>>>> dev
	player[playerNum]->decBalance(mCost);
}
Tax::~Tax() {

}