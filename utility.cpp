#include "utility.h"
Utility::Utility(string name, int location, int cost, int rent, int costOfUpgrade, int rent1, int rent2, int rent3, int rent4, int rent5) :Purchased(name, location, cost, rent, costOfUpgrade, rent1, rent2, rent3, rent4, rent5) {
}
int Utility::askPlayer(Player* player[], int playerNum) {
	cout << "Купить данное коммунальное предприятие?" << endl;
	cout << "Баланс до покупки:" << player[playerNum]->getBalance() << endl;
	cout << "Баланс после покупки:" << player[playerNum]->getBalance() - 150 << endl;
	cout << "1)Да" << endl;
	cout << "2)Нет" << endl;
	cout << "->";
	int answer;
	cin >> answer;
	while (answer < 1 || answer>2) {
		cout << "Вы ввели неверное число" << endl;
		cout << "Попробуйте ещё раз" << endl;
		cout << "->";
		cin >> answer;
	}
	return answer;
}
void Utility::printInfo(Player* player[], int playerNum) {
	cout << this->getName() << "(арендная плата:" << this->getRent(player,playerNum) << "улучшений куплено: " << numOfUpgrades << ")" << endl;
}
void Utility::askForUpgrade(Player* player[], int playerNum) {
	cout << "Купить улучшение на данном коммунальном предприятии?" << endl;
	cout << "Баланс до покупки:" << player[playerNum]->getBalance() << endl;
	cout << "Баланс после покупки:" << player[playerNum]->getBalance() - mCostOfUpgrade << endl;
	cout << "1)Да" << endl;
	cout << "2)Нет" << endl;
	cout << "->";
	int answer;
	cin >> answer;
	while (answer < 1 || answer>2) {
		cout << "Вы ввели неверное число" << endl;
		cout << "Попробуйте ещё раз" << endl;
		cout << "->";
		cin >> answer;
	}
	switch (answer) {
	case 1:
		numOfUpgrades++;
		player[playerNum]->decBalance(mCostOfUpgrade);
		player[playerNum]->setOwnedUtility();
		break;
	case 2:
		return;
		break;
	}
}
int Utility::costOfMortage(Player*player[], int playerNum) {
	int cost;
	if (numOfUpgrades == 0) {
		cost = mCost / 2;
	}
	else {
		cost = mCost / 2 + this->getRent(player, playerNum) / 2;
	}
	return cost;
}
void Utility::printMortgageInfo(Player* player[], int playerNum) {
	cout << this->getName() << "(залоговая стоимость: " << this->costOfMortage(player,playerNum) << ",улучшений построено: " << numOfUpgrades << ",арендная плата: " << this->getRentWithoutDice(player, playerNum) << "*количество очков выпавшее на ходу игрока"<<")" << endl;
}
int Utility::getRentWithoutDice(Player* player[], int playerNum) {
	if (player[playerNum]->getOwnedRailway() % 2 == 0) {
		return mRent[numOfUpgrades];
	}
	if (player[playerNum]->getOwnedRailway() % 2 != 0) {
		return mRent[numOfUpgrades];
	}
}
int Utility::getRent(Player*player[], int playerNum) {
	int toPay = this->getRentWithoutDice(player,playerNum)*player[playerNum]->getRoll();
	return toPay;
}
void Utility::setOwned(Player* player[], int playerNum) {
	player[playerNum]->ownField(this->getLocation());
	player[playerNum]->setOwnedUtility();
}
int Utility::allowUpgrade(Player* player[], int playerNum) {
	if (numOfUpgrades == 5) {
		return 0;
	}
	if (player[playerNum]->getOwnedUtility() % 2 == 0 && player[playerNum]->getOwnedUtility()!=0) {
		return getLocation();
	}
	if (player[playerNum]->getOwnedUtility() % 2 != 0) {
		if (player[playerNum]->getOwnedUtility() / 2 > numOfUpgrades) {
			return getLocation();
		}
		else {
			return 0;
		}
	}
}
void Utility::setMortgage(Player* player[], int playerNum,int i) {
	isMortgage = true;
	player[playerNum]->setMortgageUtility(numOfUpgrades);
	numOfUpgrades = 0;
	player[playerNum]->mortgageField(i);
	player[playerNum]->addBalance(this->costOfMortage(player, playerNum));
	numOfTurns = 0;
}
void Utility::unsetMortgage(Player* player[], int playerNum,int i) {
	isMortgage = false;
	player[playerNum]->setOwnedUtility();
	player[playerNum]->removeMortgage(i);
	player[playerNum]->decBalance(costOfMortage(player, playerNum)*1.1);
	numOfTurns = -1;
}
Utility::~Utility() {

}