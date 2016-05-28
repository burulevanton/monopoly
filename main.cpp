#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>
#include "game.h"

using namespace std;
int main(){
	srand(time(NULL));
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	Game * monopoly = new Game();
	monopoly->playRound();
	system("pause");
	delete(monopoly);
	return 0;
}
