#pragma once
#include"VIP.h"
#include"Commodity.h"
#include<fstream>
using namespace std;

//���캯�������ļ�
VIP::VIP()
{
	
	vip_account = "0";//�˺�
	vip_key = "0";//����
	vip_name = "0";//��Ա����
	vip_Phone_number = "0";//�绰��
	vip_number = 0;//���

	ifstream ifs;
	ifs.open("vip.txt", ios::in);//ֻ��
	if (!ifs.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}
}

//��������
VIP::~VIP()
{
	
}

//��Աע��
void VIP::vip_register()
{
	string vip_key2;
	cout << "*********��Աע��*********" << endl;
	cout << "��������������" << endl;
	cin >> vip_name;
	cout << "�����������˺�" << endl;
	cin >> vip_account;
	cout << "���������ĵ绰����" << endl;
	cin >> vip_Phone_number;
	cout << endl;
	while (1)
	{
		cout << "��������������" << endl;
		cin >> vip_key;
		cout << "��ȷ����������" << endl;
		cin >> vip_key2;
		if (vip_key == vip_key2)
		{
			vip_number++;
			//д���ļ�
			ofstream ofs;
			ofs.open("vip.txt", ios::app);//���ļ�ĩβд
			ofs << "���: " << vip_number << endl << "��Ա�˺�: " << endl << vip_account << endl << "����: " << endl
				<<vip_key<<endl<<"�绰���룺 "<<vip_Phone_number<<endl<<"--------------------------"<<endl;
			ofs.close();
			cout << "�����ɹ�" << endl;
			break;
		}
		else {
			cout << "�������벻һ�£�����������" << endl;
		}

	}
}

//��ȡ����
int VIP::get_rows_number()
{
	int rows_number=0;//����
	string str;
	ifstream ifs("vip.txt");
	while (getline(ifs, str))
	{
		rows_number++;	
	}
	return rows_number;
}

//��Ա��½
void VIP::vip_login()
{	
	string m_vip_account,m_vip_key;
	string str;
	int i = 0;
	int login_number = 0;//�˺ż�¼��־ ����һ�����˺�
	int login_key = 0;//�����¼��־ ����һ������ȷ
	string* vip_login = new string[1000];
	ifstream ifs("vip.txt"); 
	
	//���ļ�д����ʱ������
	for(int i = 0; i < get_rows_number(); i++)
	{
		getline(ifs, str);//��ȡ�ļ�����
		vip_login[i] = str;//���е��ļ���������
		//cout << str << endl;
		//cout << vip_login[i] << endl;
	}

flag:
		//�ж��˻��Ƿ����
		cout << "��������Ҫ��¼���˻�" << endl;
		cin >> m_vip_account;
		for (int j = 0; j < get_rows_number(); j++)
		{
			if (vip_login[j] == m_vip_account)
			{
				login_number = 1;
				break;
			}
		}

		//long_munberĬ�ϵ���0���������һ�����˻�����
		if (login_number == 0)
		{
			cout << "�˻������ڡ������µ�¼" << endl;
			goto flag;
		}
		if (login_number == 1)
		{
			cout << "�˺Ŵ���" << endl;
		}
	
		//�ж������Ƿ���ȷ
		cout << "��������������" << endl;
		cin >> m_vip_key;
		for (int k = 0; k < get_rows_number(); k++)
		{
			if (vip_login[k] == m_vip_key)
			{
				login_key = 1;
				break;
			}
		}
		//long_keyĬ�ϵ���0���������һ����������ȷ
		if (login_key == 0)
		{
			cout << "������������µ�¼" << endl;
			goto flag;
		}
		if (login_key == 1)
		{
			cout << "��½�ɹ�" << endl;
			delete[]vip_login;
		}
}
