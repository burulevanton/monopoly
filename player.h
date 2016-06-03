#ifndef PLAYER_H 
#define PLAYER_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Field;
class Player
{
private:
	string mNamePlayer; //имя игрока
	int mNumPlayer; //номер игрока
	int mCurrentBalance; //баланс игрока
	bool changeLocation; //смена локации от поля Шанс
	int mLocation;//позиция игрока на поле
	int mRoll1; //значение кубика №1 
	int mRoll2; //значение кубика №2
	bool inGame; //индикатор нахождения в игре true - в игре false - вышел
	int getDouble; //количество дублей
	vector <string> mColourGroupOwned;//вектор, купленных цветов
	int mRailwayOwned; //количество купленных ж/д станций
	int mUtilityOwned; //количество купленных коммунальных предприятий
	vector <int> mFieldsOwned; //вектор купленный полей
	vector <int> mFieldsMortgage;// вектор заложенных полей
public:
	Player(string name, int numPlayer); // конструктор
  
	string getName(); //функция получения имени
	
	int getPlayerNum(); //функция получения номера игрока

	int checkGetDouble(); //функция проверки на выброс дубля
	void setGetDouble(); //возврат индикатора дубля в значение 0

	void removeColor(string,int); //удаление владения одним цветом из вектора

	int getBalance(); //функция, возвращающая баланс игрока
	void addBalance(int add); //процедура добавления денег к балансу
	void decBalance(int dec); //процедура снятия денег с баланса

	int getLocation(); //функция, возвращающая позицию игрока
	void setLocation(int loc); //процедура, устанавливающая позицию игрока

	void quitGame(); //выход из игры
	bool checkQuit();//проверка выхода из игры

	void ownField(int); //процедура покупки поля
	int sizeOfVect(); //функция, возвращающая размер вектора купленных полей
	int getNumOfField(int); //получения номера поля по индексу в векторе

	void mortgageField(int); //закладывание поля
	int getSizeOfMortV(); //функция, возвращающая размер вектора заложенных полей
	int getNumOfMortgage(int); //получения номера заложенного поля по индексу в векторе

	vector <string> getOwnedColor(); //фунция, возвращающая вектор купленных цветов
	void setOwnedColor(string color); //покупка определенного цвета
	int getNumOfColor(string color); //определение, сколько полей данного цвета купил игрок
	void removeMortgage(int); //удаление из залога
	void removeInOwn(int); //игрок больше не владеет данным полем
	void setOwnedRailway(); //покупка поля ж/д станции
	void setMortgageRailway(int); //закладывание поля ж/д станции
	int getOwnedRailway(); //получение количества купленных полей жд станции

	void setOwnedUtility(); //покупка поля коммунальных предприятий
	void setMortgageUtility(int); //закладывание коммунального предприятия 
	int getOwnedUtility();// получение количества купленных коммунальных предприятий

	void RollDice(); //бросок кубиков
	int getRoll(); //получение значения с выброшенных кубиков

	bool checkChanges(); //проверка на изменение позиции игрока(нужна для полей Шанс и Общественная казна)
	void setChanges(bool change); //установление изменения позиции игрока в ходе попадания на поле Шанс или Общественная казна

	~Player(); //деструктор
};
int Random(); //функция рандома от 1 до 6
#endif
