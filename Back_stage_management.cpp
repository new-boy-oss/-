//��̨����
#include"Back_stage_management.h"
#include"Commodity.h"
#include<string>
#include<fstream>
Back_stage_management::Back_stage_management()
{
	
	ifstream ifs;
	manage_account = "000000";
	manage_key = "111111";

	
	//���ļ�----�˵��ļ�
	ifs.open("menu.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}

	//���ļ�----��Ա�ļ�
	ifs.open("vip.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
		return;
	}
}

Back_stage_management::~Back_stage_management()
{

}

//����Ա��¼
void Back_stage_management::manage_login()
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

//չʾ����ԭ����
void Back_stage_management::show()
{
	string str;
	ifstream ifs("menu.txt");
	while (getline(ifs, str))
	{
		cout << str << endl;
	}
	cout << "---------------------------------------------" << endl;
		cout << "ԭ�����������£� " << endl;
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
	string m_name,m_No,m_number;
	string m_prise;
	int add_number=0;
	cout << "���������ӵĲ�Ʒ����" << endl;
	cin >> add_number;
	for (int i = 0; i < add_number; i++)
	{
		cout << "�������Ʒ���" << endl;
		cin >> m_No;
		cout << "������Ҫ��ӵĲ�Ʒ����" << endl;
		cin >> m_name;
		cout << "���������ļ۸�" << endl;
		cin >> m_prise;
		cout << "�������Ʒ����" << endl;
		cin >> m_number;

		Commodity c;
		c.No = m_No;
		c.name = m_name;
		c.prise = m_prise;
		c.number = m_number;

		vCommodity.push_back(c);
		//д���Ʒ
		ofstream ofs;
		ofs.open("menu.txt", ios::trunc);//ios::trunc ����ļ����ڣ����ļ�������Ϊ0 app:���ļ�ĩβд

		for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
		{
			ofs << "��Ʒ��ţ� " << endl << it->No << endl << "��Ʒ���ƣ� " << endl << it->name 
				<< endl << "��Ʒ�۸� " << endl << it->prise 
				<< endl << "��Ʒ������ " << endl << it->number << endl << "---------------" << endl;
		}
		ofs.close();

		cout << "��ӳɹ�" << endl;

	}
	
	
}

//�޸���Ʒ���ƣ������ͼ۸�
void Back_stage_management::change()
{
	cout << "�޸���Ʒ" << endl;
	string m_prise, m_name, m_No, m_number;//���ڲ���
	string M_name, M_prise,M_number;//�����޸�

	string str;
	
	int menu_number = 0;

	//���������Ʒ
	cout << "���в�Ʒ����: " << endl;
	show();//����չʾ������Ʒ����
	string* product= new string[1000];
	ifstream ifs("menu.txt");

	//���ļ�д����ʱ������
	for (int i = 0; i < get_row_number_menu(); i++)
	{
		getline(ifs, str);//��ȡ�ļ�����
		product[i] = str;//���е��ļ���������
	}
flag2:
	cout << "�������Ʒ���" << endl;
	cin >> m_No;
	for (int j = 0; j < get_row_number_menu(); j++)
	{
		if (product[j] == m_No)
		{
			menu_number = 1;
			break;
		}
	}

	//nemu_munberĬ�ϵ���0���������һ�����˻�����
	if (menu_number == 0)
	{
		cout << "��Ʒ�����ڣ�������ѡ��" << endl;
		goto flag2;
	}
	if (menu_number == 1)
	{
		cout << "��Ʒ����" << endl;
	}
	
	//�޸�����
	cout << "������ԭʼ��Ʒ����" << endl;
	cin >> m_name;
	for (int j = 0; j < get_row_number_menu(); j++)
	{
		if (product[j] == m_name)
		{
			cout << "�������޸ĺ������" << endl;
			cin >> M_name;
			product[j] = M_name;
			break;
		}
	}

	//�޸ļ۸�
	cout << "����������ԭʼ�۸�" << endl;
	cin >> m_prise;
	for (int j = 0; j < get_row_number_menu(); j++)
	{
		if (product[j] == m_prise)
		{
			cout << "�������޸ĺ�ļ۸�" << endl;
			cin >> M_prise;
			product[j] = M_prise;
			break;
		}
	}

	//�޸�����
	cout << "����������ԭʼ����" << endl;
	cin >> m_number;
	for (int j = 0; j < get_row_number_menu(); j++)
	{
		if (product[j] == m_number)
		{
			cout << "�������޸ĺ������" << endl;
			cin >> M_number;
			product[j] = M_number;
			break;
		}
	}

	cout << "___________________________________________" << endl;
	//д���ļ�
	int x = get_row_number_menu();
	ofstream ofs;
	ofs.open("menu.txt", ios::trunc);
	for (int i = 0; i<x; i++)
	{
		ofs << product[i] << endl ;
	}
	delete[] product;
	ofs.close();
	
	cout << "�޸ĳɹ�" << endl;

}

//ɾ����Ʒ
/*
 
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
	cout << "�ɹ�" <<endl;

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

*/

//��Ա��Ϣά��
void Back_stage_management::vip_information_maintenance()
{
	ifstream ifs("vip.txt");

	string str;
	while (getline(ifs, str))
	{
		cout << str << endl;
	}
}

//��ȡ����
int Back_stage_management::get_row_number_menu()
{
	int rows_number_menu = 0;//����
	string str;
	ifstream ifs("menu.txt");
	while (getline(ifs, str))
	{
		rows_number_menu++;
	}
	return rows_number_menu;
}