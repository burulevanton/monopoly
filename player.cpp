#include "player.h"

MPlayer::MPlayer(string name, int num) {
	this->mNamePlayer = name;
	this->mNumPlayer = num;
	this->mCurrentBalance = 1500;
	this->mLocation = 0;
}

string MPlayer::getName() {
	return mNamePlayer;
}
int MPlayer::getPlayerNum() {
	return mNumPlayer;
}
int MPlayer::getLocation() {
	return mLocation;
}
void MPlayer::setLocation(int loc) {
	this->mLocation = loc;
}
void MPlayer::addBalance(int add) {
	mCurrentBalance += add;
}
void MPlayer::decBalance(int dec) {
	mCurrentBalance -= dec;
}
int MPlayer::getBalance() {
	return mCurrentBalance;
}
int Random() {
	return  rand() % 6 + 1;
}