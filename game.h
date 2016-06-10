#ifndef GAME_H
#define GAME_H
#pragma once
#include <queue>
#include <deque>
#include <algorithm>
#include <string>
#include <vector>
#include "player.h"
#include "chance.h"
#include "field.h"
#include "forward.h"
#include "freeParking.h"
#include "goToJail.h"
#include "jail.h"
#include "property.h"
#include "publicTreasury.h"
#include "railway.h"
#include "tax.h"
#include "utility.h"
#include "purchased.h"
//класс »гра
class Game {
private:
	vector <Field*> board; //вектор всех полей 
	int numOfPlayers; //количество игроков
	Player* player[8]; //массив с игроками
	queue <int> cardChance; //очередь с картами Ўанс
	queue <int> cardTreasury; //очередь с картами ќбщественна€ казна
public:
	Game(); //конструктор
	void setNumOfPlayers();//устанавливаем количество игроков
	void setPlayers(); //устанавливаем имена игроков и заносим их в массив
	void playRound(); //играем игру в ћонополию
	void askUpgrade(int); // процедура,отвечающа€ за апгрейд полей
	void ifDouble(int); //проверка на выбрасывание дубл€
	void fillQueue(queue <int> &q); //заполнение очереди
	void unMortgage(int); //убираем поле из залога
	void printInfo(int);//выводим необходимую информацию о игроке
	void ask(int); // разговор с пользователем
	void rules();//вывод правил
	vector <int> availableUpgrade(Player*player[], int playerNum, int searchsize);//возвращаем вектор разрешЄнных апгрейдов
	void checkPlayerBalance(Player * player[],int playerNum); //проверка баланса
	~Game();
};
#endif