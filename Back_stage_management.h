//��̨����
#include"Commodity.h"
#include<fstream>
#include<vector>
#pragma once
class Back_stage_management:public Commodity
{
public:
	vector<Commodity> vCommodity;
	void manage_login(string m_manage_account, string m_manage_key);//����Ա��¼
	void show();//չʾ����
	void add_product();//�����Ʒ
	void delete_product();//ɾ����Ʒ
	void change();//�޸���Ʒ�����ͼ۸�
	void SetDiscount();//�����ۿ�
	Back_stage_management();
	~Back_stage_management();
private:
	string manage_account;//����Ա�˺�
	string manage_key;//����Ա����
};

