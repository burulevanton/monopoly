#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>
#include "field.h"
#include "player.h"
using namespace std;
int main(){
	srand(time(NULL));
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	cout<<"����� ���������� � ���� ���������"<<endl;
	setPlayersName();
	playInDice();
	return 0;
}
