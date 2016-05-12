#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>
#include "field.h"
using namespace std;
int dice(){
	return  rand() % 6 + 1;
}
class player{
	private :
		int pos=1;
		int money=1500;
		int numberOfFields=0;
		string nameOfPlayer;
	public :
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
		void activityInField(){
			field field1;
field1.setNameOfOwner("1");
field1.setName("Вперёд");
field field2;
field2.setNameOfOwner("0");
field2.setPriceOfField(60);
field2.setPriceOfRent(2);
field2.setName("ул.Житная");
field field3;
field3.setNameOfOwner("1");
field3.setName("Общественная казна");
field field4;
field4.setName("ул.Нагатинская");
field4.setNameOfOwner("0");
field4.setPriceOfField(60);
field4.setPriceOfRent(4);
field field5;
field5.setName("Подоходный налог");
field5.setNameOfOwner("1");
field5.setPriceOfField(200);
field field6;
field6.setName("Римская железная дорога");
field6.setNameOfOwner("0");
field6.setPriceOfField(200);
field6.setPriceOfRent(25);
field field7;
field7.setName("Варшавское шоссе");
field7.setNameOfOwner("0");
field7.setPriceOfField(100);
field7.setPriceOfRent(6);
field field8;
field8.setName("Шанс");
field8.setNameOfOwner("1");
field field9;
field9.setName("ул.Огарева");
field9.setNameOfOwner("0");
field9.setPriceOfField(100);
field9.setPriceOfRent(6);
field field10;
field10.setName("ул.Первая Парковая");
field10.setNameOfOwner("0");
field10.setPriceOfField(120);
field10.setPriceOfRent(8);
field field11;
field11.setName("Простое посещение тюрьмы");
field11.setNameOfOwner("1");
field field12;
field12.setName("ул.Полянка");
field12.setNameOfOwner("0");
field12.setPriceOfField(140);
field12.setPriceOfRent(10);
field field13;
field13.setName("Электростанция");
field13.setNameOfOwner("0");
field13.setPriceOfField(150);
field field14;
field14.setName("ул.Сретенка");
field14.setNameOfOwner("0");
field14.setPriceOfField(140);
field14.setPriceOfRent(10);
field field15;
field15.setName("Ростовская набережная");
field15.setNameOfOwner("0");
field15.setPriceOfField(160);
field15.setPriceOfRent(12);
field field16;
field16.setName("Курская железная дорога");
field16.setNameOfOwner("0");
field16.setPriceOfField(200);
field16.setPriceOfRent(25);
field field17;
field17.setName("Рязанский проспект");
field17.setNameOfOwner("0");
field17.setPriceOfField(180);
field17.setPriceOfRent(14);
field field18;
field18.setNameOfOwner("1");
field18.setName("Общественная казна");
field field19;
field19.setName("ул.Вавилова");
field19.setNameOfOwner("0");
field19.setPriceOfField(180);
field19.setPriceOfRent(14);
field field20;
field20.setName("Рублевское шоссе");
field20.setNameOfOwner("0");
field20.setPriceOfField(200);
field20.setPriceOfRent(16);
field field21;
field21.setName("Бесплатная стоянка");
field21.setNameOfOwner("1");
field field22;
field22.setName("ул.Тверская");
field22.setNameOfOwner("0");
field22.setPriceOfField(220);
field22.setPriceOfRent(18);
field field23;
field23.setName("Шанс");
field23.setNameOfOwner("0");
field field24;
field24.setName("ул.Пушкинская");
field24.setNameOfOwner("0");
field24.setPriceOfField(220);
field24.setPriceOfRent(18);
field field25;
field25.setName("Площадь Маяковского");
field25.setNameOfOwner("0");
field25.setPriceOfField(240);
field25.setPriceOfRent(20);
field field26;
field26.setName("Казанская железная дорога");
field26.setNameOfOwner("0");
field26.setPriceOfField(200);
field26.setPriceOfRent(25);
field field27;
field27.setName("ул.Грузинский Вал");
field27.setNameOfOwner("0");
field27.setPriceOfField(260);
field27.setPriceOfRent(22);
field field28;
field28.setName("ул.Чайковского");
field28.setNameOfOwner("0");
field28.setPriceOfField(260);
field28.setPriceOfRent(22);
field field29;
field29.setName("Водопровод");
field29.setNameOfOwner("0");
field29.setPriceOfField(150);
field field30;
field30.setName("Смоленская площадь");
field30.setNameOfOwner("0");
field30.setPriceOfField(280);
field30.setPriceOfRent(24);
field field31;
field31.setName("Отправляйтесь в тюрьму");
field31.setNameOfOwner("1");
field field32;
field32.setName("ул.Щусева");
field32.setNameOfOwner("0");
field32.setPriceOfField(300);
field32.setPriceOfRent(26);
field field33;
field33.setName("Гоголевский бульвар");
field33.setNameOfOwner("0");
field33.setPriceOfField(300);
field33.setPriceOfRent(26);
field field34;
field34.setName("Общественная казна");
field34.setNameOfOwner("1");
field field35;
field35.setName("Кутузовский проспект");
field35.setNameOfOwner("0");
field35.setPriceOfField(320);
field35.setPriceOfRent(28);
field field36;
field36.setName("Ленинградская железная дорога");
field36.setNameOfOwner("0");
field36.setPriceOfField(200);
field36.setPriceOfRent(25);
field field37;
field37.setName("Шанс");
field37.setNameOfOwner("1");
field field38;
field38.setName("ул.Малая Бронная");
field38.setNameOfOwner("0");
field38.setPriceOfField(350);
field38.setPriceOfRent(35);
field field39;
field39.setName("Сверхналог");
field39.setNameOfOwner("1");
field39.setPriceOfField(100);
field field40;
field40.setName("ул.Арбат");
field40.setNameOfOwner("0");
field40.setPriceOfField(400);
field40.setPriceOfRent(50);
			switch(pos){
				case 1:cout<<"'"<<field1.getName()<<"'"<<endl; break;
				case 2:	cout<<"'"<<field2.getName()<<"'"<<endl; break;
				case 3: cout<<"'"<<field3.getName()<<"'"<<endl;break;
				case 4: cout<<"'"<<field4.getName()<<"'"<<endl;break;
				case 5: cout<<"'"<<field5.getName()<<"'"<<endl;break;
				case 6: cout<<"'"<<field6.getName()<<"'"<<endl;break;
				case 7: cout<<"'"<<field7.getName()<<"'"<<endl;break;
				case 8: cout<<"'"<<field8.getName()<<"'"<<endl;break;
				case 9: cout<<"'"<<field9.getName()<<"'"<<endl;break;
				case 10: cout<<"'"<<field10.getName()<<"'"<<endl;break;
				case 11: cout<<"'"<<field11.getName()<<"'"<<endl;break;
				case 12: cout<<"'"<<field12.getName()<<"'"<<endl;break;
				case 13: cout<<"'"<<field13.getName()<<"'"<<endl;break;
				case 14: cout<<"'"<<field14.getName()<<"'"<<endl;break;
				case 15: cout<<"'"<<field15.getName()<<"'"<<endl;break;
				case 16: cout<<"'"<<field16.getName()<<"'"<<endl;break;
				case 17: cout<<"'"<<field17.getName()<<"'"<<endl;break;
				case 18: cout<<"'"<<field18.getName()<<"'"<<endl;break;
				case 19: cout<<"'"<<field19.getName()<<"'"<<endl;break;
				case 20: cout<<"'"<<field20.getName()<<"'"<<endl;break;
				case 21: cout<<"'"<<field21.getName()<<"'"<<endl;break;
				case 22: cout<<"'"<<field22.getName()<<"'"<<endl;break;
				case 23: cout<<"'"<<field23.getName()<<"'"<<endl;break;
				case 24: cout<<"'"<<field24.getName()<<"'"<<endl;break;
				case 25: cout<<"'"<<field25.getName()<<"'"<<endl;break;
				case 26: cout<<"'"<<field26.getName()<<"'"<<endl;break;
				case 27: cout<<"'"<<field27.getName()<<"'"<<endl;break;
				case 28: cout<<"'"<<field28.getName()<<"'"<<endl;break;
				case 29: cout<<"'"<<field29.getName()<<"'"<<endl;break;
				case 30: cout<<"'"<<field30.getName()<<"'"<<endl;break;
				case 31: cout<<"'"<<field31.getName()<<"'"<<endl;break;
				case 32: cout<<"'"<<field32.getName()<<"'"<<endl;break;
				case 33: cout<<"'"<<field33.getName()<<"'"<<endl;break;
				case 34: cout<<"'"<<field34.getName()<<"'"<<endl;break;
				case 35: cout<<"'"<<field35.getName()<<"'"<<endl;break;
				case 36: cout<<"'"<<field36.getName()<<"'"<<endl;break;
				case 37: cout<<"'"<<field37.getName()<<"'"<<endl;break;
				case 38: cout<<"'"<<field38.getName()<<"'"<<endl;break;
				case 39: cout<<"'"<<field39.getName()<<"'"<<endl;break;
				case 40: cout<<"'"<<field40.getName()<<"'"<<endl;
			}
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
				cout<<"Игрок "<<player1.getNameOfPlayer()<<" попадает на поле ";
				player1.activityInField();
			}
			if(numberOfPlayer==2){
				player2.throwDice();
				cout<<"Игрок "<<player2.getNameOfPlayer()<<" попадает на поле ";
				player2.activityInField();
			}
			if(numberOfPlayer==3){
				player3.throwDice();
				cout<<"Игрок "<<player3.getNameOfPlayer()<<" попадает на поле ";
				player3.activityInField();
			}
			if(numberOfPlayer==4){
				player4.throwDice();
				cout<<"Игрок "<<player4.getNameOfPlayer()<<" попадает на поле ";
				player4.activityInField();
			}
			numberOfPlayer++;
			if(numberOfPlayer==5)
			numberOfPlayer=1;
		}
	}
	return 0;
}
