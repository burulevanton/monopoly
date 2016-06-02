#include "purchased.h"
Purchased::Purchased(string name, int location, int cost, int rent, int costOfUpgrade, int rent1, int rent2, int rent3, int rent4, int rent5) :Field(name, location) {
	this->mCost = cost;
	this->mRent[0] = rent;
	this->mRent[1] = rent1;
	this->mRent[2] = rent2;
	this->mRent[3] = rent3;
	this->mRent[4] = rent4;
	this->mRent[5] = rent5;
	this->mOwner = -1;
	this->isMortgage = false;
	this->mCostOfUpgrade = costOfUpgrade;
	this->numOfUpgrades = 0;
	this->numOfTurns = -1;
}
int Purchased::getCost() {
	return mCost;
}
int Purchased::getOwner() {
	return mOwner;
}
int Purchased::getRent() {
	return mRent[numOfUpgrades];
}
bool Purchased::upTurns() {
	numOfTurns++;
	if (numOfTurns > 10) {
		return true;
	}
	else {
		return false;
	}
}
void Purchased::printUnMortgageInfo(Player* player[], int playerNum) {
	cout << this->getName() << "(��������� ������: " << this->costOfMortage(player, playerNum)*1.1 << ", �������� ���������: " << this->mRent[numOfUpgrades] <<",����� � ������:" << numOfTurns << ")" << endl;
}
void Purchased::unsetMortgage(Player* player[],int playerNum,int i) {
	isMortgage = false;
	player[playerNum]->removeMortgage(i);
	player[playerNum]->decBalance(costOfMortage(player,playerNum)*1.1);
}
bool Purchased::checkMortgage() {
	return isMortgage;
}
void Purchased::unsetOwner(Player* player[],int playerNum, int i) {
		mOwner = -1;
		player[playerNum]->removeInOwn(i);
		numOfTurns = -1;
}
void Purchased::setUpgrade(Player* player[], int playerNum) {
	this->askForUpgrade(player, playerNum);
}
void Purchased::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	if (player[playerNum]->checkQuit() == true) {
		mOwner = -1;
		return;
	}
	if (mOwner == playerNum) {
		cout << player[playerNum]->getName() << " �������� �� ��� ���� <" << this->getName()<<">" << endl;
		cout << player[playerNum]->getName() << " ������� " << endl;
	}
	if (mOwner < 0) {
		cout << player[playerNum]->getName() << " �������� �� ���� <" << this->getName()<<">" << endl;
		int answer = askPlayer(player, playerNum);
		switch (answer) {
		case 1:
			if (player[playerNum]->getBalance() >= mCost) {
				player[playerNum]->decBalance(mCost);
				cout << player[playerNum]->getName() << " �������� <" << this->getName() << "> �� " << mCost << " � " << endl;
				mOwner = playerNum;
				this->setOwned(player, playerNum);
			}
			else
			{
				player[playerNum]->decBalance(mCost);
				mOwner = playerNum;
				cout << player[playerNum]->getName() << " �������� <" << this->getName() << "> � ����� ������������� ������" << player[playerNum]->getBalance() << endl;
				this->setOwned(player, playerNum);
			}
			break;
		case 2:
			return;
			break;
		}
	}

	else if (mOwner != playerNum) {
		cout << player[playerNum]->getName() << " �������� �� ���� <" << this->getName()<<">" << endl;
		int toPay=this->getRent(player, mOwner);
		player[playerNum]->decBalance(toPay);
		player[playerNum]->addBalance(toPay);
		cout << player[playerNum]->getName() << " ������ " << toPay << " � �� ������ " << endl;
	}
}
Purchased::~Purchased() {

}