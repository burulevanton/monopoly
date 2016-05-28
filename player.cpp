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
int Random() {
	return  rand() % 6 + 1;
}
void Player::RollDice() {
	int playerRoll1 = 0;
	int playerRoll2 = 0;
	int previousLoc = 0;
	int counter = 0;

	playerRoll1 = Random();
	playerRoll2 = Random();
	cout << mNamePlayer << " vibrasivaet " << playerRoll1 <<" i " <<playerRoll2<<endl;
	previousLoc = mLocation;
	int playerRoll = playerRoll1 + playerRoll2;
	while (mLocation < previousLoc + playerRoll)
	{
		mLocation++;

		if (mLocation == 26) {
			playerRoll = playerRoll - counter;
			mLocation = 0;
			previousLoc = -1;
			addBalance(200);
			cout << mNamePlayer << " prohodit go i poluchaet 200" << endl;
		}
		counter++;
	}
}
Player::~Player() {

}