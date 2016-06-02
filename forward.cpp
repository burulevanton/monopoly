#include "forward.h"

<<<<<<< HEAD
Forward::Forward(string name) :Field(name) {

}
void Forward::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName() << " popal na " << this->getName() << endl;
=======
Forward::Forward(string name, int location) :Field(name,location) {

}
void Forward::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " попал на поле <" << this->getName()<<">" << endl;
>>>>>>> dev
}
Forward::~Forward() {

}