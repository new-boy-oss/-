#define DATE_H
#include <iostream>
#include <fstream>
#include <string>
#include"Date.h"
using namespace std;
//��ȡ������
Date::Date(int Year, int Month, int Day)
{
	year = Year;
	month = Month;
	day = Day;
}