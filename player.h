#ifndef PLAYER_H 
#define PLAYER_H
#include <iostream>
#include<cstdlib>
#include <windows.h>
using namespace std;
void setPlayersName();
void playInDice();
static int dice(){
	return  rand() % 6 + 1;
}
class player{
	private :
		int pos;
		int money;
		int numberOfFields;
		string nameOfPlayer;
	public :
		player(int money){
			pos=1;
			setMoney(money);
			numberOfFields=0;
		}
		void setMoney(int n)
		{
			money = money+n;
		}
		int getMoney()
		{
			return money;
		}
		void setPos(int n)
		{   if(pos+n>=40){
				pos=pos+n-40;
				setMoney(200);
			}
			else 
			pos = pos+n;
		}
		int getPos()
		{
			return pos;
		}
		void setNumberOfFields()
		{
			numberOfFields++;
		}
		int getNumberOfFields()
		{
			return numberOfFields;
		}
		void setNameOfPlayer(int n)
		{
			cout<<"Игрок №"<<n<<" введите своё имя: ";
			cin>>nameOfPlayer;
		}
		string getNameOfPlayer()
		{
			return nameOfPlayer;
		}
		void throwDice(){
			int d1=dice();
			int d2=dice();
			cout<<"Игрок "<<getNameOfPlayer()<<" бросает кубики"<<endl;
			cout<<"Игрок "<<getNameOfPlayer()<<" выбрасывает "<<d1<<" и "<<d2<<endl;
			setPos(d1+d2);
		}
		void activityInField(int num);
	};
	namespace players{
	player player1(1500),player2(1500),player3(1500),player4(1500);
}
#endif
