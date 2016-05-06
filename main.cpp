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
				cout<<"����� "<<player1.getNameOfPlayer()<<" �� "<<player1.getPos()<<" ����"<<endl;
			}
			if(numberOfPlayer==2){
				player2.throwDice();
				cout<<"����� "<<player2.getNameOfPlayer()<<" �� "<<player2.getPos()<<" ����"<<endl;
			}
			if(numberOfPlayer==3){
				player3.throwDice();
				cout<<"����� "<<player3.getNameOfPlayer()<<" �� "<<player3.getPos()<<" ����"<<endl;
			}
			if(numberOfPlayer==4){
				player4.throwDice();
				cout<<"����� "<<player4.getNameOfPlayer()<<" �� "<<player4.getPos()<<" ����"<<endl;
			}
			numberOfPlayer++;
			if(numberOfPlayer==5)
			numberOfPlayer=1;
		}
	}
	return 0;
}
