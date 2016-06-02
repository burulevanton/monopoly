#include "chance.h"
#include "player.h"
#include <vector>

Chance::Chance(string name, int location) :Field(name,location) {
}
void Chance::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	int numCard = 0;
	cout << player[playerNum]->getName() << " попал на поле " << this->getName() << endl;
	numCard = getChanceCard(q1);
	switch (numCard) {
	case 1:
		cout << "Отправляйтесь на Арбат" << endl;
		player[playerNum]->setLocation(39);
		player[playerNum]->setChanges(true);
		break;
	case 2:
		cout << "Отправляйтесь на Полянка" << endl;
		if (player[playerNum]->getLocation() == 7) {
			player[playerNum]->setLocation(11);
		}
		else {
			cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
			player[playerNum]->addBalance(200);
			player[playerNum]->setLocation(11);
		}
		player[playerNum]->setChanges(true);
		break;
	case 3:
		cout << "Отправляйтесь на ближайшую станцию " << endl;
		if (player[playerNum]->getLocation() == 7) {
			player[playerNum]->setLocation(15);
		}
		if (player[playerNum]->getLocation() == 22) {
			player[playerNum]->setLocation(25);
		}
		if (player[playerNum]->getLocation() == 36) {
			player[playerNum]->setLocation(5);
			cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
			player[playerNum]->addBalance(200);
		}
		player[playerNum]->setChanges(true);
		break;
	case 4:
		cout << "Заплатите каждому игроку 50" << endl;
		for (int i = 0; i < numOfPlayers; i++) {
			if (i != playerNum) {
				player[i]->addBalance(50);
				player[playerNum]->decBalance(50);
			}
		}
		break;
	case 5:
		cout << "Банк платит вам 50" << endl;
		player[playerNum]->addBalance(50);
		break;
	case 6:
		cout << "Идете на ближайшее поле коммунального предприятия" << endl;
		if (player[playerNum]->getLocation() == 7) {
			player[playerNum]->setLocation(12);
		}
		if (player[playerNum]->getLocation() == 22) {
			player[playerNum]->setLocation(28);
		}
		if (player[playerNum]->getLocation() == 36) {
			player[playerNum]->setLocation(12);
			cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
		}
		player[playerNum]->setChanges(true);
		break;
	case 7:
		cout << "Отправляйтесь в тюрьму" << endl;
		player[playerNum]->setLocation(10);
		player[playerNum]->setChanges(true);
		break;
	case 8:
		cout << "Отправляйтесь поездом до станции Римская Железная дорога" << endl;
		player[playerNum]->setLocation(5);
		cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
		player[playerNum]->addBalance(200);
		player[playerNum]->setChanges(true);
		break;
	case 9:
		cout << "Отправляйтесь на ближайшую станцию " << endl;
		if (player[playerNum]->getLocation() == 7) {
			player[playerNum]->setLocation(15);
		}
		if (player[playerNum]->getLocation() == 22) {
			player[playerNum]->setLocation(25);
		}
		if (player[playerNum]->getLocation() == 36) {
			player[playerNum]->setLocation(5);
			cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
			player[playerNum]->addBalance(200);
		}
		player[playerNum]->setChanges(true);
		break;
	case 10:
		cout << "Штраф 15" << endl;
		player[playerNum]->decBalance(15);
		break;
	case 11:
		cout << "Отправляйтесь на бесплатную стоянку" << endl;
		if (player[playerNum]->getLocation() == 7) {
			player[playerNum]->setLocation(20);
		}
		else {
			player[playerNum]->setLocation(20);
			cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
			player[playerNum]->addBalance(200);
		}
		player[playerNum]->setChanges(true);
		break;
	case 12:
		cout << "Получите 150" << endl;
		player[playerNum]->addBalance(150);
		break;
	case 13:
		cout << "Отправляйтесь на площадь Маяковского" << endl;
		if (player[playerNum]->getLocation() == 7 || player[playerNum]->getLocation() == 22) {
			player[playerNum]->setLocation(24);
		}
		else {
			player[playerNum]->setLocation(24);
			cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
			player[playerNum]->addBalance(200);
		}
		player[playerNum]->setChanges(true);
		break;
	case 14:
		cout << "Вернитесь на три поля назад" << endl;
		player[playerNum]->setLocation(player[playerNum]->getLocation() - 3);
		player[playerNum]->setChanges(true);
		break;
	case 15:
		cout << "Идите на поле Вперед" << endl;
		player[playerNum]->setLocation(0);
		player[playerNum]->addBalance(200);
		cout << player[playerNum]->getName() << " проходит поле Вперед и получает 200" << endl;
		player[playerNum]->setChanges(true);
		break;
	}
}
int Chance::getChanceCard(queue<int> &q) {
	int card = 0;
	card = q.front();
	q.pop();
	q.push(card);
	return card;
}
Chance::~Chance() {

}