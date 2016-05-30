#include "jail.h"
Jail::Jail(string name) :Field(name) {

}
void Jail::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2) {
	cout << player[playerNum]->getName() << " popal na" << this->getName() << endl;
	cout << player[playerNum]->getName() << " prosto posetil" << endl;
}
Jail::~Jail() {

}