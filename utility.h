#ifndef UTILITY_H
#define UTILITY_H
#pragma once
#include "purchased.h"
//класс Коммунальное предприятие
class Utility :public Purchased {
public:
	Utility(string name, int location,int cost,int rent,int costOfUprgrade, int rent1, int rent2, int rent3, int rent4, int rent5); //конструктор
	int askPlayer(Player* player[],int playerNum); //разговор с пользователем
	void printInfo(Player* player[], int playerNum); //вывод информации
	void printMortgageInfo(Player* player[], int playerNum); //вывод информации при залоге
	int allowUpgrade(Player* player[], int playerNum); //разрешен ли апгрейд
	void setMortgage(Player* player[], int playerNum,int i); //закладываем
	void unsetMortgage(Player* player[], int playerNum,int i); //выкупаем
	void askForUpgrade(Player* player[], int playerNum); //спрашиваем пользователя о апгрейде
	void setOwned(Player* player[], int playerNum); //устанавливаем владельца
	int getRentWithoutDice(Player* player[], int playerNum); //арендная плата без кубика
	int costOfMortage(Player*player[], int playerNum); // залоговая цена
	int getRent(Player* player[], int playerNum); // получаем арендную плату
	~Utility(); //деструктор
};
#endif
