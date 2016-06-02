#include "publicTreasury.h"
#include "player.h"
Treasury::Treasury(string name, int location) :Field(name,location) {

}
void Treasury::doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers) {
	int numCard = 0;
	cout << player[playerNum]->getName() << " �������� �� ���� " << this->getName() << endl;
	numCard = getTreasuryCard(q2);
	cout << player[playerNum]->getName() << "���� ��������" << endl;
	switch (numCard) {
	case 1:
		cout << "<�������� �� 10 �� ������� ������>" << endl;
		for (int i = 0; i < numOfPlayers; i++) {
			if (i != playerNum) {
				player[i]->decBalance(10);
				player[playerNum]->addBalance(10);
			}
		}
		break;
	case 2:
		cout << "<������������� � ������>" << endl;
		player[playerNum]->setLocation(10);
		player[playerNum]->setChanges(true);
		break;
	case 3:
		cout << "<����� �� ���� ������>" << endl;
		player[playerNum]->setLocation(0);
		cout << player[playerNum]->getName() << " �������� ���� <������> � �������� 200" << endl;
		player[playerNum]->setChanges(true);
		break;
	case 4:
		cout << "<��������� 50>" << endl;
		player[playerNum]->decBalance(50);
		break;
	case 5:
		cout << "<�������� 10>" << endl;
		player[playerNum]->addBalance(10);
		break;
	case 6:
		cout << "<�� ���������� 50>" << endl;
		player[playerNum]->addBalance(50);
		break;
	case 7:
		cout << "<�������� 200>" << endl;
		player[playerNum]->addBalance(200);
		break;
	case 8:
		cout << "<��������� 100>" << endl;
		player[playerNum]->decBalance(100);
		break;
	case 9:
		cout << "<�������� 100>" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 10:
		cout << "<������������� �� ���������� �������>" << endl;
		if (player[playerNum]->getLocation() == 2 || player[playerNum]->getLocation() == 17) {
			player[playerNum]->setLocation(20);
		}
		else {
			player[playerNum]->setLocation(20);
			cout << player[playerNum]->getName() << " �������� ���� <������> � �������� 200" << endl;
			player[playerNum]->setChanges(true);
		}
		break;
	case 11:
		cout << "<�������� 20>" << endl;
		player[playerNum]->addBalance(20);
		break;
	case 12:
		cout << "<�� ��������� 100>" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 13:
		cout << "<��������� 50>" << endl;
		player[playerNum]->decBalance(50);
		break;
	case 14:
		cout << "<�������� 100>" << endl;
		player[playerNum]->addBalance(100);
		break;
	case 15:
		cout << "<�������� 25>" << endl;
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