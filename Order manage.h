#pragma once
#pragma once
#include<iostream>
#include "Orderin.h"
#include "OrderOut.h"
#include <vector> 
#include<map>
using namespace std;

//����Ա
class OrderManage
{
public:
	void DeleteoneOrder();//ɾ��һ������
	vector<Order> vOrder;
	OrderManage() {}; //���캯��
	void UpdateOrder();//���¶���
	void displayOrder();//��ʾ����
	void SeekOrder();//���Ҷ���
	void DeleteAllOrder();//ɾ��ȫ������
	//�洢��ʳ��������Ϣ
	map<string, vector<Orderin>> mOI;
	vector<Orderin> vOI;
	//�洢������������Ϣ
	map<string, vector<OrderOut>> mOO;
	vector<OrderOut> vOO;
	//�洢��ʱ�Ĵ��ļ��ж������Ϣ
	vector<string> vinfo;
	~OrderManage() {}; //���캯��
};