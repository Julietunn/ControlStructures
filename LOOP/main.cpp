#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2

#define Escape 27

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef WHILE_1
	int n; //���������� ��������
	int i = 0; // ������� �����
	cout << "������� ���������� ��������:"; cin >> n;
	while (i < n)
	{
		cout << i << "Hello world\n";
		i++; //��� �����
	}
#endif 

#ifdef WHILE_2
	int n; // ���������� ��������
	cout << "���������� ��������:"; cin >> n;
	while (n)
	{
		cout << n << "\t";
		n--;
	}
	cout << endl;
#endif

	char key; //������ ��� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
