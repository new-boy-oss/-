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

//չʾ����ԭ����
void Back_stage_management::show()
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

//��Ӳ�Ʒ
void Back_stage_management::add_product()
{
	cout << "���Ӳ�Ʒ" << endl;
	string m_name,m_No;
	double m_prise;
	cout << "�������Ʒ���" << endl;
	cin >> m_No;
	cout << "������Ҫ��ӵĲ�Ʒ����" << endl;
	cin >> m_name;
	cout << "���������ļ۸�" << endl;
	cin >> m_prise;
	
	Commodity c;
	c.No = m_No;
	c.name = m_name;
	c.prise = m_prise;

	vCommodity.push_back(c);
	cout << "---------------" << endl;

	//д���Ʒ
	ofstream ofs;
	ofs.open("menu.txt", ios::trunc);//ios::trunc ����ļ����ڣ����ļ�������Ϊ0
	
	for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
	{
		ofs << it->No << " " << it->name << " " << it->prise;
	}
	ofs.close();

	cout << "��ӳɹ�" << endl;
}

//�޸���Ʒ�����ͼ۸�
void Back_stage_management::change()
{
	cout << "�޸���Ʒ" << endl;
	string m_name, m_No;
	double m_prise;
	cout << "�������Ʒ���" << endl;
	cin >> m_No;
	cout << "������Ҫ�޸ĵĲ�Ʒ����" << endl;
	cin >> m_name;
	cout << "���������ļ۸�" << endl;
	cin >> m_prise;

	for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
	{
		if (it->No == m_No)
		{
			it->name = m_name;
			it->prise = m_prise; 
		}
	}

	//д���ļ�
	ofstream ofs;
	ofs.open("menu.txt", ios::trunc);
	for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
	{
		ofs << it->No << " " << it->name << " " << it->prise << endl;
	}
	ofs.close();

	cout << "�޸ĳɹ�" << endl;

}

//ɾ����Ʒ
void Back_stage_management::delete_product()
{
	string delete_No;

	cout << "ɾ����Ʒ" << endl;
	cout << "������Ҫɾ������Ʒ���" << endl;
	cin >> delete_No;
	for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
	{
		if (it->No == delete_No)
		{
			vCommodity.erase(it);//ɾ�������е�����ָ��Ԫ��
			break;
		}
	}
	cout << "ʣ�����Ʒ������" << vCommodity.size()<<endl;

	//д��
	ofstream ofs;
	ofs.open("menu.txt", ios::trunc);

	for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
	{
		ofs << it->No << " " << it->name << " " << it->prise << endl;
	}
	ofs.close();

	cout << "ɾ���ɹ�" << endl;
}

//��¼
void Back_stage_management::manage_login()//����Ա��¼
{
	string m_manage_account;
	string m_manage_key;
	while (1)
	{
		cout << "���������Ա�˺�" << endl;
		cin >> m_manage_account;
		cout << "��������������" << endl;
		cin >> m_manage_key;
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