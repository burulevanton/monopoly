#include "field.h"
#include "player.h"
int numberOfPlayer=1;
int ind=1;
void setPlayersName(){
	player1.setNameOfPlayer(1);
	player2.setNameOfPlayer(2);
	player3.setNameOfPlayer(3);
	player4.setNameOfPlayer(4);
}
void playInDice(){
	while(ind==1)
	{	cout<<"������� ������?: "<<endl;
		cout<<"1)��"<<endl;
		cout<<"2)���"<<endl;
		cin>>ind;
		if(ind==1){
			if(numberOfPlayer==1){
				player1.throwDice();
				cout<<"����� "<<player1.getNameOfPlayer()<<" �������� �� ���� ";
				player1.activityInField(1);
			}
			if(numberOfPlayer==2){
				player2.throwDice();
				cout<<"����� "<<player2.getNameOfPlayer()<<" �������� �� ���� ";
				player2.activityInField(2);
			}
			if(numberOfPlayer==3){
				player3.throwDice();
				cout<<"����� "<<player3.getNameOfPlayer()<<" �������� �� ���� ";
				player3.activityInField(3);
			}
			if(numberOfPlayer==4){
				player4.throwDice();
				cout<<"����� "<<player4.getNameOfPlayer()<<" �������� �� ���� ";
				player4.activityInField(4);
			}
			numberOfPlayer++;
			if(numberOfPlayer==5)
			numberOfPlayer=1;
		}
	}
}
