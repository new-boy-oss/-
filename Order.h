#pragma once
#include<iostream>
using namespace std;
class Order
{
public:
	Order() 
	{  
		No = '0';
		name = '0';
		prise = 0;
		number = 0;
		totalprice = '0';

	};
	Order(string b, int c, int d, string e)
		: name(b), prise(c), number(d), sizeiceadda(e) {
		No = " 1"; totalprice = '0'; prise = 0; number = 0;
	}
	virtual void print() {};
	virtual int calculation() { return 0; };
	~Order() {};
	string No;//���
	string name;//���ȵ����֣����磺��������ʽ��
	int prise;//�۸�
	int number;//����
	int totalprice;//һ������Ǯ
	string sizeiceadda;//����
};