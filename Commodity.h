//��Ʒ�ࣨ���ࣩ
#pragma once
#include<iostream>
#include<string>
using namespace std;

struct product
{
	//string No[20];//���
	//string Name[20];//����
	//int prise[20];//�۸�
	//int number[20];//����
	string 	No[20] = { "No 1","No 2","No 3","No 4","No 5","No 6","No 7","No 8","No 9","No 10","No 11","No 12" };
	string Name[20] = { "��ʽ����","Ĩ������","��������","��Ҭ����","���ನ���̲�","�����̲�","����ˮ��Ͱ","��ݮ���","�ʰ������","����ǧ�㵰��","��ݮ����","��������" };
	int prise[20] = { 10,13,15,17,20,12,25,19,21,18,30,16 };
	int number[20] = { 30,40,50,60,35,45,55,65,75,80,25,27 };
};


class Commodity
{
public:
	Commodity();
	~Commodity();
	//string No;//���
	//string name;//���ȵ����֣����磺��������ʽ��
	//string prise;//�۸�
	//string number;//����
	int raw_coffee, suger, ice, milk, cup;//ԭ���ϵ�����
	product s;
private:
};

