#include "chance.h"
#include "player.h"
#include <vector>

Chance::Chance(string name) :Field(name) {
}
void Chance::doTurn(Player* player[], int playerNum) {
	int randomChance = 0;
	cout << player[playerNum]->getName() << " popal na " << this->getName() << endl;
	randomChance = Random();
	switch (randomChance) {
	case 1:
		cout << "1" << endl;
		player[playerNum]->addBalance(25);
		break;
	case 2:
		cout << "2" << endl;
		player[playerNum]->addBalance(50);
		break;
	case 3:
		cout << "3" << endl;
		player[playerNum]->addBalance(75);
		break;
	case 4:
		cout << "4" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 5:
		cout << "5" << endl;
		player[playerNum]->addBalance(125);
		break;
	case 6:
		cout << "6" << endl;
		player[playerNum]->addBalance(150);
		break;
	}
}

Chance::~Chance() {

}