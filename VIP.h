//��Ա��
#pragma once
#include<string>
using namespace std;
class VIP
{
public:
	void vip_register();//ע��
	void vip_login();//��¼
	void vip_find_key();//�һ�����
	VIP();
	~VIP();
private:
	string vip_account;//�˺�
	string vip_key;//����
	string vip_name;
	string vip_Phone_number;
	string vip_number;//���
};
