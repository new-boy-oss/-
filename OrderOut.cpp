#pragma once
#include<iostream>
#include<iostream>
#include "Order.h"
#include "OrderOut.h"
#include "Date.h"
#include <vector> 
#include <fstream>
#include <string>
#define DATE_H
#include <iomanip>
#include <string>

using std::setw;
#pragma warning(disable:4996)
//���㣨���ͷ�3�飩
int OrderOut::calculation()
{
	totalprice = prise * number + ExtraTips;
	return totalprice;
}
//��ӡ����������txt���뵽һ������������ļ�����
void OrderOut::printtxt()
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
	cout << year << month << day << "��������������" << endl;
	ofstream ofs;
	string nameid;
	std::string str1 = std::to_string(year);
	std::string str2 = std::to_string(month);
	std::string str3 = std::to_string(day);
	nameid = str1 + str2 + str3 + "��������" + ".txt";
	if (!ofs.is_open())
	{
		ofstream ofs(nameid);
		//cout << "���ļ�������" << endl;

	}
	ofs.close();
	ofs.open(nameid, ios::app);
	for (vector<OrderOut>::iterator it = vOrderOutInfo.begin(); it != vOrderOutInfo.end(); it++)
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
// ��ӡ������������Ļ
void OrderOut::print()
{
	string line;//���ж�ȡ
		//���������Ϣ
	for (vector<OrderOut>::iterator it = vOrderOutInfo.begin(); it != vOrderOutInfo.end(); it++)
	{
		cout << "�������Ϊ:" << it->No << endl;
		cout << "��Ʒ����Ϊ��" << it->name << endl;
		cout << "��Ʒ�۸�Ϊ��" << it->prise << endl;
		cout << "��Ʒ����Ϊ��" << it->number << endl;
		cout << "�ܷ���Ϊ" << it->totalprice << endl;
		cout << "�������::" << it->sizeiceadda << endl;

	}
}
//��Ӷ���
void OrderOut::AddOutInfo()
{
	string n;
	ofstream outfiles;
	OrderOut oo;
	oo.No = No;
	oo.name = name;
	//��Ʒ�۸�
	oo.prise = prise;
	//��Ʒ����
	oo.number = number;
	oo.totalprice = totalprice;
	//��Ʒ�ۿ�
	outfiles.open("order.txt", std::ios::app);
	if (!outfiles.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}
	outfiles << "�������Ϊ:" << No << "\t" << "��Ʒ����Ϊ:" << "\t" << name << "\t"
		<< "��Ʒ�۸�Ϊ:" << "\t" << prise << "\t" << "��Ʒ����Ϊ:" << "\t" << number
		<< "\t" << "�ܷ���Ϊ:" << "\t" << totalprice << "\t" << "�������:" << " " << sizeiceadda << std::endl;
	outfiles.close();
	vOrderOutInfo.push_back(oo);

}