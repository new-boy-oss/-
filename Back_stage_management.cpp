//��̨����
#include"Back_stage_management.h"
#include"Commodity.h"
#include<string>
#include<fstream>
Back_stage_management::Back_stage_management()
{
	Commodity fdis;
	ifstream ifs;
	manage_account = "000000";
	manage_key = "111111";

	Commodity f;
	//���ļ�----�˵��ļ�---��š����ơ��۸�
	ifs.open("menu.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}
}

Back_stage_management::~Back_stage_management()
{

}

void Back_stage_management::show()//չʾ����ԭ����
{
	for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
	{
		cout << "��Ʒ��ţ� " <<it->No<<"��Ʒ���ƣ� "<<it->name<<"��Ʒ�۸� "<<it->prise<<endl;
	}
		cout << "�������£� " << endl;
		cout << "���ȶ� �� " << raw_coffee << endl;
		cout << "�� �� " << suger << endl;
		cout << "���� �� " << cup << endl;
		cout << "ţ�̣�" << milk << endl;
		cout << "����" << ice << endl;
}

void Back_stage_management::add_product()//��Ӳ�Ʒ
{
	string m_name;
	double m_prise = 0;
	cout << "������Ҫ��ӵĲ�Ʒ" << endl;
	cin >> m_name;
	cout << "���������ļ۸�" << endl;
	cin >> m_prise;
	if (m_prise<=0)
	{
		cout << "���ʧ��" << endl;
	}
	else
	{
		cout << "��ӳɹ�" << endl;
		prise = m_prise;
	}
}

void Back_stage_management::change()//�޸���Ʒ�����ͼ۸�
{
}

void Back_stage_management::manage_login(string m_manage_account,string m_manage_key)//����Ա��¼
{
	while (1)
	{
		cout << "���������Ա�˺�" << endl;
		cin >> manage_account;
		cout << "��������������" << endl;
		cin >> manage_account;
		if (m_manage_account == manage_account && m_manage_key == manage_key)
		{
			cout << "��¼�ɹ�" << endl;;
			break;
		}
		else
		{
			cout << "��½ʧ�ܣ������µ�¼" << endl;
		}
	}
}