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
	void show_product2();//��¼vip�����ʾ��Ʒ����
	string getNo();
	string getName();
	int getPrise();
	string getspecifications();
	string getdelivery();
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
	void specifications(int a);//ѡ����
	void WeChat_pay();//΢��֧��
	void Alipay_pay();//֧����֧��
	void order_show(string a, string b, int c, string d, string e);//��������

private:
	string no;
	string name;
	int Prise;
	int temp, temp1, temp2, temp3, temp4;
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
	struct specifications
	{
		string specifications;//����
		string delivery;//���ͷ���
	}spe[16] = {
		{"��+��+����" ,"����"},
		{"��+��+����" ,"����"},
		{"��+��+����" ,"����"},
		{"��+��+����" ,"����"},
		{"��+�ӱ�+����","����"},
		{"��+�ӱ�+����","����"},
		{"��+�ӱ�+����","����"},
		{"��+�ӱ�+����","����"},
		{"С��+��+����" ,"����"},
		{"С��+��+����","����"},
		{"С��+��+����","����"},
		{"С��+��+����","����"},
		{"С��+�ӱ�+����","����"},
		{"С��+�ӱ�+����","����"},
		{"С��+�ӱ�+����","����"},
		{"С��+�ӱ�+����","����"} };

};
