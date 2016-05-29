#include "player.h"

Player::Player(string name, int num) {
	this->mNamePlayer = name;
	this->mNumPlayer = num;
	this->mCurrentBalance = 1500;
	this->mLocation = 0;
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
void Player::setOwned(string color) {
	mColourGroupOwned.push_back(color);
}
bool Player::getOwned(string color) {
	int searchSize = mColourGroupOwned.size();
	int count = 0;
	for (int i = 0; i < searchSize; i++) {
		if (mColourGroupOwned[i] == color) {
			count++;
		}
	}
	if (color == "darkblue" || color == "brown") {
		if (count == 2) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		if (count == 3) {
			return true;
		}
		else {
			return false;
		}
	}
}
void Player::setOwnedRailway(string railway) {
	mRailwayOwned.push_back(railway);
}
int Player::getOwnedRailway() {
	return mRailwayOwned.size();
}
void Player::setOwnedUtility(string utility) {
	mUtilityOwned.push_back(utility);
}
int Player::getOwnedUtility() {
	return mUtilityOwned.size();
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
	cout << mNamePlayer << " vibrasivaet " << mRoll1 <<" i " <<mRoll2<<endl;
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
			cout << mNamePlayer << " prohodit go i poluchaet 200" << endl;
		}
		counter++;
	}
}
int Player::getRoll() {
	return mRoll1 + mRoll2;
}
Player::~Player() {

}