//����
//�鿴���������򣬻�Ա��½����̨����Ա��½
#pragma once
#include"Commodity.h"
#include <graphics.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include <windows.h>//Sleep()ͷ�ļ�
#include <stdlib.h>
using namespace std;


class Interface :public Commodity 
{
public:
	Interface();
	~Interface();
	void pay_show(int a);//֧�� 
	void show_product();//��ʾ��Ʒ
	void show_product2();//��¼vip�����ʾ��Ʒ����
	string getNo();//���ر��
	string getName();//��������
	int getPrise();//���ؼ۸�
	string getspecifications();//���ع��
	string getdelivery();//�������ͷ�ʽ
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
