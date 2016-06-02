#include "game.h"

Game::Game() {
	fillQueue(cardChance);
	fillQueue(cardTreasury);
	cout << "************************************************" << endl;
	cout << "MONOPOLY" << endl;
	cout << "************************************************" << endl;
	setNumOfPlayers();
	setPlayers();
	Field *field[40];
	field[0] = new Forward("�����",0);
	board.push_back(field[0]);
	field[1] = new Property("��.������",1, 60, 2,50,10,30,90,160,250, "����������");
	board.push_back(field[1]);
	field[2] = new Treasury("������������ �����",2);
	board.push_back(field[2]);
	field[3] = new Property("��. �����������",3, 60, 4,50,20,60,180,320,450, "����������");
	board.push_back(field[3]);
	field[4] = new Tax("�����",4, 200);
	board.push_back(field[4]);
	field[5] = new Railway("������� �������� ������",5,200,25,100,50,100,200,300,400);
	board.push_back(field[5]);
	field[6] = new Property("���������� �����",6, 100, 6,50,30,90,270,400,550, "�������");
	board.push_back(field[6]);
	field[7] = new Chance("����",7);
	board.push_back(field[7]);
	field[8] = new Property("��.�������",8, 100, 6,50,30,90,270,400,550, "�������");
	board.push_back(field[8]);
	field[9] = new Property("��. ������ ��������",9, 120, 8,50,40,100,300,450,600, "�������");
	board.push_back(field[9]);
	field[10] = new Jail("������",10);
	board.push_back(field[10]);
	field[11] = new Property("��.�������",11, 140, 10,100,50,150,450,625,750, "�������");
	board.push_back(field[11]);
	field[12] = new Utility("��������������",12,150, 4, 150, 8, 16, 24, 32, 40);
	board.push_back(field[12]);
	field[13] = new Property("��.��������",13, 140, 10,100,50,150,450,625,750, "�������");
	board.push_back(field[13]);
	field[14] = new Property("���������� ����������",14, 160, 12,100,60,180,500,700,900, "�������");
	board.push_back(field[14]);
	field[15] = new Railway("������� �������� ������",15, 200, 25, 100, 50, 100, 200,300, 400);
	board.push_back(field[15]);
	field[16] = new Property("��������� ��������",16, 180, 14,100,70,200,550,750,950, "���������");
	board.push_back(field[16]);
	field[17] = new Treasury("������������ �����",17);
	board.push_back(field[17]);
	field[18] = new Property("��.��������",18, 180, 14,100,70,200,550,750,950, "���������");
	board.push_back(field[18]);
	field[19] = new Property("���������� �����",19, 200, 16,100,80,220,600,800,1000, "���������");
	board.push_back(field[19]);
	field[20] = new FreeParking("���������� �������",20);
	board.push_back(field[20]);
	field[21] = new Property("��.��������",21, 220, 18,150,90,250,700,875,1050, "�������");
	board.push_back(field[21]);
	field[22] = new Chance("����",22);
	board.push_back(field[22]);
	field[23] = new Property("��.����������",23, 220, 18,150,90,250,700,875,1050, "�������");
	board.push_back(field[23]);
	field[24] = new Property("������� �����������",24, 240, 20,150,100,300,750,925,1100, "�������");
	board.push_back(field[24]);
	field[25] = new Railway("��������� �������� ������",25, 200, 25, 100, 50, 100, 200,300,400);
	board.push_back(field[25]);
	field[26] = new Property("��.���������� ���",26, 260, 22,150,110,330,800,975,1150, "�����");
	board.push_back(field[26]);
	field[27] = new Property("��.�����������",27, 260, 22,150,110,330,800,975,1150,"�����");
	board.push_back(field[27]);
	field[28] = new Utility("����������",28,150,4,75,8,16,24,32,40);
	board.push_back(field[28]);
	field[29] = new Property("���������� �������",29, 280, 24,150,120,360,850,1025,1200, "�����");
	board.push_back(field[29]);
	field[30] = new GoToJail("������������� � ������",30);
	board.push_back(field[30]);
	field[31] = new Property("��.������",31, 300, 26,200,130,390,900,1100,1275, "������");
	board.push_back(field[31]);
	field[32] = new Property("����������� �������",32, 300, 26,200,130,390,900,1100,1275, "������");
	board.push_back(field[32]);
	field[33] = new Treasury("������������ �����",33);
	board.push_back(field[33]);
	field[34] = new Property("����������� ��������",34, 320, 28,200,150,450,1000,1200,1400, "������");
	board.push_back(field[34]);
	field[35] = new Railway("������������� �������� ������",35, 200, 25, 100, 50, 100, 200,300,400);
	board.push_back(field[35]);
	field[36] = new Chance("����",36);
	board.push_back(field[36]);
	field[37] = new Property("��.����� �������",37, 350, 35,200,175,500,1100,1300,1500, "�����");
	board.push_back(field[37]);
	field[38] = new Tax("����������",38, 100);
	board.push_back(field[38]);
	field[39] = new Property("��.�����",39, 400, 50,200,200,600,1400,1700,2000, "�����");
	board.push_back(field[39]);
	
	for (int i = 0; i <40; i++) {
		field[i] = NULL;
		delete(field[i]);
	}
}
void Game::playRound() {
	int numOfActivePlayers = numOfPlayers;
	int numOfTurn = 1;
	while(numOfActivePlayers>1) {
		numOfActivePlayers = 0;
		cout << "************************************************" << endl;
		cout << "��� �" << numOfTurn << endl;
		cout << "************************************************" << endl;
		for (int j = 0; j < numOfPlayers; j++) {
			if (j == numOfPlayers - 1 && numOfActivePlayers == 0) {
				numOfActivePlayers = 1;
				break;
			}
		if (player[j]->checkQuit() == false) {
			cout << player[j]->getName() << " �����(������=" <<player[j]->getBalance()<<"P)"<< endl;
			ask(j);
			cout << "--------------------------------------------------" << endl;
			if(player[j]->checkQuit()==false){
			board[player[j]->getLocation()]->doTurn(player, j, cardChance, cardTreasury,numOfPlayers);
			cout << "--------------------------------------------------" << endl;
			if (player[j]->checkChanges()) {
				board[player[j]->getLocation()]->doTurn(player, j, cardChance, cardTreasury,numOfPlayers);
				player[j]->setChanges(false);
			}
			askUpgrade(j);
			checkPlayerBalance(player, j);
			cout << "////////////////////////////////////////////////////" << endl;
		}
			if (player[j]->checkQuit() == false) {
				numOfActivePlayers++;
			}
		}
		}
		for (int i = 0; i < numOfPlayers; i++) {
			int searchSize = player[i]->getSizeOfMortV();
			int j = 0;
			while(j!=player[i]->getSizeOfMortV()){
				Purchased* tmp = dynamic_cast<Purchased*>(board[player[i]->getNumOfMortgage(j)]);
				if (tmp->upTurns() == true) {
					tmp->unsetOwner(player,i,j);
				}
				else {
					j++;
				}
			}
		}
		numOfTurn++;
	}
	for (int i = 0; i < numOfPlayers; i++) {
		if (player[i]->checkQuit() == false) {
			cout << "������� " << player[i]->getName() << endl;;
		}
	}
}
void Game::ask(int playerNum) {
	cout << "1)������� ������" << endl;
	cout << "2)����������� ���������� � ����" << endl;
	cout << "3)����������� ���������� � ������ �������" << endl;
	cout << "4)�������" << endl;
	cout << "5)����� �� ����" << endl;
	int answer;
	cin >> answer;
	cout << "--------------------------------------------------" << endl;
	switch (answer) {
	case 1: {
		player[playerNum]->RollDice();
		return;
		break; }
	case 2: {
		printInfo(playerNum);
		cout << "--------------------------------------------------" << endl;
		if (player[playerNum]->getSizeOfMortV() != 0) {
			cout << "����������� ��� ��������?" << endl;
			cout << "1)��" << endl;
			cout << "2)���" << endl;
			cin >> answer;
			while (answer < 1 || answer>2) {
				cout << "������� �������� �����" << endl;
				cout << "������� ������->";
				cin >> answer;
			}
			switch (answer) {
			case 1:
				for (int i = 0; i < player[playerNum]->getSizeOfMortV(); i++) {
					Purchased* tmp = dynamic_cast<Purchased*>(board[player[playerNum]->getNumOfMortgage(i)]);
					cout << i + 1 << ")";
					tmp->printMortgageInfo(player, playerNum);
				}
				cout << "--------------------------------------------------" << endl;
				ask(playerNum);
				break;
			case 2:
				ask(playerNum);
				break;
			}
		}
		else {
			ask(playerNum);
		}
		break; }
	case 3:{
		for (int i = 0; i < numOfPlayers; i++) {
			if (i != playerNum && player[i]->checkQuit() == false) {
				printInfo(i);
				cout << "--------------------------------------------------" << endl;
			}
		}
		ask(playerNum);
		break;
	}
	case 4: {
		rules();
		ask(playerNum);
		break; }
	case 5:
		player[playerNum]->quitGame();
		return;
		break;
	}
}
void Game::rules() {
	cout << "������ ���� ����������� � ���, ����� ����������� ������ �������" << endl;
	cout << "��������� ���� �����������, ���� � ��, ������� ���� ������ ����(�����), �� �������� ����������� �������� ��" << endl;
	cout << "��������� �������� � ��������� �������� �����, ��� ,����������, ����������� ��� �����" << endl;
	cout << "���� �� ��������� � ������, ���� ��������� ��� �������� ������������� ���� ����" << endl;
	cout << "��� ����������� ��������� ��� ������������ ������������ ������������� ���������" << endl;
	cout << "���� �� �� �������� ���������� ���� � ������� 10 �����, ��� ������������� ������ ������������� ��� �������, � �� ��������� �� ���� ����� ���������" << endl;
	cout << "���� �� ��������� � ������, � �� ������ ���������� �����, ������� ������� ���� �����, ���� ��� ��� ����������" << endl;
	cout << "����������� ���������� � ����� ����������� ��� � ���� ����� ������ � ������ ������ ����" << endl;
	cout << "--------------------------------------------------" << endl;
}
void Game::printInfo(int numOfPlayer) {
	cout << "������ "<<player[numOfPlayer]->getName()<<"=" << player[numOfPlayer]->getBalance() << endl;
	cout << player[numOfPlayer]->getName() << " ����� �� ��������" << endl;
	cout << "����� ����������� ����� " << player[numOfPlayer]->getNumOfColor("����������") <<"/2"<< endl;
	cout << "����� �������� ����� " << player[numOfPlayer]->getNumOfColor("�������") <<"/3"<< endl;
	cout << "����� �������� ����� " << player[numOfPlayer]->getNumOfColor("�������") << "/3" << endl;
	cout << "����� ���������� ����� " << player[numOfPlayer]->getNumOfColor("���������") << "/3" << endl;
	cout << "����� �������� ����� " << player[numOfPlayer]->getNumOfColor("�������") << "/3" << endl;
	cout << "����� ������ ����� " << player[numOfPlayer]->getNumOfColor("�����") << "/3" << endl;
	cout << "����� ������� ����� " << player[numOfPlayer]->getNumOfColor("������") << "/3" << endl;
	cout << "����� ������ ����� " << player[numOfPlayer]->getNumOfColor("�����") << "/2" << endl;
	cout << "������������ ����������� ";
	if (player[numOfPlayer]->getOwnedUtility() >= 2) {
		cout << 2 << "/2" << endl;
	}
	else {
		cout << player[numOfPlayer]->getOwnedUtility() << "/2" << endl;
	}
	cout << "��������������� ������� ";
	if (player[numOfPlayer]->getOwnedRailway() >= 4) {
		cout << 4 << "/4" << endl;
	}
	else {
		cout << player[numOfPlayer]->getOwnedRailway() << "/4" << endl;
	}
	cout << "�������� " << player[numOfPlayer]->getSizeOfMortV() << " ����(��)" << endl;
}
vector <int> Game::availableUpgrade(Player*player[], int playerNum,int searchsize) {
	vector<int>upgrades;
	for (int i = 0; i < searchsize; i++) {
		Purchased* tmp = dynamic_cast<Purchased*>(board[player[playerNum]->getNumOfField(i)]);
		int check = tmp->allowUpgrade(player, playerNum);
		if (check != 0) {
			upgrades.push_back(check);
		}
	}
	return upgrades;
}
void Game::askUpgrade(int playerNum) {
	vector<int>upgrades;
	if (player[playerNum]->getBalance() > 0) {
		int searchSize = player[playerNum]->sizeOfVect();
		if (searchSize == 0) {
			cout << "��� ������ ��������" << endl;
			return;
		}
		else {
			upgrades = availableUpgrade(player, playerNum, searchSize);
			searchSize = upgrades.size();
			if (searchSize == 0) {
				return;
			}
		}
		cout << player[playerNum]->getName() << ", �� ������ �������� ���� ��������:" << endl;
		for (int i = 0; i < searchSize; i++) {
			int numOfField = upgrades[i];
			Purchased * tmp = dynamic_cast<Purchased*>(board[numOfField]);
			cout << i + 1 << ") ";
			tmp->printInfo(player,playerNum);
		}
		cout << "0)������ �� ������" << endl;
		cout << ":";
		int answer;
		cin >> answer;
		if (answer == 0) {
			return;
		}
		else {
			int numOfField = upgrades[answer - 1];
			Purchased * tmp1 = dynamic_cast<Purchased*>(board[numOfField]);
			tmp1->setUpgrade(player, playerNum);
			cout << "������ ��� ���-������ ��������?" << endl;
			cout << "1)��" << endl;
			cout << "2)���" << endl;
			cout << ":";
			cin >> answer;
			switch (answer) {
			case 1:
				askUpgrade(playerNum);
				break;
			case 2:
				return;
				break;
			}
		}
	}
}
void Game::fillQueue(queue <int> &q) {
	deque <int> dop;
	for (int i = 0; i < 16; i++) {
		dop.push_back(i);
	}
	random_shuffle(dop.begin(), dop.end());
	for (int i = 0; i < 16; i++) {
		q.push(dop[i]);
	}
}
void Game::unMortgage(int playerNum) {
	cout << "�� ������ �������� ���� �������������" << endl;
	cout << "�������� ������������� ��� ������" << endl;
	for (int i = 0; i < player[playerNum]->getSizeOfMortV(); i++) {
		Purchased* tmp = dynamic_cast<Purchased*>(board[player[playerNum]->getNumOfMortgage(i)]);
		cout << i + 1<<"1";
		tmp->printUnMortgageInfo(player, playerNum);
	}
	int answer;
	cin >> answer;
	if (answer == 0) {
		cout << "�������, ��� ���� �� �� �������� ���� ������������� ������ ��� �� 10 �����, ��� ������ ��������� ��� ������� ����";
		return;
	}
	else {
		Purchased* tmp = dynamic_cast<Purchased*>(board[player[playerNum]->getNumOfMortgage(answer-1)]);
		tmp->unsetMortgage(player, playerNum, answer - 1);
		if (player[playerNum]->getSizeOfMortV() > 0) {
			cout << "������ ���?" << endl;
			cout << "1)��" << endl;
			cout << "2)���" << endl;
			cout << ":";
			cin >> answer;
			switch (answer) {
			case 1:
				unMortgage(playerNum);
				break;
			case 2:
				return;
				break;
			}
		}
	}
}
void Game::checkPlayerBalance(Player *player[],int playerNum) {
	if (player[playerNum]->getBalance() < 0) {
		int searchsize = player[playerNum]->sizeOfVect();
		while(player[playerNum]->getBalance() <0 && player[playerNum]->sizeOfVect()!=0)
		{	
			cout << "� ��� ������������� ������("<<player[playerNum]->getBalance()<<"P), ��� ���������� �������� ���� �������������" << endl;
			cout << "�������� �������������:" << endl;
			for (int i = 0; i < player[playerNum]->sizeOfVect() ;i++) {
				Purchased* tmp = dynamic_cast<Purchased*>(board[player[playerNum]->getNumOfField(i)]);
				cout << i + 1<<")";
				tmp->printMortgageInfo(player, playerNum);
			}
			cout << "0)����� �� ����" << endl;
			cout << ":";
			int answer;
			cin >> answer;
			if (answer == 0) {
				player[playerNum]->quitGame();
				return;
			}
			else {
				Purchased* tmp = dynamic_cast<Purchased*>(board[player[playerNum]->getNumOfField(answer-1)]);
				tmp->setMortgage(player, playerNum, answer - 1);
			}
		}
		if (player[playerNum]->getBalance() < 0 && player[playerNum]->sizeOfVect() == 0) {
			player[playerNum]->quitGame();
			int size = player[playerNum]->getSizeOfMortV();
			for (int i = 0; i < size; i++) {
				board[player[playerNum]->getNumOfMortgage(i)]->doTurn(player, playerNum, cardChance, cardTreasury, numOfPlayers);
			}
		}
		if (player[playerNum]->getBalance() > 0) {
			cout << "������ "<<player[playerNum]->getName() << " ����� " << player[playerNum]->getBalance() << endl;
		}
	}
	else if (player[playerNum]->getBalance() > 0 && player[playerNum]->getSizeOfMortV() != 0) {
		unMortgage(playerNum);
	}
	else {
		cout << "������ " << player[playerNum]->getName() << " ����� " << player[playerNum]->getBalance() << endl;
	}
}
void Game::setNumOfPlayers() {
	cout << "������� ���������� �������(2-8): ";
	int num;
	cin >> num;
	if (num > 1 && num <= 8)
		numOfPlayers = num;
	else {
		while (num <= 1 || num > 8)
		{
			cout << "������� ������������ ���������� �������, ��������� �������:";
			cin >> num;
		}
		numOfPlayers = num;
	}
}
void Game::setPlayers() {
	for (int i = 0; i < numOfPlayers; i++) {
		string name;
		cout << "������� ��� ������" << i+1<<": ";
		cin >> name;
		player[i] = new Player(name, i);
	}
}
Game::~Game() {
	for (int i = 0; i < 8; i++) 
	{
		delete(player[i]);
	}
	for (int i = 0; i < 38; i++)
	{
		delete(board[i]);
	}
	board.clear();
}