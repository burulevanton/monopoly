#include "publicTreasury.h"
#include "player.h"
Treasury::Treasury(string name, int location) :Field(name,location) {

}
void Treasury::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	int numCard = 0;
	cout << player[playerNum]->getName() << " попадает на поле " << this->getName() << endl;
	numCard = getTreasuryCard(q2);
	cout << player[playerNum]->getName() << "берёт карточку" << endl;
	switch (numCard) {
	case 1:
		cout << "<Получите по 10 от каждого игрока>" << endl;
		for (int i = 0; i < numOfPlayers; i++) {
			if (i != playerNum) {
				player[i]->decBalance(10);
				player[playerNum]->addBalance(10);
			}
		}
		break;
	case 2:
		cout << "<Отправляйтесь в тюрьму>" << endl;
		player[playerNum]->setLocation(10);
		player[playerNum]->setChanges(true);
		break;
	case 3:
		cout << "<Идите на поле Вперед>" << endl;
		player[playerNum]->setLocation(0);
		cout << player[playerNum]->getName() << " проходит поле <Вперед> и получает 200" << endl;
		player[playerNum]->setChanges(true);
		break;
	case 4:
		cout << "<Заплатите 50>" << endl;
		player[playerNum]->decBalance(50);
		break;
	case 5:
		cout << "<Получите 10>" << endl;
		player[playerNum]->addBalance(10);
		break;
	case 6:
		cout << "<Вы заработали 50>" << endl;
		player[playerNum]->addBalance(50);
		break;
	case 7:
		cout << "<Получите 200>" << endl;
		player[playerNum]->addBalance(200);
		break;
	case 8:
		cout << "<Заплатите 100>" << endl;
		player[playerNum]->decBalance(100);
		break;
	case 9:
		cout << "<Получите 100>" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 10:
		cout << "<Отправляйтесь на бесплатную стоянку>" << endl;
		if (player[playerNum]->getLocation() == 2 || player[playerNum]->getLocation() == 17) {
			player[playerNum]->setLocation(20);
		}
		else {
			player[playerNum]->setLocation(20);
			cout << player[playerNum]->getName() << " проходит поле <Вперед> и получает 200" << endl;
			player[playerNum]->setChanges(true);
		}
		break;
	case 11:
		cout << "<Получите 20>" << endl;
		player[playerNum]->addBalance(20);
		break;
	case 12:
		cout << "<Вы получаете 100>" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 13:
		cout << "<Заплатите 50>" << endl;
		player[playerNum]->decBalance(50);
		break;
	case 14:
		cout << "<Получите 100>" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 15:
		cout << "<Получите 25>" << endl;
		player[playerNum]->addBalance(25);
		break;
	}
}
int Treasury::getTreasuryCard(queue<int> &q) {
	int card = 0;
	card = q.front();
	q.pop();
	q.push(card);
	return card;
}
Treasury::~Treasury() {

}