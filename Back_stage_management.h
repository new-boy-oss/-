//��̨����
#include"Commodity.h"
#include"Interface.h"
#include "Orderin.h"
#include "OrderOut.h"
#include<fstream>
#include<vector>
#include<map>
#pragma once
class Back_stage_management: virtual public Order, public Interface
{
public:
	vector<Order> vOrder;
	vector<Commodity> vCommodity;
	void manage_login();//����Ա��¼
	void login_choice();//��½�ɹ���Ĳ���ѡ��

	void show();//չʾ������Ʒ��Ϣ
	void add_product();//�����Ʒ
	void change();//�޸���Ʒ�����ͼ۸�

	void vip_information_maintenance();//��Ա��Ϣά��
	int get_row_number_menu();//��ȡ��Ʒ�ļ�����

	
	void UpdateOrder();//���¶���
	void displayOrder();//��ʾ����
	void SeekOrder();//���Ҷ���
	void DeleteAllOrder();//ɾ��ȫ������
	void DeleteoneOrder();//ɾһ��
	//�洢��ʳ��������Ϣ
	map<string, vector<Orderin>> mOI;
	vector<Orderin> vOI;

	//�洢������������Ϣ
	map<string, vector<OrderOut>> mOO;
	vector<OrderOut> vOO;

	//�洢��ʱ�Ĵ��ļ��ж������Ϣ
	vector<string> vinfo;

	Back_stage_management();
	~Back_stage_management();
	//void delete_product();//ɾ����Ʒ
	//void DeleteoneOrder();//ɾ��һ������
private:
	string manage_account;//����Ա�˺�
	string manage_key;//����Ա����
};

