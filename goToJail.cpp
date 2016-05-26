#include "goToJail.h"

GoToJail::GoToJail(string name) :Field(name) {
}
void GoToJail::doTurn(Player*player[], int playerNum) {
	cout << player[playerNum]->getName << " popal na" << this->getName() << endl;
	cout << player[playerNum]->getName << " otpravlyaetsya v tur'mu" << endl;
	cout << player[playerNum]->getName << " platit 50" << endl;
	player[playerNum]->decBalance(50);
	player[playerNum]->setLocation(11);
}
GoToJail::~GoToJail(){

}