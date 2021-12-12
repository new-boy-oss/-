#pragma once
#include<iostream>
#include "Orderin.h"
#include "OrderOut.h"
#include "Order manage.h"
#include <vector> 
#include<map>
#include <fstream>
#include <string>
#include <windows.h>
#pragma warning(disable:4996)
using namespace std;
void OrderManage::displayOrder()//��ʾ��������ж���
{
	FILE* fp = fopen("test.txt", "r+");
	ofstream outfiles;
	vector<string> vs;//����string���͵ı���vs
	char buf[1024];
	while (fgets(buf, 1024, fp) != NULL)//һ��һ�еĶ�ȡ��Ϣ
	{
		vs.push_back(buf);//����ȡ������Ϣ��ӵ�buf����Ϣ��β��
		cout << buf << endl;
	}


}
void  OrderManage::SeekOrder()
{ 

	string temp = "0";
	UpdateOrder();
	cout << "��ӭ��ʹ�ò��Ҷ������ܣ�ע��:ֻ�ɲ��ҵ��ն���" << endl;
	cout << "��������Ҫ���ҵķ�ʽ��1�����ն�����Ų���  2.�˳�" << endl;
	int op;
	string seekid;
	string seeknumber;
	cin >> temp;
	if (temp == "1" || temp == "2")
	{
		op = int(temp[0] - '0');
	}
	else
	{
		cout << "�������" << endl;
		return;
	}
	//ʹ���������Ų���
	if (op == 1)
	{
		cout << "��������Ҫ���ҵĶ�����ţ�" << endl;
		cin >> seekid;
		if(seekid[4] == 'o'|| seekid[4] == 'i')
		{
			if (seekid[4] == 'o')
			{
				cout << "�˶�������������,������Ϣ����" << endl;
					for (map<string, vector<OrderOut>>::iterator it = mOO.begin(); it != mOO.end(); it++)
					{
						//cout << it->first << "it->firstin"; int count = 0;
						string y = it->first;
							if (y == seekid)
							{
								cout << "������ţ�" << it->first << endl;
								int count = 0;

								for (vector<OrderOut>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
								{
									count++;
									cout << "��Ʒ����Ϊ��" << mit->name << " ��Ʒ�۸�" << mit->prise << " ��Ʒ������" << mit->number << " �ܷ��ã�" << mit->totalprice << mit->adda << endl;
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
					//cout << it->first << "it->firstin";int count = 0;
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
			cout << "�������" << endl;
			return;
	   }
	}
}
void OrderManage::UpdateOrder()
{
	Orderin oi;
	OrderOut oo;
	ifstream ifs;
	mOI.clear();
	vOI.clear();
	mOO.clear();
	vOO.clear();
	vinfo.clear();
	ifs.open("test.txt", ios::in);
	//���ļ�ʧ�ܣ������ļ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	//cout << "----------------------------------------------------" << endl;
	//�򿪳ɹ�
	string line;//���ж�ȡ
	if (ifs)
	{
		while (getline(ifs, line))
		{

			vinfo.push_back(line);
		}
	}
	//cout << "----------------------------------------------------" << endl;
	//�ҵ�ÿһ����������ʼ��
	int temp[100];
	int count = 0;
	int c = 1;
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
	//cout << "----------------------------------------------------" << endl;
	temp[c] = vinfo.size() + 1;
	/*for (int i = 1; i <= c; i++)
	{
		cout << temp[i] << " ";
	}*/

	string orderid, foodname,adda;//�����������
	int foodprice, foodnum, totalprice;//��Ʒ�۸񡢲�Ʒ����
	int pos1, pos2;

	//cout << "---��������-------------------------------------------------" << endl;
	//����
	int i = 0;
	int o = 0;
	for (vector<string>::iterator it = vinfo.begin(); it != vinfo.end(); it++)
	{
		line = *it;
		//cout << line;
		//cout << "smdd" << endl;
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
				//cout << "----------------------" << endl;
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
	/*int l = 0;���Գ���
	for (map<string, vector<OrderOut>>::iterator it = mOO.begin(); it != mOO.end(); it++)
	{	
	
		cout << "������ţ�" << it->first << endl;
		int count = 0;
		for (vector<OrderOut>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
		{	
			l++;cout << l << "woyaokk1jic";
			count++;
			cout << "��Ʒ����Ϊ��" << mit->name << " ��Ʒ�۸�" << mit->prise << " ��Ʒ������" << mit->number << " �ܷ��ã�" << mit->totalprice << endl;
		}
	}*/
}
void  OrderManage::DeleteAllOrder()//ɾ������
{
	cout << endl;
	cout << "     ����ɾ�����е��ı���Ϣ......"<<endl;
	Sleep(3000);
	try
	{
		fstream fout("test.txt", ios::out | ios::trunc);

		fout.close();

	}
	catch (exception& e)
	{
		cout << "error happened:" << e.what() << endl;
	}
	cout << "          �����              " << endl;
}
void OrderManage::DeleteoneOrder()
{
	cout << "��ӭɾ������" << endl;

    string temp = "0";
	//ɾ���Ķ������
	string deleteid;

	cout << "��������Ҫɾ���Ķ�����ţ�" << endl;
	cin >> deleteid;

	if (deleteid[4] == 'i')
	{
		mOI.erase(deleteid);
	}
	else if (deleteid[4] == 'o')
	{
		mOO.erase(deleteid);
	}

	//д���ļ�

	ofstream ofs;
	ofs.open("test.txt", ios::trunc);
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
					ofs << "�������:" << it->first <<  "��Ʒ����Ϊ:" << mit->name << " ��Ʒ�۸�:" << mit->prise << " ��Ʒ����:" << mit->number << " ��Ʒ�ۿ�:" << mit->totalprice << mit->adda<< endl;
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
	cout << "ɾ���ɹ�!" << endl;
}