//��̨����
#include"Interface.h"
#include "OrderOut.h"
#include"Back_stage_management.h"
#include"Commodity.h"
#include<string>
#include<fstream>
#include <vector> 
#include<map>
#include <windows.h>
#pragma warning(disable:4996)
using namespace std;

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
		cout << "----------------���������Ա�˺�---------------" << endl;
		cin >> m_manage_account;
		cout << "----------------��������������-----------------" << endl;
		cin >> m_manage_key;
		if (m_manage_account == manage_account && m_manage_key == manage_key)
		{
			cout << "��¼�ɹ�" << endl;
			login_choice();
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
	cout << "-------------���Ӳ�Ʒ------------" << endl;
	string m_name, m_No;
	int m_prise, m_number;

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

		//Commodity c;
		//��ʼ��12����Ʒ����
		pro[11 + i].No = m_No;
		pro[11 + i].Name = m_name;
		pro[11 + i].prise = m_prise;
		pro[11 + i].number = m_number;

		//vCommodity.push_back(c);
		//д���Ʒ
		ofstream ofs;
		ofs.open("menu.txt", ios::app);//ios::trunc ����ļ����ڣ����ļ�������Ϊ0 app:���ļ�ĩβд

		//for (vector<Commodity>::iterator it = vCommodity.begin(); it != vCommodity.end(); it++)
		//{
			ofs <<"��Ʒ��ţ� " << endl << pro[11 + i].No << endl << "��Ʒ���ƣ� " << endl << pro[11 + i].Name
				<< endl << "��Ʒ�۸� " << endl << pro[11 + i].prise
				<< endl << "��Ʒ������ " << endl << pro[11 + i].number << endl;
		//}
		ofs.close();

		cout << "��ӳɹ�" << endl;

	}
	
	
}

//�޸���Ʒ���ƣ������ͼ۸�
void Back_stage_management::change()
{
	cout << "�޸���Ʒ" << endl;
	string m_prise, m_name, m_No, m_number;//���ڲ���
	string M_name; int M_prise, M_number;//�����޸�

	string str;
	
	int menu_number = 0;// nemu_munberĬ�ϵ���0���������һ�������

	//���������Ʒ
	cout << "���в�Ʒ����: " << endl;
	show();//����չʾ������Ʒ����

	//��ʱ����
	string* product= new string[1000];
	ifstream ifs("menu.txt");

	//���ļ�д����ʱ������
	for (int i = 0; i < get_row_number_menu(); i++)
	{
		getline(ifs, str);//��ȡ�ļ�����
		product[i] = str;//���е��ļ���������
	}


flag2:
	//����Ų�����Ʒ
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

	//�ж���Ʒ�Ƿ���� nemu_munberĬ�ϵ���0���������һ�������
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

	for (int i = 0; i < x; i++)
	{
		ofs << product[i] << endl;
	}

	//д��ṹ��
	int ssss = 0;
	for (int sss = 0; sss <= (x / 8); sss++)
	{	
		pro[sss].No = product[ssss + 1];
		pro[sss].Name = product[ssss + 3];
		string s = product[ssss + 5];//stringתint
		string ss = product[ssss + 7];
		pro[sss].prise = atoi(s.c_str());
		pro[sss].number = atoi(ss.c_str());
	}


	delete[] product;
	ofs.close();


	cout << "�޸ĳɹ�" << endl;

}

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

