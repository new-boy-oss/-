//��Ʒ�ࣨ���ࣩ
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Commodity
{
public:
	Commodity();
	~Commodity();
	string No;//���
	string name;//���ȵ����֣����磺��������ʽ��
	double prise;//�۸�
	int raw_coffee, suger, ice, milk, cup;//ԭ���ϵ�����
private:	
};

Commodity::Commodity()
{
	raw_coffee = 1000;
	suger = 1000;
	ice = 1000;
	milk = 1000;
	cup = 1000;
}