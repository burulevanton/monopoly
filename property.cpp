#include "field.h"
#include "property.h"

Property::Property(string name, int cost, int rent) :Field(name) {
	this->mCost = cost;
	this->mRent = rent;
	this->mOwner = -1;
}
int Property::getCost() {
	return mCost;
}
int Property::getOwner() {
	return mOwner;
}
int Property::getRent() {
	return mRent;
}
void Property::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName() << "popal na" << this->getName() << endl;
	if (mOwner < 0) {
		if (player[playerNum]->getBalance() >= mCost) {
			player[playerNum]->decBalance(mCost);
			cout << player[playerNum]->getName() << " kupil " << this->getName()<<" za "<<mCost << endl;
			mOwner = playerNum;
		}
		else
		{
			return;
		}
	}
	else if (mOwner != playerNum) {
		player[playerNum]->decBalance(mRent);
		player[mOwner]->addBalance(mRent);
	}
}
Property::~Property() {

}