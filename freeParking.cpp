#include "freeParking.h"
FreeParking::FreeParking(string name) :Field(name) {

}
void FreeParking::doTurn(Player* player[], int playerNum) {
	cout << player[playerNum]->getName() << " popal na" << this->getName() << endl;
	cout << player[playerNum]->getName() << " otdohni" << endl;
}
FreeParking::~FreeParking() {

}