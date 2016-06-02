#include "player.h"

Player::Player(string name, int num) {
	this->mNamePlayer = name;
	this->mNumPlayer = num;
	this->mCurrentBalance = 1500;
	this->mLocation = 0;
	this->changeLocation = false;
	this->inGame = true;
	this->mRailwayOwned = 0;
	this->mUtilityOwned = 0;
}

string Player::getName() {
	return mNamePlayer;
}
int Player::getPlayerNum() {
	return mNumPlayer;
}
int Player::getLocation() {
	return mLocation;
}
void Player::setLocation(int loc) {
	this->mLocation = loc;
}
void Player::addBalance(int add) {
	mCurrentBalance += add;
}
void Player::decBalance(int dec) {
	mCurrentBalance -= dec;
}
int Player::getBalance() {
	return mCurrentBalance;
}
void Player::setOwnedColor(string color) {
	mColourGroupOwned.push_back(color);
}
vector <string> Player::getOwnedColor() {
	return mColourGroupOwned;
}
void Player::setOwnedRailway() {
	mRailwayOwned++;
}
int Player::getOwnedRailway() {
	return mRailwayOwned;
}
void Player::setMortgageRailway(int numOfUpgrade) {
	while (numOfUpgrade >= 0) {
		mRailwayOwned--;
		numOfUpgrade--;
	}
}
void Player::setOwnedUtility() {
	mUtilityOwned++;
}
int Player::getOwnedUtility() {
	return mUtilityOwned;
}
void Player::setMortgageUtility(int numOfUpgrade) {
	while (numOfUpgrade >= 0) {
		mUtilityOwned--;
		numOfUpgrade--;
	}
}
int Random() {
	return  rand() % 6 + 1;
}
void Player::RollDice() {
	int previousLoc = 0;
	int counter = 0;
	mRoll1 = 0;
	mRoll2 = 0;
	mRoll1 = Random();
	mRoll2 = Random();
	cout << mNamePlayer << " выбрасывает " << mRoll1 <<" и " <<mRoll2<<endl;
	previousLoc = mLocation;
	int playerRoll = mRoll1 + mRoll2;
	while (mLocation < previousLoc + playerRoll)
	{
		mLocation++;

		if (mLocation == 40) {
			playerRoll = playerRoll - counter;
			mLocation = 0;
			previousLoc = -1;
			addBalance(200);
			cout << mNamePlayer << " проходит поле Вперёд и получает 200" << endl;
		}
		counter++;
	}
}
int Player::getRoll() {
	return mRoll1 + mRoll2;
}
bool Player::checkChanges() {
	return changeLocation;
}
void Player::setChanges(bool change) {
	this->changeLocation = change;
}
void Player::quitGame() {
	cout << this->getName() << " покидает игру" << endl;
	inGame = false;
}
bool Player::checkQuit() {
	if (inGame == true) {
		return false;
	}
	else 
		return true;
}
void Player::removeMortgage(int i) {
	mFieldsOwned.push_back(mFieldsMortgage[i]);
	mFieldsMortgage.erase(mFieldsMortgage.begin()+i);
}
void Player::removeInOwn(int i) {
	mFieldsMortgage.erase(mFieldsMortgage.begin() + i);
}
void Player::ownField(int num) {
	mFieldsOwned.push_back(num);
}
int Player::sizeOfVect() {
	return mFieldsOwned.size();
}
int Player::getNumOfField(int num) {
	return mFieldsOwned[num];
}
void Player::mortgageField(int i) {
	mFieldsMortgage.push_back(mFieldsOwned[i]);
	mFieldsOwned.erase(mFieldsOwned.begin()+i);
}
int Player::getSizeOfMortV() {
	return mFieldsMortgage.size();
}
int Player::getNumOfMortgage(int num) {
	return mFieldsMortgage[num];
}
void Player::removeColor(string color,int numOfUpgrades) {
	for (int i = 0; i < mColourGroupOwned.size(); i++) {
		if (mColourGroupOwned[i] == color && numOfUpgrades>=0) {
			mColourGroupOwned.erase(mColourGroupOwned.begin() + i);
			numOfUpgrades--;
		}
		if (numOfUpgrades < 0) {
			return;
		}
	}
}
int Player::getNumOfColor(string color) {
	int count = 0;
	for (int i = 0; i < mColourGroupOwned.size(); i++) {
		if (mColourGroupOwned[i] == color) {
			count++;
		}
	}
	if (color == "коричневый" || color == "синий") {
		if (count >= 2) {
			return 2;
		}
		else return count;
	}
	else {
		if (count >= 3) {
			return 3;
		}
		else return count;
	}
}
Player::~Player() {

}