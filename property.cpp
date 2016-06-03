#include "field.h"
#include "property.h"

Property::Property(string name, int location, int cost, int rent,int costOfUpgrade, int rent1, int rent2, int rent3, int rent4, int rent5, string color) :Purchased(name, location,cost,rent,costOfUpgrade,rent1,rent2,rent3,rent4,rent5) {
	this->mColourGroup = color;
}
string Property::getColourGroup() {
	return mColourGroup;
}
void Property::printInfo(Player* player[],int playerNum) {
	cout << this->getName() << "(арендная плата:" << this->getRent(player,playerNum) << ", домов куплено: " << numOfUpgrades << ", цвет:" << mColourGroup << ")" << endl;
}
void Property::setOwned(Player* player[], int playerNum) {
	player[playerNum]->ownField(this->getLocation());
	player[playerNum]->setOwnedColor(this->mColourGroup);
}
int Property::costOfMortage(Player*player[], int playerNum) {
	int cost;
	if (numOfUpgrades == 0) {
		cost = mCost / 2;
	}
	else {
		cost = mCost / 2 + mRent[numOfUpgrades] / 2;
	}
	return cost;
}
void Property::printMortgageInfo(Player* player[], int playerNum) {
	cout << this->getName() << "(залоговая стоимость: " << this->costOfMortage(player,playerNum) << ",зданий построено: " << numOfUpgrades << ",арендная плата: " << this->getRent(player, playerNum) <<")" << endl;
}
int Property::askPlayer(Player* player[], int playerNum) {
	cout << "Купить данную улицу? "<<"(арендная плата:"<<this->getRent(player,playerNum)<<",цвет:"<<this->mColourGroup<<")" << endl;
	cout << "Баланс до покупки:" << player[playerNum]->getBalance() << endl;
	cout << "Баланс после покупки:" << player[playerNum]->getBalance() - mCost << endl;
	if (player[playerNum]->getBalance() - mCost < 0) {
		cout << "Не волнуйтесь, если ваш баланс окажется меньше нуля, программа автоматически предложит вам заложить свою собственность, чтобы быстро вернуть потраченные деньги" << endl;
	}
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
void Property::askForUpgrade(Player* player[], int playerNum) {
	cout << "Купить дом на данной улице?" << endl;
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
		player[playerNum]->setOwnedColor(this->mColourGroup);
		break;
	case 2:
		return;
		break;
	}
}
int Property::rentWithoutUpgrades(Player* player[], int playerNum) {
	vector<string> colors;
	int toPay = 0;
	colors = player[playerNum]->getOwnedColor();
	int count = 0;
	for (int i = 0; i < colors.size(); i++) {
		if (colors[i] == mColourGroup) {
			count++;
		}
	}
	if (mColourGroup == "синий" || mColourGroup == "коричневый") {
		if (count == 2) {
			toPay = mRent[0] * 2;
		}
		else {
			toPay = mRent[0];
		}
	}
	else {
		if (count == 3) {
			toPay = mRent[0] * 2;
		}
		else {
			toPay = mRent[0];
		}
	}
	return toPay;
}
int Property::getRent(Player*player[], int playerNum) {
	int toPay = 0;
	if(numOfUpgrades==0){
		toPay = rentWithoutUpgrades(player, playerNum);
	}
	else {
		toPay = mRent[numOfUpgrades];
	}
	return toPay;
}
void Property::setMortgage(Player* player[], int playerNum,int i) {
	isMortgage = true;
	player[playerNum]->removeColor(mColourGroup,numOfUpgrades);
	player[playerNum]->mortgageField(i);
	player[playerNum]->addBalance(this->costOfMortage(player, playerNum));
	numOfUpgrades = 0;
	numOfTurns = 0;
}
void Property::unsetMortgage(Player* player[], int playerNum,int i) {
	isMortgage = false;
	player[playerNum]->setOwnedColor(mColourGroup);
	player[playerNum]->removeMortgage(i);
	player[playerNum]->decBalance(costOfMortage(player, playerNum)*1.1);
	numOfTurns = -1;
}
int Property::allowUpgrade(Player* player[], int playerNum) {
	if (numOfUpgrades == 5) {
		return 0;
	}
	vector<string> colors;
	colors = player[playerNum]->getOwnedColor();
	int count = 0;
	for (int i = 0; i < colors.size(); i++) {
		if (colors[i] == mColourGroup) {
			count++;
		}
	}
	if (mColourGroup == "синий" || mColourGroup == "коричневый") {
		if (count % 2 == 0 && count != 0) {
			return getLocation();
		}
		if (count % 2 != 0) {      
			if (count / 2 > numOfUpgrades) {
				return getLocation();
			}
			else {
				return 0;
			}
		}
	}
	else {
		if (count % 3 == 0 && count != 0) {
			return getLocation();
		}
		if (count % 3 != 0) {
			if (count / 3 > numOfUpgrades) {
				return getLocation();
			}
			else {
				return 0;
			}
		}
	}
}
Property::~Property() {

}