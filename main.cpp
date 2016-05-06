#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>
using namespace std;
int dice(){
	return  rand() % 6 + 1;
}
class player{
	private :
		int pos=1;
		int money=0;
		int numberOfFields=0;
		string nameOfPlayer;
	public :
		void setPos(int n)
		{   if(pos+n>=40){
				pos=pos+n-40;
			}
			else 
			pos = pos+n;
		}
		int getPos()
		{
			return pos;
		}
		void setMoney(int n)
		{
			money = money+n;
		}
		int getMoney()
		{
			return money;
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
};
int main(){
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	srand(time(NULL));
	cout<<"ДОБРО ПОЖАЛОВАТЬ В ИГРУ МОНОПОЛИЯ"<<endl;
	int numberOfPlayer=1;
	player player1,player2,player3,player4;
	int *arr = new int[41]; 
	int *n= new int();
	int ind=1;
	player1.setNameOfPlayer(1);
	player2.setNameOfPlayer(2);
	player3.setNameOfPlayer(3);
	player4.setNameOfPlayer(4);
	while(ind==1)
	{	cout<<"Бросить кубики?: "<<endl;
		cout<<"1)Да"<<endl;
		cout<<"2)Нет"<<endl;
		cin>>ind;
		if(ind==1){
			if(numberOfPlayer==1){
				player1.throwDice();
				cout<<"Игрок "<<player1.getNameOfPlayer()<<" на "<<player1.getPos()<<" поле"<<endl;
			}
			if(numberOfPlayer==2){
				player2.throwDice();
				cout<<"Игрок "<<player2.getNameOfPlayer()<<" на "<<player2.getPos()<<" поле"<<endl;
			}
			if(numberOfPlayer==3){
				player3.throwDice();
				cout<<"Игрок "<<player3.getNameOfPlayer()<<" на "<<player3.getPos()<<" поле"<<endl;
			}
			if(numberOfPlayer==4){
				player4.throwDice();
				cout<<"Игрок "<<player4.getNameOfPlayer()<<" на "<<player4.getPos()<<" поле"<<endl;
			}
			numberOfPlayer++;
			if(numberOfPlayer==5)
			numberOfPlayer=1;
		}
	}
	return 0;
}
