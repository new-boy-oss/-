#pragma once
#include"VIP.h"
#include"Commodity.h"
#include <graphics.h>
#include<fstream>
#include<conio.h>
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
	TCHAR s[10];
	InputBox(s, 10, _T("��������������"));
	// ���û�����ת��Ϊstring
	vip_name = s;

	TCHAR a[10];
	InputBox(a, 10, _T("�����������˺�"));
	vip_account = a;

	TCHAR b[10];
	InputBox(b, 10, _T("���������ĵ绰����"));
	vip_Phone_number = b;

	/*
	cout << "��������������" << endl;
	cin >> vip_name;
	cout << "�����������˺�" << endl;
	cin >> vip_account;
	cout << "���������ĵ绰����" << endl;
	cin >> vip_Phone_number;
	cout << endl;
	*/
	
	while (1)
	{
		TCHAR d[10];
		InputBox(d, 10, _T("��������������"));
		vip_key = d;

		TCHAR e[10];
		InputBox(e, 10, _T("��ȷ����������"));
		vip_key2 = e;

		/*
		cout << "��������������" << endl;
		cin >> vip_key;
		cout << "��ȷ����������" << endl;
		cin >> vip_key2;
		*/
		
		if (vip_key == vip_key2)
		{
			vip_number++;
			//д���ļ�
			ofstream ofs;
			ofs.open("vip.txt", ios::app);//���ļ�ĩβд
			ofs << "���: " << vip_number << endl <<"������"<<vip_name<<endl<< "��Ա�˺�: "
				<< endl << vip_account << endl << "����: " << endl
				<<vip_key<<endl<<"�绰���룺 "<<vip_Phone_number<<endl<<"--------------------------"<<endl;
			ofs.close();
			cout << "�����ɹ�" << endl;
			break;
		}
		else {
			HWND hnd = GetHWnd();
			SetWindowText(hnd, _T(""));
			int isok = MessageBox(hnd, _T("�������벻һ�£�����������"), _T("��ʾ"), MB_OK);
			//cout << "�������벻һ�£�����������" << endl;
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
	}

flag:
		//�ж��˻��Ƿ����
		TCHAR g[10];
		InputBox(g, 10, _T("���������˺�"));
		m_vip_account = g;

	//	cout << "��������Ҫ��¼���˻�" << endl;
	//	cin >> m_vip_account;
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
			HWND hnd = GetHWnd();
			SetWindowText(hnd, _T(""));
			int isok = MessageBox(hnd, _T("�˻�������,�����µ�¼"), _T("��ʾ"), MB_OK);
			//cout << "�˻�������,�����µ�¼" << endl;
			goto flag;
		}
		if (login_number == 1)
		{
			HWND hnd = GetHWnd();
			SetWindowText(hnd, _T(""));
			int isok = MessageBox(hnd, _T("�˺Ŵ���"), _T("��ʾ"), MB_OK);
			//cout << "�˺Ŵ���" << endl;
		}
	
		//�ж������Ƿ���ȷ

		TCHAR h[10];
		InputBox(h, 10, _T("��������������"));
		m_vip_key = h;
	//	cout << "��������������" << endl;
	//	cin >> m_vip_key;
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
			HWND hnd = GetHWnd();
			SetWindowText(hnd, _T(""));
			int isok = MessageBox(hnd, _T("������������µ�¼"), _T("��ʾ"), MB_OK);
			//cout << "������������µ�¼" << endl;
			goto flag;
		}
		if (login_key == 1)
		{
			HWND hnd = GetHWnd();
			SetWindowText(hnd, _T(""));
			int isok = MessageBox(hnd, _T("��½�ɹ�"), _T("��ʾ"), MB_OK);
			//cout << "��½�ɹ�" << endl;
			delete[]vip_login;
		}
}
