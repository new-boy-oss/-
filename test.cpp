//测试文件
#include "Back_stage_management.h"
#include"VIP.h"
#include"Interface.h"
#define DATE_H
#include <iomanip>
#include <sstream>
#include "Orderin.h"
#include "OrderOut.h"
#include "Order manage.h"
#pragma warning(disable:4996)//日期
#include<iostream>
using std::setw;//转int
using namespace std;
int main()
{
	Back_stage_management a;
	
	//a.manage_login();
	//a.add_product();
	//a.change();
	//a.show();

	//VIP v;
	//v.vip_register();
	//v.vip_register();
	//v.vip_login();
	//Back_stage_management a;
	//a.vip_information_maintenance();

	//订单测试
	/*
	OrderManage c;
	c.DeleteAllOrder();
	for (int i = 0; i < 2; i++)
	{
		int n = 1001 + i;
		std::stringstream ss;
		std::string str;
		ss << n;
		ss >> str;
		Orderin a(str + "i", "奶茶", 12, 1, "是", "是", "是");
		a.AddOutInfo();
		a.print();
	}
	for (int i = 0; i < 2; i++)
	{
		int n = 1001 + i;
		std::stringstream ss;
		std::string str;
		ss << n;
		ss >> str;
		OrderOut b(str + "o", "咖啡", 12, 1, "是", "是", "是");
		b.add();
		b.AddOutInfo();
		b.print();
	}
	cout << "-----------------------------------------------------";
	cout << endl;
	c.displayOrder();
	cout << "-----------------------------------------------------";
	c.UpdateOrder();
	cout << "-----------------------------------------------------5";
	c.SeekOrder();
	cout << "-----------------------------------------------------6";
	c.DeleteoneOrder();
	c.displayOrder();
	*/
	
		Interface c1;
		c1.inferface();
		return 0;
	

	
	return 0;
}