#pragma once
#include<iostream>
#include "Order.h"
#include <vector> 
using namespace std;
class OrderOut :virtual public Order//����
{
public:
	vector<OrderOut> vOrderOutInfo;
	vector <string>vinfo;
	OrderOut() {};
	OrderOut(string a, string b, double c, int d, string e, string f, string g) :Order(a, b, c, d, e, f, g)
	{
		totalprice = c;
		ExtraTips = 3;
		calculation();
	}
	void add()
	{
		cout << "���������Ͳ͵ص�" << endl;
		cin >> m_OrderPlace;
		cout << "���������Ͳ�ʱ��" << endl;
		cin >> m_Ordertime;
		cout << "�����������ֻ���" << endl;
		cin >> m_CustomerPhone;
	}
	void AddOutInfo();//��Ӷ���
	virtual void print();//��ӡ��������Ļ��
	void printtet();//��ӡ������txt
	virtual int calculation();//���Ѿ��ڹ��캯�����ù�����������3Ԫ
	~OrderOut() {};
	string m_Ordertime;
	string m_OrderPlace;//�Ͳ͵ص�
	string m_CustomerPhone;//�ͻ��ֻ���
	int ExtraTips;//���������
};