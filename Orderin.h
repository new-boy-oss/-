#pragma once
#include<iostream>
#include "Order.h"
#include <vector> 
#include <iomanip>
#include<string>
using namespace std;
//��ʳ����
class Orderin :virtual public Order
{
public:
	vector<Orderin> vOrderInInfo;
	Orderin() {};
	Orderin(string b, int c, int d, string e) :Order(b, c, d, e)
	{
		srand((int)(time(NULL)));
		int n = rand() % 9999 + 1000;
		std::string str = std::to_string(n);
		totalprice = c;
		No = str + "i";
		calculation();
	}
	virtual void print();//��ӡ��ʳ������һ��Ļ
	void  printtxt();//��ӡ��ʳÿ�ն��������뵽һ������������ļ�����
	void AddOutInfo();//��Ӷ���
	virtual int calculation();
	~Orderin() {};
private:
};