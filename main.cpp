#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>
#include "game.h"

using namespace std;
int main(){
	srand(time(NULL));
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	Game * monopoly = new Game();
	monopoly->playRound();
	system("pause");
	delete(monopoly);
	return 0;
}
