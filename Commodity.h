//��Ʒ�ࣨ���ࣩ
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Commodity
{
public:
	void show_product();//��ʾ��Ʒ
	int add_product();//�����Ʒ
	void change();//�޸���Ʒ�����ͼ۸�
	Commodity();
	~Commodity();
private:
	string No;//���
	string name;
	double prise;
	int number;//����
};

Commodity::Commodity()
{
}

Commodity::~Commodity()
{
}