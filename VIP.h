//��Ա��,�̳���Ʒ
#pragma once
#include"Commodity.h"
#include<string>
using namespace std;
class VIP:public Commodity
{
public:
	void vip_register();//ע��
	void vip_login();//��¼
	VIP();
	~VIP();
private:
	string vip_account;//�˺�
	string vip_key;//����
	string vip_name;//��Ա����
	string vip_Phone_number;//�绰��
	int vip_number;//���
	int get_rows_number();//��ȡ����
};
