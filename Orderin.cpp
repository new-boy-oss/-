#pragma once
#define DATE_H
#include<iostream>
#include "Order.h"
#include "Orderin.h"
#include <vector> 
#include <fstream>
#include <string>
#include "Date.h"
#include <iomanip>
#pragma warning(disable:4996)
using std::setw;
//������Ǯ��
int Orderin::calculation()
{
	totalprice = prise * number;
	return totalprice;
}

//��ӡ��ʳ��������Ļ
void Orderin::print()
{
	string line;//���ж�ȡ
	//���������Ϣ
	for (vector<Orderin>::iterator it = vOrderInInfo.begin(); it != vOrderInInfo.end(); it++)
	{
		cout << "�������Ϊ:" << it->No << endl;
		cout << "��Ʒ����Ϊ��" << it->name << endl;
		cout << "��Ʒ�۸�Ϊ��" << it->prise << endl;
		cout << "��Ʒ����Ϊ��" << it->number << endl;
		cout << "�ܷ���Ϊ��" << it->totalprice << endl;
		cout << "�������:" << it->sizeiceadda << " ";
	}
}

//��ӡ��ʳÿ�ն��������뵽һ������������ļ�����
void Orderin::printtxt()
{
	//�ļ�����
	int year, month, day;
	time_t timer;
	time(&timer);
	tm* t_tm = localtime(&timer);
	Date* d;
	d = new Date(t_tm->tm_year + 1900, t_tm->tm_mon + 1, t_tm->tm_mday);
	year = d->get_year();
	month = d->get_month();
	day = d->get_day();
	ofstream ofs;
	string nameid;
	std::string str1 = std::to_string(year);
	std::string str2 = std::to_string(month);
	std::string str3 = std::to_string(day);
	nameid = str1 + str2 + str3 + "��ʳ����" + ".txt";
	if (!ofs.is_open())
	{
		ofstream ofs(nameid);
		//cout << "���ļ�������" << endl;
	}
	ofs.close();
	ofs.open(nameid, ios::app);
	for (vector<Orderin>::iterator it = vOrderInInfo.begin(); it != vOrderInInfo.end(); it++)
	{
		ofs << "�������Ϊ:" << it->No << " ";
		ofs << "��Ʒ����Ϊ:" << it->name << " ";
		ofs << "��Ʒ�۸�Ϊ:" << it->prise << " ";
		ofs << "��Ʒ����Ϊ:" << it->number << " ";
		ofs << "�ܷ���Ϊ:" << it->totalprice << " ";
		ofs << "�������:" << it->sizeiceadda << " ";

		ofs << endl;
	}
	ofs.close();
}

//��Ӷ���
void Orderin::AddOutInfo()
{
	string n;
	ofstream outfiles;
	Orderin oi;
	oi.No = No;
	oi.name = name;
	//��Ʒ�۸�
	oi.prise = prise;
	//��Ʒ����
	oi.number = number;
	oi.totalprice = totalprice;
	//��Ʒ�ܼ�
	vOrderInInfo.clear();
	outfiles.open("order.txt", std::ios::app);
	if (!outfiles.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}
	outfiles << "�������Ϊ:" << No << "\t" << "��Ʒ����Ϊ:" << "\t" << name << "\t" << "��Ʒ�۸�Ϊ:" << "\t" << prise << "\t" << "��Ʒ����Ϊ:" << "\t" << number << "\t" << "�ܷ���Ϊ:" << "\t" << totalprice << "\t" << "�������:" << " " << sizeiceadda << std::endl;
	outfiles.close();
	vOrderInInfo.push_back(oi);
}