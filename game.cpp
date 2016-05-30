#include "game.h"

Game::Game() {
	fillQueue(cardChance);
	fillQueue(cardTreasury);
	player[0] = new Player("Bob", 1);
	player[1] = new Player("Sam", 2);
	Field *field[40];
	field[0] = new Forward("Vpered");
	board.push_back(field[0]);
	field[1] = new Property("Zhitnaya", 60, 2,"brown");
	board.push_back(field[1]);
	field[2] = new Treasury("Kazna");
	board.push_back(field[2]);
	field[3] = new Property("Nagatinskaya", 60, 4,"brown");
	board.push_back(field[3]);
	field[4] = new Tax("Nalog", 200);
	board.push_back(field[4]);
	field[5] = new Railway("Rimskaya doroga");
	board.push_back(field[5]);
	field[6] = new Property("Varshavskoe", 100, 6,"blue");
	board.push_back(field[6]);
	field[7] = new Chance("SHANS");
	board.push_back(field[7]);
	field[8] = new Property("Ogareva", 100, 6,"blue");
	board.push_back(field[8]);
	field[9] = new Property("Pervaya parkovaya", 120, 8,"blue");
	board.push_back(field[9]);
	field[10] = new Jail("Tur'ma");
	board.push_back(field[10]);
	field[11] = new Property("Polyanka", 140, 10,"pink");
	board.push_back(field[11]);
	field[12] = new Utility("Electric");
	board.push_back(field[12]);
	field[13] = new Property("Sretenka", 140, 10,"pink");
	board.push_back(field[13]);
	field[14] = new Property("Rostovskaya nab", 160, 12,"pink");
	board.push_back(field[14]);
	field[15] = new Railway("Kurskaya");
	board.push_back(field[15]);
	field[16] = new Property("Ryazanskii", 180, 14,"orange");
	board.push_back(field[16]);
	field[17] = new Treasury("Kazna");
	board.push_back(field[17]);
	field[18] = new Property("Vavilova", 180, 14,"orange");
	board.push_back(field[18]);
	field[19] = new Property("Rublevka", 200, 16,"orange");
	board.push_back(field[19]);
	field[20] = new FreeParking("Besplatnaya stoyanka");
	board.push_back(field[20]);
	field[21] = new Property("Tverskaya", 220, 18,"red");
	board.push_back(field[21]);
	field[22] = new Chance("SHANS");
	board.push_back(field[22]);
	field[23] = new Property("Pushkinskaya", 220, 18,"red");
	board.push_back(field[23]);
	field[24] = new Property("Mayakovskogo", 240, 20,"red");
	board.push_back(field[24]);
	field[25] = new Railway("Kazanskaya doroga");
	board.push_back(field[25]);
	field[26] = new Property("Gruzinskyi val", 260, 22,"yellow");
	board.push_back(field[26]);
	field[27] = new Property("Chaikovskogo", 260, 22,"yellow");
	board.push_back(field[27]);
	field[28] = new Utility("Vodoprovod");
	board.push_back(field[28]);
	field[29] = new Property("Smolenskaya ploshad'", 280, 24,"yellow");
	board.push_back(field[29]);
	field[30] = new GoToJail("Go v tur'mu");
	board.push_back(field[30]);
	field[31] = new Property("Shuseva", 300, 26,"green");
	board.push_back(field[31]);
	field[32] = new Property("Gogolevskyi bulvar", 300, 26,"green");
	board.push_back(field[32]);
	field[33] = new Treasury("Kazna");
	board.push_back(field[33]);
	field[34] = new Property("Kutuzovskyi", 320, 28,"green");
	board.push_back(field[34]);
	field[35] = new Railway("Leningradskya doroga");
	board.push_back(field[35]);
	field[36] = new Chance("SHANS");
	board.push_back(field[36]);
	field[37] = new Property("Malaya Bronnaya", 350, 35,"darkblue");
	board.push_back(field[37]);
	field[38] = new Tax("Sverhnalog", 100);
	board.push_back(field[38]);
	field[39] = new Property("Arbat", 400, 50,"darkblue");
	board.push_back(field[39]);
	
	for (int i = 0; i <40; i++) {
		field[i] = NULL;
		delete(field[i]);
	}
	cout << "MONOPOLY" << endl;
}
void Game::playRound() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 2; j++) {
			player[j]->RollDice();
			board[player[j]->getLocation()]->doTurn(player, j, cardChance, cardTreasury);
			if (player[j]->checkChanges()) {
				board[player[j]->getLocation()]->doTurn(player, j, cardChance, cardTreasury);
				player[j]->setChanges(false);
			}
			cout << player[j]->getName() << " imeet " << player[j]->getBalance() << endl;
			cout << "-----------------------------------------" << endl;
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
Game::~Game() {
	for (int i = 0; i < 2; i++) 
	{
		delete(player[i]);
	}
	for (int i = 0; i < 38; i++)
	{
		delete(board[i]);
	}
	board.clear();
}