#pragma once
#include<iostream>
#include "Order.h"
#include <vector> 
using namespace std;
//��ʳ����
class Orderin :virtual public Order
{
public:
	vector<Orderin> vOrderInInfo;
	Orderin(){};
	Orderin(string a, string b, double c, int d,string e,string f,string g) :Order(a,b,c,d,e,f,g) {
		totalprice = c;
		calculation();
	}
	virtual void print();//��ӡ��ʳ������һ��Ļ
    void  printtxt();//��ӡ��ʳÿ�ն��������뵽һ������������ļ�����
	void AddOutInfo();//��Ӷ���
	virtual int calculation();
	~Orderin() {};
private:
};