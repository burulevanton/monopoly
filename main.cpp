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
<<<<<<< HEAD
=======
	cout << "Ещё?" << endl;
	cout << "1)Да" << endl;
	cout << "2) Нет" << endl;
	int answer;
	cin >> answer;
	
	while (answer == 1) {
		delete(monopoly);
		Game * monopoly = new Game();
		monopoly->playRound();
		cout << "Ещё?" << endl;
		cout << "1)Да" << endl;
		cout << "2) Нет" << endl;
		int answer;
		cin >> answer;
		}
>>>>>>> dev
	system("pause");
	delete(monopoly);
	return 0;
}
