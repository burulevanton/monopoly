#include "freeParking.h"
FreeParking::FreeParking(string name, int location) :Field(name,location) {

}
void FreeParking::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	cout << player[playerNum]->getName() << " ����� �� ���� <" << this->getName()<<">" << endl;
	cout << player[playerNum]->getName() << " �������" << endl;
}
FreeParking::~FreeParking() {

}