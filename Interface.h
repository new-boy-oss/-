//����
//�鿴���������򣬻�Ա��½����̨����Ա��½
#pragma once
#include <graphics.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include <windows.h>//Sleep()ͷ�ļ�
#include <stdlib.h>
using namespace std;


class Interface
{
public:
	Interface();
	~Interface();
	void pay_show(int a);//֧�� 
	void show_product();//��ʾ��Ʒ
	string getNo();
	string getName();
	int getPrise();
	void inferface();//������
	void inferface2();//��Ʒ������
	void VIP_show();//vipѡ���½orע�����
	void coffee_show();//coffee��Ʒ����
	void milktea_show();//�̲���Ʒ����
	void fruittea_show();//������Ʒ����
	void cake_show();//������Ʒ����
	void choice();//ѡ����תҳ��
	void VIP_register();//vipע�����
	void VIP_login();//vip��¼����
	void specifications();//ѡ����
	void WeChat_pay();//΢��֧��
	void Alipay_pay();//֧����֧��
	void order_show();//��������
	//void gbiao(int x, int y);//���ƹ��
	//void chance(int temp);

private:
	string no;
	string name;
	int Prise;
	int temp;
	char weight[20];//����
	char temperature[20];//�¶�
	char suger[20];//�Ƕ�
	char delivery[20];//���ͷ���
	struct product
	{
		string No;//���
		string Name;//����
		int prise;//�۸�
		int number;//����
	}pro[12] = {
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
		{"No 12","��������",16,30} };
};
