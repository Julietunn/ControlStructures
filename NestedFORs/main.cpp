#include<iostream>
//#include<Windows.h>
#include<conio.h>

using namespace std;


//#define EXAMPLE

//#define CLOCK

//#define PIFAGOR

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS // не доделала
//#define PLUS_MINUS //есть вопросы 
//#define CHESSBOARD // мое решение 

void main()
{
	setlocale(LC_ALL, "");

#ifdef EXAMPLE
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i << "\t" << j << endl;
		}
	}
#endif

#ifdef CLOCK
	for (int hh = 0; hh < 24; hh++) //выводим часы, 24 часа
	{
		for (int mm = 0; mm < 60; mm++) //выводим минуты, 60
		{
			for (int ss = 0; ss < 60; ss++) //выводим секунды, 60
			{
				system("CLS");
				cout << hh << ":" << mm << ":" << ss << endl;
				Sleep(100);
			}
		}
	}
#endif

#ifdef PIFAGOR

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}

#endif

#ifdef SQUARE
	int size;
	cout << "¬ведите размер фигуры:"; cin >> size;

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}

#endif

#ifdef TRIANGLE_1
int size;
cout << "¬ведите размеры фигуры:"; cin >> size;
for (int i = 0; i < size; i++)
{
	for (int j = 0; j <= i; j++)
	{
		cout << "* " << " ";

	}
	cout << endl;
}
#endif

#ifdef TRIANGLE_2
int size;
cout << "¬ведите размеры фигуры:"; cin >> size;
for (int i = 0; i < size; i++)
{
	for (int j = i; j <= size; j++)
	{
		cout << "* " << " ";

	}
	cout << endl;
}
#endif

#ifdef TRIANGLE_3
int size;
cout << "¬ведите размеры фигуры:"; cin >> size;
for (int i = 0; i < size; i++)
{
	for (int j = 0; j < i; j++)
	{
		cout << " ";
	}

	for (int j = i; j < size; j++)
	{
		cout << "*";
	}
	cout << endl;
}
#endif

#ifdef TRIANGLE_4
int size;
cout << "¬ведите размер фигуры:"; cin >> size;
for (int i = 0; i < size; i++)
{
	for (int j = i; j < size; j++)
	{
		cout << " ";
	}

	for (int j = 0; j <= i; j++)
	{
		cout << "*";
	}
	cout << endl;
}
#endif

#ifdef RHOMBUS
int size;
cout << "¬ведите размер фигуры:"; cin >> size;
for (int i = 0; i < size; i++)
{
	for (int j = i; j < size; j++)
	{
		cout << " ";
	}
	cout << "/";

	for (int j = 0; j < i * 2; j++)
	{
		cout << " ";
	}
	cout << "\\";

	cout << endl;
}

#endif

#ifdef PLUS_MINUS
int size;
cout << "¬ведите размер фигуры:"; cin >> size;
for (int i = 0; i < size; i++)
{
	for (int j = 0; j < size; j++)
	{
		if ((i + j) % 2 == 0)
		{
			cout << "+";
		}
		else
		{
			cout << "-";
		}
	}
	cout << endl;
}
#endif

#ifdef CHESSBOARD
//setlocale(LC_ALL, ".1251");
setlocale(LC_ALL, ".866");

int size;
cout << "Enter size:"; cin >> size;
int black = _getch(); cout << "Enter black square code:"; cin >> black;
int white = _getch(); cout << "Enter white square code:"; cin >> white;

for (int i = 0; i < size; i++)
{
	for (int j = 0; j < size; j++)
	{
		if ((i + j) % 2 == 0)
		{
			cout << (char)black;
		}
		else
		{
			cout << (char)white;
		}
		// ((i+j)%2==0) ? cout << (char)black : cout << (char)white; //попробовала с тернарным оператором
	}
	cout << endl;
}
#endif




}




