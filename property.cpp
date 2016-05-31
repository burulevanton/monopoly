#include "field.h"
#include "property.h"

Property::Property(string name, int cost, int rent,string color) :Field(name) {
	this->mCost = cost;
	this->mRent = rent;
	this->mOwner = -1;
	this->mColourGroup = color;
	this->isMortgage = false;
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
string Property::getColourGroup() {
	return mColourGroup;
}
void Property::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	int toPay = 0;
	cout << player[playerNum]->getName() << "popal na" << this->getName() << endl;
	if (mOwner < 0) {
		if (player[playerNum]->getBalance() >= mCost) {
			player[playerNum]->decBalance(mCost);
			cout << player[playerNum]->getName() << " kupil " << this->getName()<<" za "<<mCost << endl;
			mOwner = playerNum;
			player[playerNum]->setOwnedColor(mColourGroup);
			player[playerNum]->setSpendMoney(true);
		}
		else
		{
			return;
		}
	}
	else if (mOwner != playerNum) {
		if (player[mOwner]->getOwnedColor(mColourGroup) == true) {
			toPay = mRent + mRent;
			player[playerNum]->decBalance(toPay);
			player[mOwner]->addBalance(toPay);
		}
		else {
			toPay = mRent;
			player[playerNum]->decBalance(toPay);
			player[mOwner]->addBalance(toPay);
		}
		cout << player[playerNum]->getName() << " zaplatil " << toPay << " za arendu" << endl;
	}
}
void Property::setMortgage() {
	isMortgage = true;
}
void Property::unsetMortgage() {
	isMortgage = false;
}
bool Property::checkMortgage() {
	return isMortgage;
}
void Property::unsetOwner(){
	mOwner = -1;
}
Property::~Property() {

}