//��̨����
#include"Commodity.h"
#include"Raw_material.h"
#pragma once
class Back_stage_management:public Commodity
{
public:
	void manage_login();//����Ա��¼
	int add_product();//�����Ʒ
	void change();//�޸���Ʒ�����ͼ۸�
	Back_stage_management();
	~Back_stage_management();
private:
	string manage_account;//����Ա�˺�
	string manage_key;//����Ա����
};