//	��½�ɹ���Ĳ���ѡ��
void Back_stage_management::login_choice()
{
	cout << "-----------------------------------" << endl;
	cout << "---------1.��ʾ����ԭ����----------" << endl;
	cout << "---------2.��Ӳ�Ʒ----------------" << endl;
	cout << "---------3.�޸Ĳ�Ʒ�����������۸�--" << endl;
	cout << "---------4.��Ա��Ϣά��------------" << endl;
	cout << "---------5.��ʾ��������ж���------" << endl;
	cout << "---------6.��ѯ����----------------" << endl;
	cout << "---------7.���¶���----------------" << endl;
	cout << "---------8.ɾ��ȫ������------------" << endl;
	cout << "---------9.�ص���ҳ��--------------" << endl;
	//cout << "---------9.ɾ��һ������------------" << endl;
	cout << "---------0.�˳�����----------------" << endl;
	cout << "-----------------------------------" << endl;
	int choice;
	Interface aa;
flag3:
	cout << "��ѡ��������Ĳ���" << endl;
	cin >> choice;
	
		switch (choice)
		{
			//չʾ����ԭ��
		case 1:
			show();
			goto flag3;
			break;

			//��Ӳ�Ʒ
		case 2:
			add_product();
			goto flag3;
			break;

			//�޸���Ʒ���ƣ������ͼ۸�
		case 3:
			change();
			goto flag3;
			break;
			//��Ա��Ϣά��
		case 4:
			vip_information_maintenance();
			goto flag3;
			break;
			//��ʾ��������ж���
		case 5:
			displayOrder();
			goto flag3;
			break;
			//��ѯ����
		case 6:
			SeekOrder();
			goto flag3;
			break;
			//���¶���
		case 7:
			UpdateOrder();
			goto flag3;
			break;
			//ɾ��ȫ������
		
		case 8:
			DeleteAllOrder();
			goto flag3;
			break;
			//�ص���ҳ��
		case 9:
			
			aa.inferface();
			break;

			//ɾ��һ������
		/*
		case 9:
			DeleteoneOrder();
			goto flag3;
			break;
		*/
			//�˳�����
		case 0:
			exit(0);
			break;
		default:
			cout << "�����������������" << endl;
			goto flag3;
			break;
		}	
}

//��ʾ��������ж���
void Back_stage_management::displayOrder()
{
	ifstream ifs;
	ifs.open("order.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ��д�ʧ��" << endl;
	}
	string str;
	while (getline(ifs, str))//һ��һ�еĶ�ȡ��Ϣ
	{
		cout << str << endl;
	}
}

