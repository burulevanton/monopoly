#include "jail.h"
Jail::Jail(string name, int location) :Field(name,location) {

}
void Jail::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " попал на поле <" << this->getName()<<">" << endl;
	if (player[playerNum]->checkChanges()) {
		cout << player[playerNum]->getName() << " отправляется в тюрьму" << endl;
		cout << player[playerNum]->getName() << " платит 50" << endl;
		player[playerNum]->decBalance(50);
	}
	else 
		cout << player[playerNum]->getName() << " просто посетил" << endl;
}
Jail::~Jail() {

}