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
	//string No;//���
	//string name;//���ȵ����֣����磺��������ʽ��
	//string prise;//�۸�
	//string number;//����
	int raw_coffee, suger, ice, milk, cup;//ԭ���ϵ�����
	struct product
	{
		string No;//���
		string Name;//����
		int prise;//�۸�
		int number;//����
	}pro[20] = {
		{"No 1","��ʽ����",10,30},
		{"No 2","��������",13,30},
		{"No 3","Ĩ������",15,30} ,
		{"No 4","��Ҭ����",17,40},
		{"No 5","���ನ���̲�",20,40},
		{"No 6","�����̲�",15,40},
		{"No 7","����ˮ��Ͱ",25,45},
		{"No 8","��ݮ���",19,45},
		{"No 9","�ʰ������",19,45},
		{"No 10","����ǧ�㵰��",10,30},
		{"No 11","��ݮ����",30,30},
		{"No 12","��������",16,30}
	};


	
	
private:	
};

