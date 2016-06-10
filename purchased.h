#ifndef PURCHASED_H
#define PURCHASED_H
#pragma once
#include "field.h"
//абстрактный класс Покупаемое, от которого наследуются классы Недвижимость, Железная дорога и Коммунальные предприятия
class Purchased :public Field {
protected:
	int mCost; //стоимость
	int mRent[6]; // массив с арендой(зависит от апгрейдов)
	int mOwner; //номер владельца
	bool isMortgage; //в залоге или нет true - да false - нет
	int mCostOfUpgrade; //стоимость апгрейда
	int numOfUpgrades; //количество сделанных апгрейдов
	int numOfTurns; //количество ходов в залоге
public:
	Purchased(string name, int location, int cost, int rent, int costOfUpgrade, int rent1, int rent2, int rent3, int rent4, int rent5); //конструктор
	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);//ход игрока
	virtual void printInfo(Player* player[], int playerNum) = 0; //выводим информацию
	virtual void printMortgageInfo(Player* player[], int playerNum) = 0; //выводим информацию при залоге
	virtual int askPlayer(Player* player[], int playerNum) = 0; //разговор с пользователем
	virtual int allowUpgrade(Player* player[], int playerNum) = 0; // разрешен ли апгрейд
	virtual void askForUpgrade(Player* player[], int playerNum) = 0; //разговор с пользователем о апгрейде
	virtual void setOwned(Player* player[], int playerNum) = 0; //покупка поля
	virtual int getRent(Player* player[], int playerNum) = 0; //получаем арендную плату
	virtual int costOfMortage(Player*player[], int playerNum) = 0; //залоговая цена
	int getCost(); //получаем цену
	int getRent(); //получаем аренду
	int getOwner(); //получаем владельца
	void setUpgrade(Player*player[],int playerNum); //делаем апгрейд
	void unsetOwner(Player* player[],int playerNum,int i); //удаляем владельца
	bool checkMortgage(); //проверка на залог
	virtual void setMortgage(Player* player[], int playerNum, int i)=0;//закладываем поле
	virtual void unsetMortgage(Player* player[], int playerNum, int i)=0; //выкупаем поле
	void printUnMortgageInfo(Player* player[],int playerNum); //вывод информации при выкупе
	bool upTurns(); //увеличиваем ходы(нужны для залога)
	int getTurns(); //получаем количество ходов в залоге

	~Purchased();
};
#endif