//��ѯ����
void  Back_stage_management::SeekOrder()
{

	string temp = "0";
	UpdateOrder();
	cout << "��ӭ��ʹ�ò��Ҷ������ܣ�ע��:ֻ�ɲ��ҵ��ն���" << endl;
	cout << "��������Ҫ���ҵķ�ʽ��1�����ն�����Ų���  2.�˳�" << endl;
	int op = 0;
	string seekid;//������ҵĶ�����
	string seeknumber;
	cin >> op;//temp;
	//ʹ���������Ų���
	if (op == 1) {
		while (1)
		{
			cout << "��������Ҫ���ҵĶ�����ţ�" << endl;
			cin >> seekid;
			if (seekid.length() > 4)
			{
				if (seekid[4] == 'o' || seekid[4] == 'i')//5λ�����ţ����򱨴�
				{
					if (seekid[4] == 'o')
					{
						cout << "�˶�������������,������Ϣ����" << endl;
						for (map<string, vector<OrderOut>>::iterator it = mOO.begin(); it != mOO.end(); it++)
						{
							string y = it->first;
							if (y == seekid)
							{
								cout << "������ţ�" << it->first << endl;
								int count = 0;

								for (vector<OrderOut>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
								{
									count++;
									cout << "��Ʒ����Ϊ��" << mit->name << " ��Ʒ�۸�" << mit->prise << " ��Ʒ������"
										<< mit->number << " �ܷ��ã�" << mit->totalprice << mit->adda << endl;
								}
								return;
							}

						}
					}
					else
					{
						cout << "�˶�������ʳ����,������Ϣ����" << endl;
						for (map<string, vector<Orderin>>::iterator it = mOI.begin(); it != mOI.end(); it++)
						{
							string y = it->first;
							if (y == seekid)
							{
								cout << "������ţ�" << it->first << endl;
								int count = 0;

								for (vector<Orderin>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
								{
									count++;
									cout << "��Ʒ����Ϊ��" << mit->name << " ��Ʒ�۸�" << mit->prise << " ��Ʒ������" << mit->number << "�ܷ��ã�" << mit->totalprice << mit->adda << endl;
								}
								return;
							}

						}
					}
				}
				else
				{
					cout << "����������" << endl;
					return;
				}
				break;
			}
			else
			{
				cout << "���Ϊ5λ�����������룡" << endl;
				
			}
		}

	}

}
		
//���¶���
void Back_stage_management::UpdateOrder()
{
	Orderin oi;//��ʳ
	OrderOut oo;//����
	ifstream ifs;

	//�洢��ʳ��������Ϣ
	mOI.clear();
	vOI.clear();

	//�洢������������Ϣ
	mOO.clear();
	vOO.clear();

	//�洢��ʱ�Ĵ��ļ��ж������Ϣ

	vinfo.clear();

	ifs.open("order.txt", ios::in);
	//���ļ�ʧ�ܣ������ļ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}

	//�򿪳ɹ�

	//���ж�ȡ
	string line;
	if (ifs)
	{
		while (getline(ifs, line))
		{
			vinfo.push_back(line);
		}
	}

	//�ҵ�ÿһ����������ʼ��

	int temp[100];
	int count = 0;//����
	int c = 1;//�ж�������С
	for (vector<string>::iterator it = vinfo.begin(); it != vinfo.end(); it++)
	{
		line = *it;
		count++;
		if (line.size() > 15)
		{
			if (line.at(15) == 'o' || line.at(15) == 'i')
			{
				temp[c] = count;
				c++;
			}
		}

	}


	temp[c] = vinfo.size() + 1;
	
	string orderid, foodname, adda;//�����������
	int foodprice, foodnum, totalprice;//��Ʒ�۸񡢲�Ʒ����
	int pos1, pos2;

	//����
	int i = 0;
	int o = 0;
	for (vector<string>::iterator it = vinfo.begin(); it != vinfo.end(); it++)
	{
		line = *it;

		if (line.at(15) == 'o' || line.at(15) == 'i')
		{
			if (line.at(15) == 'o')
			{
				vOO.clear();
				i++;
				for (int k = temp[i]; k < temp[i + 1]; k++)
				{
					//�������ݣ��洢��vector����
					//cout << vinfo[k-1] << endl;
					//�洢������vector��qi
					if (k == temp[i])//�������
					{
						count = 6;
						while (count--)
						{
							if (count == 5)
							{
								pos1 = vinfo[k - 1].find(":") + 1;
								orderid = vinfo[k - 1].substr(pos1, 5);
								//cout << orderid << "���" ;
							}
							if (count == 4)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;
								foodname = vinfo[k - 1].substr(pos2, 6);
								//cout << foodname << "mingz ";
								oo.name = foodname;
							}
							else if (count == 3)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;
								foodprice = atoi(vinfo[k - 1].substr(pos2, 4).c_str());
								//cout << foodprice << " foodprice";
								oo.prise = foodprice;
							}
							else if (count == 2)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;

								foodnum = atoi(vinfo[k - 1].substr(pos2, 2).c_str());

								//cout << foodnum << " num";

								oo.number = foodnum;
							}
							else if (count == 1)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;

								totalprice = atoi(vinfo[k - 1].substr(pos2, 4).c_str());

								//cout << totalprice << "totalprice";
								oo.totalprice = totalprice;
							}
							else if (count == 0)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 9;
								adda = vinfo[k - 1].substr(pos2);
								oo.adda = adda;
							}
						}vOO.push_back(oo);
					}

				}
				//���뵽vector����
				for (vector<OrderOut>::iterator it = vOO.begin(); it != vOO.end(); it++)
				{
					it->No = orderid;
				}
				//���뵽map������
				mOO.insert(make_pair(orderid, vOO));

			}
			else if (line.at(15) == 'i')
			{
				//cout << "��ʳ������" << endl;
				vOI.clear();
				i++;

				for (int k = temp[i]; k < temp[i + 1]; k++)
				{
					//�������ݣ��洢��vector����
					//cout << vinfo[k-1] << endl;
					//�洢������vector��qi
					if (k == temp[i])//�������
					{
						count = 6;
						while (count--)
						{
							if (count == 5)
							{
								pos1 = vinfo[k - 1].find(":") + 1;
								orderid = vinfo[k - 1].substr(pos1, 5);

								//cout << orderid << "���" ;
							}
							if (count == 4)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;

								foodname = vinfo[k - 1].substr(pos2, 6);
								//cout << foodname << "mingz ";

								oi.name = foodname;
							}
							else if (count == 3)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;
								foodprice = atoi(vinfo[k - 1].substr(pos2, 4).c_str());

								//cout << foodprice << " foodprice";
								oi.prise = foodprice;
							}
							else if (count == 2)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;

								foodnum = atoi(vinfo[k - 1].substr(pos2, 2).c_str());

								//cout << foodnum << " num";

								oi.number = foodnum;
							}
							else if (count == 1)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 5;

								totalprice = atoi(vinfo[k - 1].substr(pos2, 4).c_str());

								//cout << totalprice << "totalprice";
								oi.totalprice = totalprice;
							}
							else if (count == 0)
							{
								pos1 = vinfo[k - 1].find("��");
								pos2 = pos1 + 9;
								adda = vinfo[k - 1].substr(pos2);
								oi.adda = adda;
							}

						}
						vOI.push_back(oi);
					}
				}


				//cout << "----------------------" << endl;
				//���뵽vector����
				for (vector<Orderin>::iterator it = vOI.begin(); it != vOI.end(); it++)
				{

					it->No = orderid;
					//cout << "tableid=" << tableid << " " << "boxprice=" << boxprice << endl;
				}

				//���뵽map������

				mOI.insert(make_pair(orderid, vOI));


			}

		}
	}
}

