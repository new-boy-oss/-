#pragma once
#include<iostream>
using namespace std;
class Order
{
public:
	Order() {};
	Order(string a, string b, double c, int d,string e,string f,string g) 
		:No(a), name(b), prise(c), number(d),size(e), ice(f), adda(g) { totalprice = 0; }
	virtual void print() = 0;
	virtual int calculation() = 0;
	~Order() {};
	string No;//���
	string name;//���ȵ����֣����磺��������ʽ��
	double prise;//�۸�
	double number;//����
	double totalprice;//һ������Ǯ
	string size;//��С��
	string ice;//��
	string adda;//����
};
