#include<iostream>
#include<conio.h>
using namespace std;

//#define FACTORIAL
//#define DEGREE
//#define ANALYS_1
//#define ANALYS_2

#define ASCII // �� ������

//#define FIBONACHI_1 
//#define FIBONACHI_2

//#define SIMPLE_NUMBERS //������ ������

void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL

	int a; //�������� �����
	int res = 1; //���������
	int i;

	cout << "������� �����:"; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		res *= i;
	}
	cout << "���������" << a << "�����" << res << endl;
#endif 

#ifdef DEGREE
	int number; //���������
	int degree; //�������
	int res = 1; //���������

	cout << "������� ��������� � �������:"; cin >> number >> degree;
	for (int i = 0; i < degree; i++)
	{
		res *= number;
	}

	cout << number << "� �������" << degree << "=" << res;
#endif 

#ifdef ANALYS_1
	int n;
	int f = 1;
	cout << "������� �����:"; cin >> n;
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
	cout << "������� ��������� �������:"; cin >> a;
	cout << "������� ���������� �������:"; cin >> n;
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
int limit; //�� ������ ����� ������� ��� ��������� 
int a1 = 0; // ������ ����� ���������
int a2 = 1;//������ ����� ���������
int an; //����������� �����
cout << "������� ������ ���� ���������:"; cin >> limit;
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
cout << "������� ���������� ����� ���� ���������:"; cin >> limit;
int a1 = 0;
int a2 = 1;
int an;

for (int i = 0; i < limit - 2; i++) //limit - 2, ������ ��� ������ ��� ����� ��� �������� �� ����� (0,1)
{
	an = a1 + a2;
	cout << an << " ";
	a1 = a2;
	a2 = an;
}
#endif

#ifdef SIMPLE_NUMBERS
int limit;
cout << "������� ������ ������� �����:"; cin >> limit;
int a1 = 1;



for (int i = 0; i < limit, a1 < limit - 1; i++)
{
	a1 += 2;
	cout << a1 << endl;
}

#endif

}}