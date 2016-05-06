#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int dice(){
	return  rand() % 6 + 1;
}
int main(){
	setlocale(LC_ALL,"Russian");
	srand(time(NULL));
	int *arr = new int[41]; 
	int *n= new int();
	int ind=1,dice1,dice2,sum=1;
	while(ind==1)
	{
		cout<<"Бросить кубики заново?: "<<endl;
		cout<<"1)Да"<<endl;
		cout<<"2)Нет"<<endl;
		cin>>ind;
		if(ind==1){
			dice1=dice();
			dice2=dice();
			cout<<dice1<<" и "<<dice2<<endl;
			sum=sum+dice1+dice2;
			if(sum>=41)
			{	sum=sum-41;
				sum=1;}
			cout<<"Вы сейчас находитесь на "<<sum<<" ячейке"<<endl;
		}
	}
	return 0;
}
