#ifndef PROPERTY_H
#define PROPERTY_H
#pragma once

#include <string>

#include "player.h"
#include "purchased.h"
//класс Недвижимость
class Property : public Purchased
{
private:
	string mColourGroup; //цвет поля
public:
	Property(string name, int location, int cost, int rent,int costOfUpgrade,int rent1,int rent2,int rent3,int rent4,int rent5,string color); //конструктор
	void printInfo(Player* player[], int playerNum);//вывод информации
	int askPlayer(Player* player[], int playerNum);//разговор с игроком
	void askForUpgrade(Player* player[], int playerNum); //вопрос по поводу апгрейда
	string getColourGroup(); //получаем цвет поля
	int costOfMortage(Player*player[], int playerNum); //получаем цену залога
	void printMortgageInfo(Player* player[], int playerNum); //вывод информации при залоге
	int allowUpgrade(Player* player[], int playerNum); //проверка на разрешенные апгрейды
	void setMortgage(Player* player[],int playerNum,int i); //установка в залог
	void unsetMortgage(Player* player[],int playerNum,int i); //выкуп
	void setOwned(Player* player[], int playerNum); //установка владельца
	int getRent(Player* player[], int playerNum); //возвращаем стоимость аренды
	int rentWithoutUpgrades(Player* player[], int playerNum); //аренда без апгрейдов
	~Property();//деструктор
};
#endif