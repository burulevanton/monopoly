#include "utility.h"
Utility::Utility(string name) :Field(name) {
	this->mOwner = -1;
}
void Utility::doTurn(Player *player[], int playerNum, queue<int> &q1, queue<int> &q2) {
	cout << player[playerNum]->getName() << "popal na" << this->getName() << endl;
	if (mOwner < 0) {
		if (player[playerNum]->getBalance() >= 150) {
			player[playerNum]->decBalance(150);
			cout << player[playerNum]->getName() << " kupil " << this->getName() << " za " << 150 << endl;
			mOwner = playerNum;
		}
		else
		{
			return;
		}
	}
	else if (mOwner != playerNum) {
		int multiply = 0;
		multiply = player[mOwner]->getOwnedUtility();
		int toPay = 0;
		if (multiply == 1) {
			toPay = 4 * player[playerNum]->getRoll();
		}
		if (multiply == 2) {
			toPay = 10 * player[playerNum]->getRoll();
		}
		player[playerNum]->decBalance(toPay);
		player[mOwner]->addBalance(toPay);
	}
}
Utility::~Utility() {

}