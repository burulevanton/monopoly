#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>

using namespace std;
int main(){
	srand(time(NULL));
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	cout<<"ƒќЅ–ќ ѕќ∆јЋќ¬ј“№ ¬ »√–” ћќЌќѕќЋ»я"<<endl;
	system("pause");
	return 0;
}
