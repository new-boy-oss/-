#pragma once
#include "Order.h"
#include <vector>
#include <string>
using namespace std;
//����
class OrderOut :virtual public Order
{
public:
	vector<OrderOut> vOrderOutInfo;
	vector <string> vinfo;
	OrderOut() 
	{
		ExtraTips = 0;
	};
	OrderOut(string b, int c, int d, string e) :Order(b, c, d, e)
	{
		srand((int)(time(NULL)));
		int n = rand() % 9999 + 1000;
		std::string str = std::to_string(n);
		totalprice = c;
		No = str + "o";
		totalprice = c;
		ExtraTips = 3;//���ͷ�3��
		calculation();
	}
	void AddOutInfo();//��Ӷ���
	virtual void print();//��ӡ��������Ļ��
	void printtxt();//��ӡ������txt
	virtual int calculation();//���Ѿ��ڹ��캯�����ù�����������3Ԫ
	~OrderOut() {};
private:
	int ExtraTips;//���������
	static int count;
};