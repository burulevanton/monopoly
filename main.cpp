#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include <windows.h>

using namespace std;
int main(){
	srand(time(NULL));
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	cout<<"����� ���������� � ���� ���������"<<endl;
	system("pause");
	return 0;
}
