//����
#include "Commodity.h"
#pragma once
using namespace std;
class Order:public  Commodity
{
public:
	void show_order();//��ʾ����
	void delete_order();//ɾ������
	void refer();//��ѯ����
	void delivery_method();//����or����
	Order();
	~Order();
private:
	double delivery_time;//����ʱ��
};

