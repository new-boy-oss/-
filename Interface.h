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
	void pay_show(int temp);//֧�� (֧���� ΢��) ͼƬ�տ���
	void show_product();//��ʾ��Ʒ
	Interface();
	~Interface();
	void admin_login_OR_guest_choice();//�û���ͻ����Ա��¼
	void inferface();//������
	void inferface_product();//��Ʒ������
	void VIP_show();//vipѡ���½orע�����
	void coffee_show();//coffee��Ʒ����
	void milktea_show();//�̲���Ʒ����
	void fruittea_show();//������Ʒ����
	void cake_show();//������Ʒ����
	void choice();//ѡ����תҳ��
	void VIP_register();//vipע�����
	void VIP_login();//vip��¼����
	void specifications(int temp);//ѡ����
	void WeChat_pay();
	void Alipay_pay();
	void order_show();

private:
	char* No[12];//���
	char* name[12];//���ȵ����֣����磺��������ʽ��
	int prise[12];//�۸�
	int number[12];//����
	char NO[20];
	string Name[12];
	string Prise[12];
	char weight[20];
	char temperature[20];
	char suger[20];
	char delivery[20];
};

