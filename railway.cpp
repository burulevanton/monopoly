#include "railway.h"
Railway::Railway(string name, int location, int cost, int rent, int costOfUpgrade, int rent1, int rent2, int rent3, int rent4, int rent5) :Purchased(name, location, cost, rent, costOfUpgrade, rent1, rent2, rent3, rent4, rent5) {
}

int Railway::askPlayer(Player* player[], int playerNum) {
	cout << "Купить данную железную дорогу?" << endl;
	cout << "Баланс до покупки:" << player[playerNum]->getBalance() << endl;
	cout << "Баланс после покупки:" << player[playerNum]->getBalance() - 200 << endl;
	cout << "1)Да" << endl;
	cout << "2)Нет" << endl;
	cout << "->";
	int answer;
	cin >> answer;
	return answer;
}
void Railway::printInfo(Player* player[], int playerNum) {
	cout << this->getName() << "(арендная плата:" << this->getRent(player,playerNum) << "улучшений куплено: " << numOfUpgrades << ")" << endl;
}
void Railway::askForUpgrade(Player* player[], int playerNum) {
	cout << "Купить улучшение на данной железной дороге?" << endl;
	cout << "Баланс до покупки:" << player[playerNum]->getBalance() << endl;
	cout << "Баланс после покупки:" << player[playerNum]->getBalance() - mCostOfUpgrade << endl;
	cout << "1)Да" << endl;
	cout << "2)Нет" << endl;
	cout << "->";
	int answer;
	cin >> answer;
	switch (answer) {
	case 1:
		numOfUpgrades++;
		player[playerNum]->decBalance(mCostOfUpgrade);
		break;
	case 2:
		return;
		break;
	}
}
int Railway::costOfMortage(Player*player[], int playerNum) {
	int cost;
	if (numOfUpgrades == 0) {
		cost = mCost / 2;
	}
	else {
		cost = mCost / 2 + this->getRent(player, playerNum) / 2;
	}
	return cost;
}
void Railway::printMortgageInfo(Player* player[], int playerNum) {
	cout << this->getName() << "(залоговая стоимость: " << this->costOfMortage(player,playerNum) << ",улучшений построено: " << numOfUpgrades << ",арендная плата: " << this->getRent(player, playerNum) << ")" << endl;
}
int Railway::getRent(Player*player[], int playerNum) {
	if (player[playerNum]->getOwnedRailway() % 4 == 0) {
		return 4 * mRent[numOfUpgrades];
	}
	if (player[playerNum]->getOwnedRailway() % 4 != 0) {
		if (player[playerNum]->getOwnedRailway() / 4 > numOfUpgrades) {
			return (4 - player[playerNum]->getOwnedRailway() % 4)*mRent[numOfUpgrades];
		}
		else {
			return (player[playerNum]->getOwnedRailway() % 4)*mRent[numOfUpgrades];
		}
	}
}
void Railway::setOwned(Player* player[], int playerNum) {
	player[playerNum]->ownField(this->getLocation());
	player[playerNum]->setOwnedRailway();
}
int Railway ::allowUpgrade(Player* player[], int playerNum) {
	if (numOfUpgrades == 5) {
		return 0;
	}
	if (player[playerNum]->getOwnedRailway() % 4 == 0 && player[playerNum]->getOwnedUtility() != 0) {
		return getLocation();
	}
	if (player[playerNum]->getOwnedRailway() % 4 != 0) {
		if (player[playerNum]->getOwnedRailway() / 4 > numOfUpgrades) {
			return getLocation();
		}
		else {
			return 0;
		}
	}
}
void Railway::setMortgage(Player* player[], int playerNum,int i) {
	isMortgage = true;
	player[playerNum]->setMortgageRailway(numOfUpgrades);
	numOfUpgrades = 0;
	player[playerNum]->mortgageField(i);
	player[playerNum]->addBalance(this->costOfMortage(player, playerNum)*1.1);
	numOfTurns = 0;
}
void Railway::unsetMortgage(Player* player[], int playerNum,int i) {
	isMortgage = false;
	player[playerNum]->setOwnedRailway();
	player[playerNum]->removeMortgage(i);
	player[playerNum]->decBalance(costOfMortage(player, playerNum)*1.1);
	numOfTurns = -1;
}
Railway::~Railway() {

}