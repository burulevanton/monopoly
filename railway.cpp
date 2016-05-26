#include "railway.h"
Railway::Railway(string name) :Field(name) {
}
int Railway::getOwner() {
	return mOwner;
}
void Railway::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName << "popal na" << this->getName() << endl;
	if (mOwner < 0) {
		if (player[playerNum]->getBalance >= 200) {
			player[playerNum]->decBalance(200);
			cout << player[playerNum]->getName() << " kupil " << this->getName() << " za " << 200 << endl;
			mOwner = playerNum;
		}
		else
		{
			return;
		}
	}
	else if (mOwner != playerNum) {
		player[playerNum]->decBalance(25);
		player[mOwner]->addBalance(25);
	}
}
Railway::~Railway() {

}