#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//define - ����������
//definition - ����������� 


void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;

	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}

	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // TEMPERATURE 

#ifdef TAGRET
	int n;
	cout << "������� �����:"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "������� �����:"; cin >> n;

	}
	else 
	{
		cout << "�� ������������" << endl;

	}
#endif //TARGET

#if defined CALC_1
	//���� ���������� CALC_1, �� ������������� ��� �� ��������� #endif ����� ����� �����������
	double a, b; //�����, �������� � ����������
	char s; //sign - ���� ��������
	cout << "������� ������� �������������� ���������:";
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
#endif //����� ����� 
}