// Date.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CDate
{
protected:
	int year;
	int month;
	int day;
public:

	CDate();
	CDate(int ty, int tm, int td);
	void display();
	~CDate();
	void setvalue(int a, int b, int c);
};

CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "����Ĭ�Ϲ��캯��" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::display()
{
	cout << "����dispaly" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::~CDate(void)
{
	cout << "������������" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::setvalue(int a, int b, int c)
{
	year = a;
	month = b;
	day = c;
	cout << year << " " << month << " " << day << endl;
}
class CMydate :public CDate
{
public:
	CMydate(int ty, int tm, int td)
	{
		year = ty;
		month = tm;
		day = td;
		cout << year << " " << month << " " << day << endl;
	}
};

int main()
{
	int p, i, u;
	cin >> p >> i >> u;
	CDate kobe;
	kobe.display();
	kobe.setvalue(p, i, u);
	CMydate fanc(1, 2, 3);
	fanc.display();
	return 0;
}

