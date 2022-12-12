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
	int n; //количество итераций
	int i = 0; // счетчик цикла
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << i << "Hello world\n";
		i++; //Шаг цикла
	}
#endif 

#ifdef WHILE_2
	int n; // количество итераций
	cout << "Количество итераций:"; cin >> n;
	while (n)
	{
		cout << n << "\t";
		n--;
	}
	cout << endl;
#endif

	char key; //хранит код клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