//ɾ��ȫ������
void Back_stage_management::DeleteAllOrder()
{
	cout << endl;
	cout << "     ����ɾ�����е��ı���Ϣ......" << endl;
	Sleep(3000);
	try
	{
		fstream fout("order.txt", ios::out | ios::trunc);

		fout.close();

	}
	catch (exception& e)
	{
		cout << "error happened:" << e.what() << endl;
	}
	cout << "-----------�����------------" << endl;
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

//ɾ��һ������
/*
void Back_stage_management::DeleteoneOrder()
{
	cout << "-----------ɾ������--------------" << endl;

	string temp = "0";

	//ɾ���Ķ������
	string deleteid;

	while (1)
	{
		cout << "��������Ҫɾ���Ķ�����ţ�" << endl;
		cin >> deleteid;

		if (deleteid[4] == 'i')
		{
			mOI.erase(deleteid);
			cout << "ɾ���ɹ�!" << endl;
			break;
		}
		else if (deleteid[4] == 'o')
		{
			mOO.erase(deleteid);
			cout << "ɾ���ɹ�!" << endl;
			break;
		}
		else
		{
			cout << "�������" << endl;
			break;
		}
	}
	

	//д���ļ�
	ofstream ofs;
	ofs.open("order.txt", ios::trunc);

	//���ļ�ʧ�ܣ������ļ�
	if (!ofs.is_open())
	{
		cout << "�޶�����Ϣ��" << endl;
		return;
	}

	//���뵽�ļ�
	vector<string> vtemp;
	for (map<string, vector<Orderin>>::iterator it = mOI.begin(); it != mOI.end(); it++)
	{
		vtemp.push_back(it->first);
	}
	for (map<string, vector<OrderOut>>::iterator it = mOO.begin(); it != mOO.end(); it++)
	{
		vtemp.push_back(it->first);
	}

	for (vector<string>::iterator mit = vtemp.begin(); mit != vtemp.end(); mit++)
	{
		int count = 0;
		//��ʳ
		for (map<string, vector<Orderin>>::iterator it = mOI.begin(); it != mOI.end(); it++)
		{
			if (it->first == *mit)
			{

				for (vector<Orderin>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
				{
					count++;
					ofs << "�������:" << it->first << "��Ʒ����Ϊ:" << mit->name << " ��Ʒ�۸�:" << mit->prise << " ��Ʒ����:" << mit->number << " ��Ʒ�ۿ�:" << mit->totalprice << mit->adda << endl;
				}

			}
		}

		//����
		for (map<string, vector<OrderOut>>::iterator it = mOO.begin(); it != mOO.end(); it++)
		{
			if (it->first == *mit)
			{
				for (vector<OrderOut>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
				{
					count++;
					ofs << "�������:" << it->first << "��Ʒ����Ϊ:" << mit->name << " ��Ʒ�۸�:" << mit->prise << " ��Ʒ����:" << mit->number << " ��Ʒ�ۿ�:" << mit->totalprice << mit->adda << endl;

				}
			}
		}

	}

}
*/
