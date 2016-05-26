#include "publicTreasury.h"
#include "player.h"
Treasury::Treasury(string name) :Field(name) {

}
void Treasury::doTurn(Player* player[], int playerNum) {
	int randomPenalty = 0;
	cout << player[playerNum]->getName() << " popal na " << this->getName << endl;
	randomPenalty = Random();
	switch (randomPenalty) {
	case 1:
		cout << "1" << endl;
		player[playerNum]->decBalance(25);
		break;
	case 2:
		cout << "2" << endl;
		player[playerNum]->decBalance(50);
		break;
	case 3:
		cout << "3" << endl;
		player[playerNum]->decBalance(75);
		break;
	case 4:
		cout << "4" << endl;
		player[playerNum]->decBalance(100);
		break;
	case 5:
		cout << "5" << endl;
		player[playerNum]->decBalance(125);
		break;
	case 6:
		cout << "6" << endl;
		player[playerNum]->decBalance(150);
		break;
	}
}
Treasury::~Treasury() {

}