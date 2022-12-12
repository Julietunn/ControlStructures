#include<iostream>
#include<conio.h>
using namespace std;

//#define FACTORIAL
//#define DEGREE
//#define ANALYS_1
//#define ANALYS_2

#define ASCII // не решила

//#define FIBONACHI_1 
//#define FIBONACHI_2

//#define SIMPLE_NUMBERS //задать вопрос

void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL

	int a; //вводимое число
	int res = 1; //факториал
	int i;

	cout << "¬ведите число:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		res *= i;
	}
	cout << "‘акториал" << a << "равен" << res << endl;
#endif 

#ifdef DEGREE
	int number; //основание
	int degree; //степень
	int res = 1; //результат

	cout << "¬ведите основание и степень:"; cin >> number >> degree;
	for (int i = 0; i < degree; i++)
	{
		res *= number;
	}

	cout << number << "в степени" << degree << "=" << res;
#endif 

#ifdef ANALYS_1
	int n;
	int f = 1;
	cout << "¬ведите число:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	cout << n << "!=" << f << endl;
#endif 

#ifdef ANALYS_2
	double a;
	int n;
	double N = 1;
	cout << "¬ведите основание степени:"; cin >> a;
	cout << "¬ведите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		cout << (char)i << " ";
	}
	cout << endl;
}
#endif

#ifdef FIBONACHI_1
int limit; //до какого числа выводим р€д ‘ибоначчи 
int a1 = 0; // первое число ‘ибоначчи
int a2 = 1;//второе число ‘ибоначчи
int an; //последующие числа
cout << "¬ведите предел р€да ‘ибоначчи:"; cin >> limit;
cout << "0 1" << " ";
for (int i = 2; i < limit - 3; i++)
{
	an = a1 + a2;
	cout << an << "\t";
	a1 = a2;
	a2 = an;
}
#endif


#ifdef FIBONACHI_2
int limit;
cout << "¬ведите количество чисел р€да ‘ибоначчи:"; cin >> limit;
int a1 = 0;
int a2 = 1;
int an;

for (int i = 0; i < limit - 2; i++) //limit - 2, потому что первые два числа уже выведены на экран (0,1)
{
	an = a1 + a2;
	cout << an << " ";
	a1 = a2;
	a2 = an;
}
#endif

#ifdef SIMPLE_NUMBERS
int limit;
cout << "¬ведите предел простых чисел:"; cin >> limit;
int a1 = 1;



for (int i = 0; i < limit, a1 < limit - 1; i++)
{
	a1 += 2;
	cout << a1 << endl;
}

#endif

}}