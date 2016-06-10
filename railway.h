#ifndef RAILWAY_H
#define RAILWAY_H
#pragma once
#include "purchased.h"
//класс Железная дорога
class Railway :public Purchased {
public:
	Railway(string name, int location, int cost, int rent, int costOfHouse, int rent1, int rent2, int rent3, int rent4, int rent5); //конструктор
	void printInfo(Player* player[], int playerNum); //вывод информации 
	void printMortgageInfo(Player* player[], int playerNum); //вывод информации при залоге
	int costOfMortage(Player*player[], int playerNum); //цена залога
	int askPlayer(Player* player[], int playerNum); //разговор с пользователем
	void askForUpgrade(Player* player[],int playerNum); //вопрос по апгрейду
	int allowUpgrade(Player* player[], int playerNum); //разрешен ли апгрейд
	void setMortgage(Player* player[], int playerNum,int i); //закладываем 
	void unsetMortgage(Player* player[], int playerNum,int i); //выкупаем 
	void setOwned(Player* player[], int playerNum); //устанавливаем владельца
	int getRent(Player* player[], int playerNum); //получаем арендную плату
	~Railway(); //деструктор
};
#endif