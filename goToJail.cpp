#include "goToJail.h"

<<<<<<< HEAD
GoToJail::GoToJail(string name) :Field(name) {
}
void GoToJail::doTurn(Player*player[], int playerNum) {
	cout << player[playerNum]->getName() << " popal na" << this->getName() << endl;
	cout << player[playerNum]->getName() << " otpravlyaetsya v tur'mu" << endl;
	cout << player[playerNum]->getName() << " platit 50" << endl;
=======
GoToJail::GoToJail(string name, int location) :Field(name,location) {
}
void GoToJail::doTurn(Player*player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers){
	cout << player[playerNum]->getName() << " ����� �� ���� <" << this->getName() <<">"<< endl;
	cout << player[playerNum]->getName() << " ������������ � ������" << endl;
	cout << player[playerNum]->getName() << " ������ 50" << endl;
>>>>>>> dev
	player[playerNum]->decBalance(50);
	player[playerNum]->setLocation(11);
}
GoToJail::~GoToJail(){

}