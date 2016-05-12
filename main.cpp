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
			cout<<"����� �"<<n<<" ������� ��� ���: ";
			cin>>nameOfPlayer;
		}
		string getNameOfPlayer()
		{
			return nameOfPlayer;
		}
		void throwDice(){
			int d1=dice();
			int d2=dice();
			cout<<"����� "<<getNameOfPlayer()<<" ������� ������"<<endl;
			cout<<"����� "<<getNameOfPlayer()<<" ����������� "<<d1<<" � "<<d2<<endl;
			setPos(d1+d2);
		}
		void activityInField(){
			field field1;
field1.setNameOfOwner("1");
field1.setName("�����");
field field2;
field2.setNameOfOwner("0");
field2.setPriceOfField(60);
field2.setPriceOfRent(2);
field2.setName("��.������");
field field3;
field3.setNameOfOwner("1");
field3.setName("������������ �����");
field field4;
field4.setName("��.�����������");
field4.setNameOfOwner("0");
field4.setPriceOfField(60);
field4.setPriceOfRent(4);
field field5;
field5.setName("���������� �����");
field5.setNameOfOwner("1");
field5.setPriceOfField(200);
field field6;
field6.setName("������� �������� ������");
field6.setNameOfOwner("0");
field6.setPriceOfField(200);
field6.setPriceOfRent(25);
field field7;
field7.setName("���������� �����");
field7.setNameOfOwner("0");
field7.setPriceOfField(100);
field7.setPriceOfRent(6);
field field8;
field8.setName("����");
field8.setNameOfOwner("1");
field field9;
field9.setName("��.�������");
field9.setNameOfOwner("0");
field9.setPriceOfField(100);
field9.setPriceOfRent(6);
field field10;
field10.setName("��.������ ��������");
field10.setNameOfOwner("0");
field10.setPriceOfField(120);
field10.setPriceOfRent(8);
field field11;
field11.setName("������� ��������� ������");
field11.setNameOfOwner("1");
field field12;
field12.setName("��.�������");
field12.setNameOfOwner("0");
field12.setPriceOfField(140);
field12.setPriceOfRent(10);
field field13;
field13.setName("��������������");
field13.setNameOfOwner("0");
field13.setPriceOfField(150);
field field14;
field14.setName("��.��������");
field14.setNameOfOwner("0");
field14.setPriceOfField(140);
field14.setPriceOfRent(10);
field field15;
field15.setName("���������� ����������");
field15.setNameOfOwner("0");
field15.setPriceOfField(160);
field15.setPriceOfRent(12);
field field16;
field16.setName("������� �������� ������");
field16.setNameOfOwner("0");
field16.setPriceOfField(200);
field16.setPriceOfRent(25);
field field17;
field17.setName("��������� ��������");
field17.setNameOfOwner("0");
field17.setPriceOfField(180);
field17.setPriceOfRent(14);
field field18;
field18.setNameOfOwner("1");
field18.setName("������������ �����");
field field19;
field19.setName("��.��������");
field19.setNameOfOwner("0");
field19.setPriceOfField(180);
field19.setPriceOfRent(14);
field field20;
field20.setName("���������� �����");
field20.setNameOfOwner("0");
field20.setPriceOfField(200);
field20.setPriceOfRent(16);
field field21;
field21.setName("���������� �������");
field21.setNameOfOwner("1");
field field22;
field22.setName("��.��������");
field22.setNameOfOwner("0");
field22.setPriceOfField(220);
field22.setPriceOfRent(18);
field field23;
field23.setName("����");
field23.setNameOfOwner("0");
field field24;
field24.setName("��.����������");
field24.setNameOfOwner("0");
field24.setPriceOfField(220);
field24.setPriceOfRent(18);
field field25;
field25.setName("������� �����������");
field25.setNameOfOwner("0");
field25.setPriceOfField(240);
field25.setPriceOfRent(20);
field field26;
field26.setName("��������� �������� ������");
field26.setNameOfOwner("0");
field26.setPriceOfField(200);
field26.setPriceOfRent(25);
field field27;
field27.setName("��.���������� ���");
field27.setNameOfOwner("0");
field27.setPriceOfField(260);
field27.setPriceOfRent(22);
field field28;
field28.setName("��.�����������");
field28.setNameOfOwner("0");
field28.setPriceOfField(260);
field28.setPriceOfRent(22);
field field29;
field29.setName("����������");
field29.setNameOfOwner("0");
field29.setPriceOfField(150);
field field30;
field30.setName("���������� �������");
field30.setNameOfOwner("0");
field30.setPriceOfField(280);
field30.setPriceOfRent(24);
field field31;
field31.setName("������������� � ������");
field31.setNameOfOwner("1");
field field32;
field32.setName("��.������");
field32.setNameOfOwner("0");
field32.setPriceOfField(300);
field32.setPriceOfRent(26);
field field33;
field33.setName("����������� �������");
field33.setNameOfOwner("0");
field33.setPriceOfField(300);
field33.setPriceOfRent(26);
field field34;
field34.setName("������������ �����");
field34.setNameOfOwner("1");
field field35;
field35.setName("����������� ��������");
field35.setNameOfOwner("0");
field35.setPriceOfField(320);
field35.setPriceOfRent(28);
field field36;
field36.setName("������������� �������� ������");
field36.setNameOfOwner("0");
field36.setPriceOfField(200);
field36.setPriceOfRent(25);
field field37;
field37.setName("����");
field37.setNameOfOwner("1");
field field38;
field38.setName("��.����� �������");
field38.setNameOfOwner("0");
field38.setPriceOfField(350);
field38.setPriceOfRent(35);
field field39;
field39.setName("����������");
field39.setNameOfOwner("1");
field39.setPriceOfField(100);
field field40;
field40.setName("��.�����");
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
	
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	srand(time(NULL));
	cout<<"����� ���������� � ���� ���������"<<endl;
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
	{	cout<<"������� ������?: "<<endl;
		cout<<"1)��"<<endl;
		cout<<"2)���"<<endl;
		cin>>ind;
		if(ind==1){
			if(numberOfPlayer==1){
				player1.throwDice();
				cout<<"����� "<<player1.getNameOfPlayer()<<" �������� �� ���� ";
				player1.activityInField();
			}
			if(numberOfPlayer==2){
				player2.throwDice();
				cout<<"����� "<<player2.getNameOfPlayer()<<" �������� �� ���� ";
				player2.activityInField();
			}
			if(numberOfPlayer==3){
				player3.throwDice();
				cout<<"����� "<<player3.getNameOfPlayer()<<" �������� �� ���� ";
				player3.activityInField();
			}
			if(numberOfPlayer==4){
				player4.throwDice();
				cout<<"����� "<<player4.getNameOfPlayer()<<" �������� �� ���� ";
				player4.activityInField();
			}
			numberOfPlayer++;
			if(numberOfPlayer==5)
			numberOfPlayer=1;
		}
	}
	return 0;
}
