//��Ʒ�ࣨ���ࣩ
#pragma once
#include"Raw_material.h"
#include<iostream>
#include<string>
using namespace std;
class Commodity:public Raw_material
{
public:
	bool ColdOrHot();//����
	void pay();//֧�� (֧���� ΢��) ͼƬ�տ���
	void show_product();//��ʾ��Ʒ
	Commodity();
	~Commodity();
private:
	string No;//���
	string name;//���ȵ����֣����磺��������ʽ��
	double prise;
	int number;//����
};
