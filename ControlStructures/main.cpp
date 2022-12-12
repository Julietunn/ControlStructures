#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//define - определить
//definition - определение 


void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;

	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}

	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // TEMPERATURE 

#ifdef TAGRET
	int n;
	cout << "Введите число:"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Введите число:"; cin >> n;

	}
	else 
	{
		cout << "Вы промахнулись" << endl;

	}
#endif //TARGET

#if defined CALC_1
	//если определено CALC_1, то нижеследующий код до директивы #endif будет виден компилятору
	double a, b; //числа, вводимые с клавиатуры
	char s; //sign - знак операции
	cout << "Введите простое арифметическое выражение:";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;

	if (s == '+')
	{

		cout << a << "+" << b << "=" << a + b << endl;
	}
	if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}

	if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}

	if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}

	else
	{
		cout << "Error:No operation!" << endl;
	}
#endif //конец блока 
}