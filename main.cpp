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
<<<<<<< HEAD
=======
	cout << "���?" << endl;
	cout << "1)��" << endl;
	cout << "2) ���" << endl;
	int answer;
	cin >> answer;
	
	while (answer == 1) {
		delete(monopoly);
		Game * monopoly = new Game();
		monopoly->playRound();
		cout << "���?" << endl;
		cout << "1)��" << endl;
		cout << "2) ���" << endl;
		int answer;
		cin >> answer;
		}
>>>>>>> dev
	system("pause");
	delete(monopoly);
	return 0;
}
