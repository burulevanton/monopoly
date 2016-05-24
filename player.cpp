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
	{	cout<<"Бросить кубики?: "<<endl;
		cout<<"1)Да"<<endl;
		cout<<"2)Нет"<<endl;
		cin>>ind;
		if(ind==1){
			if(numberOfPlayer==1){
				player1.throwDice();
				cout<<"Игрок "<<player1.getNameOfPlayer()<<" попадает на поле ";
				player1.activityInField(1);
			}
			if(numberOfPlayer==2){
				player2.throwDice();
				cout<<"Игрок "<<player2.getNameOfPlayer()<<" попадает на поле ";
				player2.activityInField(2);
			}
			if(numberOfPlayer==3){
				player3.throwDice();
				cout<<"Игрок "<<player3.getNameOfPlayer()<<" попадает на поле ";
				player3.activityInField(3);
			}
			if(numberOfPlayer==4){
				player4.throwDice();
				cout<<"Игрок "<<player4.getNameOfPlayer()<<" попадает на поле ";
				player4.activityInField(4);
			}
			numberOfPlayer++;
			if(numberOfPlayer==5)
			numberOfPlayer=1;
		}
	}
}
