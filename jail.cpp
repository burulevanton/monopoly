<<<<<<< HEAD
#include "jail.h"
Jail::Jail(string name) :Field(name) {

}
void Jail::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName() << " popal na" << this->getName() << endl;
	cout << player[playerNum]->getName() << " prosto posetil" << endl;
}
Jail::~Jail() {

=======
#include "jail.h"
Jail::Jail(string name, int location) :Field(name,location) {

}
void Jail::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " ����� �� ���� <" << this->getName()<<">" << endl;
	if (player[playerNum]->checkChanges()) {
		cout << player[playerNum]->getName() << " ������������ � ������" << endl;
		cout << player[playerNum]->getName() << " ������ 50" << endl;
		player[playerNum]->decBalance(50);
	}
	else 
		cout << player[playerNum]->getName() << " ������ �������" << endl;
}
Jail::~Jail() {

>>>>>>> dev
}