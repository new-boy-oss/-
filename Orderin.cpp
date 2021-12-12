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
#include <sstream>
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
		cout << "��Ʒ���Ϊ:" << it->No << endl;
		cout << "��Ʒ����Ϊ��" << it->name << endl;
		cout << "��Ʒ�۸�Ϊ��" << it->prise << endl;
		cout << "��Ʒ����Ϊ��" << it->number << endl;
	    cout << "�ܷ���Ϊ��" << it->totalprice << endl;
		cout << "�󱭻�С��:" << it->size << " ";
		cout << "�Ƿ�ӱ�:" << it->ice << " ";
		cout << "�Ƿ����" << it->adda << " ";

	}
	
}

//��ӡ��ʳÿ�ն��������뵽һ������������ļ�����
void Orderin::printtxt()
{   
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
	std::stringstream ss1;
	std::stringstream ss2;
	std::stringstream ss3;
	std::string str1;
	std::string str2;
	std::string str3;
	ss1 << year;
	ss1 >> str1;
	ss2 << month;
	ss2 >> str2;
	ss3 << day;
	ss3 >> str3;
	string str = str1 + str2 + str3;
	str = str + "��ʳ����" + "txt";
	nameid = str;
	if (!ofs.is_open())
	{
		ofstream ofs(nameid);
		//cout << "���ļ�������" << endl;

	}
	ofs.close();
	ofs.open(nameid, ios::app);
	for (vector<Orderin>::iterator it = vOrderInInfo.begin(); it != vOrderInInfo.end(); it++)
	{
		ofs << "��Ʒ���Ϊ:" << it->No << " ";
		ofs << "��Ʒ����Ϊ:" << it->name << " ";
		ofs << "��Ʒ�۸�Ϊ:" << it->prise << " ";
		ofs << "��Ʒ����Ϊ:" << it->number << " ";
		ofs << "��Ʒ�ܼ�Ϊ:" << it->totalprice << " ";
		ofs << "�󱭻�С��:" << it->size << " ";
		ofs << "�Ƿ�ӱ�:" << it->ice << " ";
		ofs << "�Ƿ����" << it->adda << " ";

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
	oi.totalprice =totalprice;
	//��Ʒ�ۿ�
	vOrderInInfo.clear();
	outfiles.open("test.txt", std::ios::app);
	if (!outfiles.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}
	outfiles << "��Ʒ���Ϊ:"  << No << "\t" << "��Ʒ����Ϊ:" << "\t"<< name << "\t" << "��Ʒ�۸�Ϊ:" << "\t" << prise << "\t" << "��Ʒ����Ϊ:" << "\t" << number << "\t" << "�ܷ���Ϊ:" << "\t" << totalprice << "\t" << "�󱭻�С��:" << size << " "<< "�Ƿ�ӱ�:" << ice << " "<< "�Ƿ����" << adda << " " << std::endl;
	outfiles.close();
	vOrderInInfo.push_back(oi);
}