#include "forward.h"

Forward::Forward(string name, int location) :Field(name,location) {

}
void Forward::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " попал на поле <" << this->getName()<<">" << endl;
}
Forward::~Forward() {

}