#pragma once
#include"VIP.h"
#include"Commodity.h"
#include<fstream>
using namespace std;
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

	string* vip_login = new string[1000];
	
		cout << "��������Ҫ��¼���˻�" << endl;
		cin >> m_vip_account;
		cout << "��������������" << endl;
		cin >> m_vip_key;
		ifstream ifs("vip.txt");
		int i = 0;
		while (getline(ifs, str))
		{
			vip_login[i] = str;
		}
		for (int j = 0; j < get_rows_number(); j++)
		{
			if (vip_login[j] == m_vip_account)
			{

				for (int k = 0; k < get_rows_number(); k++)
				{
					if (vip_login[k] == m_vip_key)
					{
						cout << "��¼�ɹ�" << endl;
						delete[]vip_login;
						break;
					}
					else
					{
						cout << "��½ʧ��" << endl;
						break;
					}
				}
			}
		}
}
