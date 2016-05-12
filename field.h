#ifndef FIELD_H 
#define FIELD_H
#include<iostream>
#include<cstring>
using namespace std;
class field{ 
private: 
string nameOfOwner; 
string name;
int priceOfField; 
int priceOfRent;
int position;
public:
	string getNameOfOwner()
	{
		return nameOfOwner;
	}
	void setNameOfOwner(string s){
		nameOfOwner=s;
	}
	int getPriceOfField()
	{
		return priceOfField;
	}
	void setPriceOfField(int price)
	{
		priceOfField=price;
	}
	void setName(string s)
	{
		name = s;
	}
	string getName(){
		return name;
	}
	int getPriceOfRent(){
		return priceOfRent;
	}
	void setPriceOfRent(int price){
		priceOfRent=price;
	}
	int checkForOwner(string s)
	{
		if(nameOfOwner=="0")
		return 1;
		if(nameOfOwner=="1")
		return 2;
		if(nameOfOwner==s)
		return 3;
		if(nameOfOwner!=s)
		return 4;
	}
};
#endif
