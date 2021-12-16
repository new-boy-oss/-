#pragma once
#include"Interface.h"
#include"Back_stage_management.h"
#include"VIP.h"
using namespace std;

//
Interface::Interface()
{
	//
}

Interface::~Interface()
{
}

//������
void Interface::inferface()
{
	ExMessage m;//���
	IMAGE img;// ����ͼ�����
	initgraph(1000, 600);
	loadimage(&img, _T("����.jpg"), 1000, 600);//����
	putimage(0, 0, &img);
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(650, 80, 850, 180, 30, 30);
	fillroundrect(650, 240, 850, 340, 30, 30);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(660, 110, "�û����");
	outtextxy(660, 270, "����Ա��¼");


	//�û����or����Ա��½
	while (1)
	{
		m = getmessage();//��ȡ������

		//�û����
		if (m.x >= 650 && m.x <= 850 && m.y >= 80 && m.y <= 180) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				cleardevice();
				//��ת����Ʒչʾ����
				show_product();
				break;
			}
		}
		//����Ա��½
		else if (m.x >= 650 && m.x <= 850 && m.y >= 240 && m.y <= 340) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				closegraph();
				initgraph(800, 600, SHOWCONSOLE);//��ת������Ա���ƽ���
				closegraph();
				//����Ա��½���濪����ͼ�λ�����ر�
				Back_stage_management a;
				a.manage_login();
				break;
			}
		}
	}
	system("pause");
}

//��Ʒ������
void Interface::inferface2()
{
	IMAGE img;
	initgraph(1000, 600);
	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(BLACK);
	line(20, 15, 980, 15);
	line(20, 15, 20, 580);
	line(20, 580, 980, 580);
	line(980, 580, 980, 15);
	line(20, 150, 980, 150);
	loadimage(&img, _T("��ӭ����.jpg"), 290, 120);
	putimage(200, 25, &img);
	loadimage(&img, _T("coffee.jpg"), 290, 120);
	putimage(500, 25, &img);
	line(200, 150, 200, 580);
	line(20, 220, 200, 220);
	line(20, 290, 200, 290);
	line(20, 360, 200, 360);
	line(20, 430, 200, 430);
	line(20, 500, 200, 500);
	settextstyle(45, 0, _T("����"));
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(60, 170, "��Ա");
	outtextxy(60, 240, "����");
	outtextxy(60, 310, "�̲�");
	outtextxy(60, 380, "����");
	outtextxy(60, 450, "����");
	outtextxy(60, 520, "����");

}

//���ر��
string Interface::getNo()
{
	if (temp == 1)
	{
		return pro[0].No;

	}
	else if (temp == 2)
	{
		return pro[1].No;
	}
	else if (temp == 3)
	{
		return pro[2].No;
	}
	else if (temp == 4)
	{
		return pro[3].No;
	}
	else if (temp == 5)
	{
		return pro[4].No;
	}
	else if (temp == 6)
	{
		return pro[5].No;
	}
	else if (temp == 7)
	{
		return pro[6].No;
	}
	else if (temp == 8)
	{
		return pro[7].No;
	}
	else if (temp == 9)
	{
		return pro[8].No;
	}
	else if (temp == 10)
	{
		return pro[9].No;

	}
	else if (temp == 11)
	{
		return pro[10].No;
	}
	else if (temp == 12)
	{
		return pro[11].No;
	}
}

//��������
string Interface::getName()
{
	if (temp == 1)
	{
		return pro[0].Name;

	}
	else if (temp == 2)
	{
		return pro[1].Name;
	}
	else if (temp == 3)
	{
		return pro[2].Name;
	}
	else if (temp == 4)
	{
		return pro[3].Name;
	}
	else if (temp == 5)
	{
		return pro[4].Name;
	}
	else if (temp == 6)
	{
		return pro[5].Name;
	}
	else if (temp == 7)
	{
		return pro[6].Name;
	}
	else if (temp == 8)
	{
		return pro[7].Name;
	}
	else if (temp == 9)
	{
		return pro[8].Name;
	}
	else if (temp == 10)
	{
		return pro[9].Name;

	}
	else if (temp == 11)
	{
		return pro[10].Name;
	}
	else if (temp == 12)
	{
		return pro[11].Name;
	}
}

//���ؼ۸�
int Interface::getPrise()
{
	if (temp == 1)
	{
		return pro[0].prise;

	}
	else if (temp == 2)
	{
		return pro[1].prise;
	}
	else if (temp == 3)
	{
		return pro[2].prise;
	}
	else if (temp == 4)
	{
		return pro[3].prise;
	}
	else if (temp == 5)
	{
		return pro[4].prise;
	}
	else if (temp == 6)
	{
		return pro[5].prise;
	}
	else if (temp == 7)
	{
		return pro[6].prise;
	}
	else if (temp == 8)
	{
		return pro[7].prise;
	}
	else if (temp == 9)
	{
		return pro[8].prise;
	}
	else if (temp == 10)
	{
		return pro[9].prise;

	}
	else if (temp == 11)
	{
		return pro[10].prise;
	}
	else if (temp == 12)
	{
		return pro[11].prise;
	}
}

//���ع��
string Interface::getspecifications()
{
	if (temp1 == 1 && temp2 == 1 && temp3 == 1)
	{
		return spe[0].specifications;

	}
	else if (temp1 == 1 && temp2 == 1 && temp3 == 2)
	{
		return spe[2].specifications;
	}
	else if (temp1 == 1 && temp2 == 2 && temp3 == 1)
	{
		return spe[4].specifications;
	}
	else if (temp1 == 1 && temp2 == 2 && temp3 == 2)
	{
		return spe[6].specifications;
	}
	else if (temp1 == 2 && temp2 == 1 && temp3 == 1)
	{
		return spe[8].specifications;
	}
	else if (temp1 == 2 && temp2 == 1 && temp3 == 2)
	{
		return spe[10].specifications;
	}
	else if (temp1 == 2 && temp2 == 2 && temp3 == 1)
	{
		return spe[12].specifications;
	}
	else if (temp1 == 2 && temp2 == 2 && temp3 == 2)
	{
		return spe[14].specifications;
	}
	else
	{
		return spe[16].specifications;
	}
}

//�������ͷ�ʽ
string Interface::getdelivery()
{
	if (temp4 == 1)
	{
		return spe[0].delivery;

	}
	else if (temp4 == 2)
	{
		return spe[1].delivery;
	}
}

//ѡ����ת����
void Interface::choice()
{
	ExMessage m;//���
	while (1)
	{
		m = getmessage();//��ȡ������
		//��Ա��ѡ���¼����ע�ᣩ
		if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
				break;
			}
		}
		//����
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
				break;
			}
		}
		//�̲�
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
				break;
			}
		}
		//����
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
				break;
			}
		}

		//����
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
				break;
			}
		}
		//����������
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
				break;
			}
		}
	}
}


//ѡ�������
void Interface::specifications(int a)
{
	ExMessage m;//���
	//��ѡ�񿧷ȡ��̲衢����ʱ���й��ѡ��
	if (temp == 1 || temp == 2 || temp == 3 || temp == 4 || temp == 5 || temp == 6 || temp == 7 || temp == 8 || temp == 9)
	{

		setlinecolor(BLACK);
		setfillcolor(WHITE);
		fillroundrect(330, 200, 830, 540, 30, 30);
		fillroundrect(340, 280, 390, 305, 10, 10);
		fillroundrect(420, 280, 470, 305, 10, 10);
		fillroundrect(340, 330, 390, 355, 10, 10);
		fillroundrect(420, 330, 470, 355, 10, 10);
		fillroundrect(340, 380, 390, 405, 10, 10);
		fillroundrect(420, 380, 470, 405, 10, 10);
		fillroundrect(340, 430, 390, 455, 10, 10);
		fillroundrect(420, 430, 470, 455, 10, 10);
		fillroundrect(350, 490, 450, 535, 15, 15);
		fillroundrect(650, 490, 820, 535, 15, 15);
		setlinecolor(BLACK);
		line(330, 240, 830, 240);
		line(330, 470, 830, 470);
		line(600, 240, 600, 470);
		line(600, 270, 830, 270);
		settextstyle(35, 0, "����");
		setbkmode(TRANSPARENT);// ȥ�����ֱ���
		settextcolor(RGB(0, 0, 15));
		outtextxy(490, 205, "ѡ����");
		settextstyle(30, 0, "����");
		outtextxy(650, 240, "��ѡ���");
		settextstyle(20, 0, "����");
		outtextxy(340, 260, "����");
		outtextxy(340, 310, "�¶�");
		outtextxy(340, 360, "�Ƕ�");
		outtextxy(340, 410, "���ͷ�ʽ");
		outtextxy(345, 283, "��");
		outtextxy(425, 283, "С��");
		outtextxy(345, 333, "��");
		outtextxy(425, 333, "�ӱ�");
		outtextxy(345, 383, "����");
		outtextxy(425, 383, "����");
		outtextxy(345, 433, "����");
		outtextxy(425, 433, "����");
		settextstyle(40, 0, "����");
		outtextxy(360, 493, "����");
		outtextxy(655, 493, "ȷ��֧��");
		while (1)
		{
			m = getmessage();//��ȡ������
			if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
			{

				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(201, 151, 979, 579);
					coffee_show();
					break;
				}
			}
			else if (m.x >= 650 && m.x <= 850 && m.y >= 490 && m.y <= 540) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(201, 151, 979, 579);
					pay_show(a);
					break;
				}
			}
			else if (m.x >= 340 && m.x <= 390 && m.y >= 280 && m.y <= 305) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(675, 285, 730, 315);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char weight[20] = "��";
					outtextxy(680, 285, weight);
					temp1 = 1;

				}
			}
			else if (m.x >= 420 && m.x <= 470 && m.y >= 280 && m.y <= 305) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(675, 285, 730, 315);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char weight[20] = "С��";
					outtextxy(680, 285, weight);
					temp1 = 2;
				}
			}
			else if (m.x >= 340 && m.x <= 390 && m.y >= 330 && m.y <= 355) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(675, 315, 730, 345);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char temperature[20] = "��";
					outtextxy(680, 315, temperature);
					temp2 = 1;
				}
			}
			else if (m.x >= 420 && m.x <= 470 && m.y >= 330 && m.y <= 355) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(675, 315, 730, 345);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char temperature[20] = "�ӱ�";
					outtextxy(680, 315, temperature);
					temp2 = 2;
				}
			}
			else if (m.x >= 340 && m.x <= 390 && m.y >= 380 && m.y <= 405) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(675, 345, 730, 375);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char suger[20] = "����";
					outtextxy(680, 345, suger);
					temp3 = 1;
				}

			}
			else if (m.x >= 420 && m.x <= 470 && m.y >= 380 && m.y <= 405) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(675, 345, 730, 375);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char suger[20] = "����";
					outtextxy(680, 345, suger);
					temp3 = 2;
				}
			}
			else if (m.x >= 340 && m.x <= 390 && m.y >= 430 && m.y <= 455) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(735, 375, 800, 405);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char delivery[20] = "����";
					outtextxy(740, 375, delivery);
					temp4 = 1;
				}
			}
			else if (m.x >= 420 && m.x <= 470 && m.y >= 430 && m.y <= 455) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(735, 375, 800, 405);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char delivery[20] = "����";
					outtextxy(740, 375, delivery);
					temp4 = 2;
				}
			}
			settextstyle(30, 0, "����");
			setbkmode(TRANSPARENT);// ȥ�����ֱ���
			settextcolor(RGB(0, 0, 15));
			outtextxy(600, 280, "������");
			outtextxy(600, 310, "�¶ȣ�");
			outtextxy(600, 340, "�Ƕȣ�");
			outtextxy(600, 370, "���ͷ�ʽ��");
		}
	}
	//��ѡ�񵰸��ʱ��û�й��
	else if (temp == 10 || temp == 11 || temp == 12)
	{
		setlinecolor(BLACK);
		setfillcolor(WHITE);
		fillroundrect(330, 200, 830, 540, 30, 30);
		fillroundrect(340, 430, 390, 455, 10, 10);
		fillroundrect(420, 430, 470, 455, 10, 10);
		fillroundrect(350, 490, 450, 535, 15, 15);
		fillroundrect(650, 490, 820, 535, 15, 15);
		setlinecolor(BLACK);
		line(330, 240, 830, 240);
		line(330, 470, 830, 470);
		line(600, 240, 600, 470);
		line(600, 270, 830, 270);
		settextstyle(35, 0, "����");
		setbkmode(TRANSPARENT);// ȥ�����ֱ���
		settextcolor(RGB(0, 0, 15));
		outtextxy(490, 205, "ѡ����");
		settextstyle(30, 0, "����");
		outtextxy(650, 240, "��ѡ���");
		settextstyle(20, 0, "����");
		outtextxy(340, 410, "���ͷ�ʽ");
		outtextxy(345, 433, "����");
		outtextxy(425, 433, "����");
		settextstyle(40, 0, "����");
		outtextxy(360, 493, "����");
		outtextxy(655, 493, "ȷ��֧��");
		while (1)
		{
			m = getmessage();//��ȡ������
			if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
			{

				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(201, 151, 979, 579);
					coffee_show();
					break;
				}
			}
			else if (m.x >= 650 && m.x <= 850 && m.y >= 490 && m.y <= 540) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(201, 151, 979, 579);
					pay_show(a);
					break;
				}
			}
			else if (m.x >= 340 && m.x <= 390 && m.y >= 430 && m.y <= 455) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(735, 375, 800, 405);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char delivery[20] = "����";
					outtextxy(740, 375, delivery);
					temp4 = 1;
				}
			}
			else if (m.x >= 420 && m.x <= 470 && m.y >= 430 && m.y <= 455) //�������λ�� �Ƿ���������
			{
				if (m.message == WM_LBUTTONDOWN)
				{
					clearrectangle(735, 375, 800, 405);
					settextstyle(25, 0, "����");
					setbkmode(TRANSPARENT);// ȥ�����ֱ���
					settextcolor(RGB(0, 0, 15));
					char delivery[20] = "����";
					outtextxy(740, 375, delivery);
					temp4 = 2;
				}
			}
			settextstyle(30, 0, "����");
			setbkmode(TRANSPARENT);// ȥ�����ֱ���
			settextcolor(RGB(0, 0, 15));
			outtextxy(600, 370, "���ͷ�ʽ��");
		}
	}
	system("pause");

}

//vipע�����   
void Interface::VIP_register()
{
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(400, 240, 850, 500, 30, 30);
	fillrectangle(500, 340, 800, 380);
	//fillrectangle(500, 400, 800, 440);
	fillroundrect(780, 510, 940, 560, 30, 30);
	setlinecolor(BLACK);
	//line(400, 290, 850, 290);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(540, 250, "��Աע��");
	//outtextxy(410, 345, "�˺�");
	//outtextxy(410, 405, "����");
	outtextxy(820, 520, "����");
	outtextxy(500, 345, "��ʼ");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 780 && m.x <= 940 && m.y >= 510 && m.y <= 560) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);//��վ�������
				VIP_show();//������һ����
				break;
			}
		}
		if (m.x >= 500 && m.x <= 800 && m.y >= 340 && m.y <= 380) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{

				VIP a;
				a.vip_register();
				show_product();
				break;
			}
		}
	}


}

//vip��¼����   
void Interface::VIP_login()
{
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(400, 240, 850, 500, 30, 30);
	fillrectangle(500, 340, 800, 380);
	//fillrectangle(500, 400, 800, 440);
	fillroundrect(780, 510, 940, 560, 30, 30);
	setlinecolor(BLACK);
	//line(400, 290, 850, 290);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(540, 250, "��Աע��");
	//outtextxy(410, 345, "�˺�");
	//outtextxy(410, 405, "����");
	outtextxy(820, 520, "����");
	outtextxy(500, 345, "��ʼ");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 780 && m.x <= 940 && m.y >= 510 && m.y <= 560) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);//��վ�������
				VIP_show();//������һ����
				break;
			}
		}
		if (m.x >= 500 && m.x <= 800 && m.y >= 340 && m.y <= 380) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				VIP a;
				a.vip_login();
				show_product2();
				break;
			}
		}
	}
}

//��Ʒչʾ
void Interface::show_product()
{
	inferface2();
	choice();
	system("pause");
}

//��Ա��Ʒ�����
void Interface::show_product2()
{
	inferface2();
	settextstyle(15, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(800, 80, "��ӭ���Ļ�Ա");
	outtextxy(800, 120, "��������ȫ�����۵��Żݣ�");
	for (int i = 0; i < 12; i++)//�ṹ����۸�*0.8
	{
		pro[i].prise = pro[i].prise * 0.8;
	}
	choice();
}

//vipѡ���½orע��
void Interface::VIP_show()
{
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(330, 300, 530, 440, 30, 30);
	fillroundrect(630, 300, 830, 440, 30, 30);
	settextstyle(50, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(335, 340, "��Աע��");
	outtextxy(635, 340, "��Ա��¼");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 330 && m.x <= 530 && m.y >= 300 && m.y <= 440) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_register();//vipע��
				break;
			}
		}
		else if (m.x >= 630 && m.x <= 830 && m.y >= 300 && m.y <= 440)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_login();//vip��¼
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
				break;
			}
		}

		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
				break;
			}
		}
	}
	system("pause");
}

//����
void Interface::coffee_show()
{
	ExMessage m;//���
	IMAGE img2, img3, img4;
	setlinecolor(BLACK);
	line(200, 250, 980, 250);
	line(200, 350, 980, 350);
	line(200, 450, 980, 450);
	line(300, 150, 300, 450);
	loadimage(&img2, _T("��ʽ����.jpg"), 99, 99);
	loadimage(&img3, _T("��������.jpg"), 99, 99);
	loadimage(&img4, _T("Ĩ������.jpg"), 99, 99);
	putimage(201, 151, &img2);
	putimage(201, 251, &img3);
	putimage(201, 351, &img4);
	settextstyle(25, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(330, 170, pro[0].No.c_str());
	outtextxy(330, 270, pro[1].No.c_str());
	outtextxy(330, 370, pro[2].No.c_str());
	outtextxy(390, 170, pro[0].Name.c_str());
	outtextxy(390, 270, pro[1].Name.c_str());
	outtextxy(390, 370, pro[2].Name.c_str());
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	char c1[20], c2[20], c3[20], c4[20], c5[20], c6[20];
	sprintf_s(c1, " % d", pro[0].number);
	sprintf_s(c2, " % d", pro[1].number);
	sprintf_s(c3, " % d", pro[2].number);
	sprintf_s(c4, " % d", pro[0].prise);
	sprintf_s(c5, " % d", pro[1].prise);
	sprintf_s(c6, " % d", pro[2].prise);
	outtextxy(320, 220, "���棺 ");
	outtextxy(320, 320, "���棺 ");
	outtextxy(320, 420, "���棺 ");
	outtextxy(350, 220, c1);
	outtextxy(350, 320, c2);
	outtextxy(350, 420, c3);
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸� ");
	outtextxy(800, 310, "�۸� ");
	outtextxy(800, 410, "�۸� ");
	outtextxy(840, 210, c4);
	outtextxy(840, 310, c5);
	outtextxy(840, 410, c6);
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 1;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 2;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 3;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
				break;
			}
		}

		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
				break;
			}

		}
		temp = 0;
	}
	system("pause");
}

//�̲�
void Interface::milktea_show()
{
	ExMessage m;//���
	IMAGE img2, img3, img4;
	setlinecolor(BLACK);
	line(200, 250, 980, 250);
	line(200, 350, 980, 350);
	line(200, 450, 980, 450);
	line(300, 150, 300, 450);
	loadimage(&img2, _T("��Ҭ����.jpg"), 99, 99);
	loadimage(&img3, _T("���ನ���̲�.jpg"), 99, 99);
	loadimage(&img4, _T("�����̲�.jpg"), 99, 99);
	putimage(201, 151, &img2);
	putimage(201, 251, &img3);
	putimage(201, 351, &img4);
	settextstyle(25, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(330, 170, pro[3].No.c_str());
	outtextxy(330, 270, pro[4].No.c_str());
	outtextxy(330, 370, pro[5].No.c_str());
	outtextxy(390, 170, pro[3].Name.c_str());
	outtextxy(390, 270, pro[4].Name.c_str());
	outtextxy(390, 370, pro[5].Name.c_str());
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	char c1[20], c2[20], c3[20], c4[20], c5[20], c6[20];
	sprintf_s(c1, " % d", pro[3].number);
	sprintf_s(c2, " % d", pro[4].number);
	sprintf_s(c3, " % d", pro[5].number);
	sprintf_s(c4, " % d", pro[3].prise);
	sprintf_s(c5, " % d", pro[4].prise);
	sprintf_s(c6, " % d", pro[5].prise);
	outtextxy(320, 220, "���棺 ");
	outtextxy(320, 320, "���棺 ");
	outtextxy(320, 420, "���棺 ");
	outtextxy(350, 220, c1);
	outtextxy(350, 320, c2);
	outtextxy(350, 420, c3);
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸� ");
	outtextxy(800, 310, "�۸� ");
	outtextxy(800, 410, "�۸� ");
	outtextxy(840, 210, c4);
	outtextxy(840, 310, c5);
	outtextxy(840, 410, c6);
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 4;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 5;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 6;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
				break;
			}
		}

		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
				break;
			}
		}
		temp = 0;
	}
	system("pause");
}

//����
void Interface::fruittea_show()
{
	ExMessage m;//���
	IMAGE img2, img3, img4;
	setlinecolor(BLACK);
	line(200, 250, 980, 250);
	line(200, 350, 980, 350);
	line(200, 450, 980, 450);
	line(300, 150, 300, 450);
	loadimage(&img2, _T("����ˮ��Ͱ.jpg"), 99, 99);
	loadimage(&img3, _T("��ݮ���.jpg"), 99, 99);
	loadimage(&img4, _T("�ʰ������.jpg"), 99, 99);
	putimage(201, 151, &img2);
	putimage(201, 251, &img3);
	putimage(201, 351, &img4);
	settextstyle(25, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(330, 170, pro[6].No.c_str());
	outtextxy(330, 270, pro[7].No.c_str());
	outtextxy(330, 370, pro[8].No.c_str());
	outtextxy(390, 170, pro[6].Name.c_str());
	outtextxy(390, 270, pro[7].Name.c_str());
	outtextxy(390, 370, pro[8].Name.c_str());
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	char c1[20], c2[20], c3[20], c4[20], c5[20], c6[20];
	sprintf_s(c1, " % d", pro[6].number);
	sprintf_s(c2, " % d", pro[7].number);
	sprintf_s(c3, " % d", pro[8].number);
	sprintf_s(c4, " % d", pro[6].prise);
	sprintf_s(c5, " % d", pro[7].prise);
	sprintf_s(c6, " % d", pro[8].prise);
	outtextxy(320, 220, "���棺 ");
	outtextxy(320, 320, "���棺 ");
	outtextxy(320, 420, "���棺 ");
	outtextxy(350, 220, c1);
	outtextxy(350, 320, c2);
	outtextxy(350, 420, c3);
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸� ");
	outtextxy(800, 310, "�۸� ");
	outtextxy(800, 410, "�۸� ");
	outtextxy(840, 210, c4);
	outtextxy(840, 310, c5);
	outtextxy(840, 410, c6);
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 7;
				specifications(getPrise());//��ת��ѡ�������
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 8;
				specifications(getPrise());//��ת��ѡ�������		
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 9;
				specifications(getPrise());//��ת��ѡ�������			
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
				break;
			}
		}

		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
				break;
			}
		}
		temp = 0;
	}
	system("pause");
}

//����
void Interface::cake_show()
{
	ExMessage m;//���
	IMAGE img2, img3, img4;
	setlinecolor(BLACK);
	line(200, 250, 980, 250);
	line(200, 350, 980, 350);
	line(200, 450, 980, 450);
	line(300, 150, 300, 450);
	loadimage(&img2, _T("����ǧ�㵰��.jpg"), 99, 99);
	loadimage(&img3, _T("��ݮ����.jpg"), 99, 99);
	loadimage(&img4, _T("��������.jpg"), 99, 99);
	putimage(201, 151, &img2);
	putimage(201, 251, &img3);
	putimage(201, 351, &img4);
	settextstyle(25, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(330, 170, pro[9].No.c_str());
	outtextxy(330, 270, pro[10].No.c_str());
	outtextxy(330, 370, pro[11].No.c_str());
	outtextxy(400, 170, pro[9].Name.c_str());
	outtextxy(400, 270, pro[10].Name.c_str());
	outtextxy(400, 370, pro[11].Name.c_str());
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	char c1[20], c2[20], c3[20], c4[20], c5[20], c6[20];
	sprintf_s(c1, " % d", pro[9].number);
	sprintf_s(c2, " % d", pro[10].number);
	sprintf_s(c3, " % d", pro[11].number);
	sprintf_s(c4, " % d", pro[9].prise);
	sprintf_s(c5, " % d", pro[10].prise);
	sprintf_s(c6, " % d", pro[11].prise);
	outtextxy(320, 220, "���棺 ");
	outtextxy(320, 320, "���棺 ");
	outtextxy(320, 420, "���棺 ");
	outtextxy(350, 220, c1);
	outtextxy(350, 320, c2);
	outtextxy(350, 420, c3);
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸� ");
	outtextxy(800, 310, "�۸� ");
	outtextxy(800, 410, "�۸� ");
	outtextxy(840, 210, c4);
	outtextxy(840, 310, c5);
	outtextxy(840, 410, c6);
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 10;
				specifications(getPrise());
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 11;
				specifications(getPrise());
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				temp = 12;
				specifications(getPrise());
				break;
			}

		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
				break;
			}
		}

		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
				break;
			}
		}
		temp = 0;
	}
	system("pause");
}

//֧������
void Interface::pay_show(int a)
{
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(330, 200, 830, 540, 30, 30);
	fillroundrect(340, 340, 520, 480, 30, 30);
	fillroundrect(640, 340, 820, 480, 30, 30);
	fillroundrect(350, 490, 450, 535, 15, 15);
	setlinecolor(BLACK);
	line(330, 240, 830, 240);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(490, 205, "֧������");
	outtextxy(450, 250, "��ѡ��֧����ʽ");
	outtextxy(350, 380, "΢��֧��");
	outtextxy(645, 380, "֧����֧��");
	outtextxy(360, 493, "����");
	settextstyle(25, 0, "����");
	outtextxy(400, 300, "����Ҫ֧����");
	outtextxy(580, 300, "Ԫ");
	char c1[20];//a�Ǵ���������Ʒ�۸�
	sprintf_s(c1, " % d", a);
	outtextxy(520, 300, c1);
	if (temp4 == 1)
	{
		outtextxy(610, 300, "+3Ԫ���ͷ�");
	}
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 340 && m.x <= 520 && m.y >= 300 && m.y <= 440) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				WeChat_pay();
				break;
			}
		}
		else if (m.x >= 640 && m.x <= 820 && m.y >= 300 && m.y <= 440) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				Alipay_pay();
				break;
			}
		}
		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications(getPrise());
				break;
			}
		}
	}
}

//΢��֧��
void Interface::WeChat_pay()
{
	IMAGE img;
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(330, 200, 830, 540, 30, 30);
	fillroundrect(350, 490, 450, 535, 15, 15);
	fillroundrect(690, 490, 790, 535, 15, 15);
	setlinecolor(BLACK);
	line(330, 240, 830, 240);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(490, 205, "΢��֧��");
	outtextxy(430, 250, "֧���ɹ�����ȷ��");
	outtextxy(365, 493, "����");
	outtextxy(705, 493, "ȷ��");
	loadimage(&img, _T("΢��֧��.jpg"), 170, 170);//����
	putimage(480, 300, &img);
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 690 && m.x <= 790 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				order_show(getNo(), getName(), getPrise(), getspecifications(), getdelivery());//��������
				break;
			}
		}

		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show(getPrise());//֧������
				break;
			}
		}
	}
}

//֧����֧��
void Interface::Alipay_pay()
{
	IMAGE img;
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(330, 200, 830, 540, 30, 30);
	fillroundrect(350, 490, 450, 535, 15, 15);
	fillroundrect(690, 490, 790, 535, 15, 15);
	setlinecolor(BLACK);
	line(330, 240, 830, 240);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(490, 205, "֧����֧��");
	outtextxy(430, 250, "֧���ɹ�����ȷ��");
	outtextxy(365, 493, "����");
	outtextxy(705, 493, "ȷ��");
	loadimage(&img, _T("֧����֧��.jpg"), 170, 170);//����
	putimage(480, 300, &img);
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 690 && m.x <= 790 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				order_show(getNo(), getName(), getPrise(), getspecifications(), getdelivery());
				break;
			}
		}
		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show(getPrise());
				break;
			}
		}
	}
}

//��������
void Interface::order_show(string a, string b, int c, string d, string e)//����Ʒ�ı�š����֡��۸����ϡ����ͷ�������
{
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(330, 200, 830, 540, 30, 30);
	fillroundrect(350, 490, 450, 535, 15, 15);
	fillroundrect(690, 490, 790, 535, 15, 15);
	setlinecolor(BLACK);
	line(330, 240, 830, 240);
	line(330, 440, 830, 440);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(490, 205, "��������");
	outtextxy(365, 493, "����");
	outtextxy(705, 493, "��ȡ");
	settextstyle(25, 0, "����");
	outtextxy(350, 250, "���Ķ���Ϊ��");
	settextstyle(25, 0, "����");
	outtextxy(360, 285, a.c_str());//a����Ʒ���
	outtextxy(430, 285, b.c_str());//b����Ʒ����
	settextstyle(20, 0, "����");
	outtextxy(600, 285, d.c_str());//d������
	outtextxy(600, 315, "���ͷ�ʽΪ��");
	outtextxy(730, 315, e.c_str());//e�����ͷ���
	if (temp4 == 2)
	{
		settextstyle(40, 0, "����");
		char c3[20];
		sprintf_s(c3, " % d", c);//c�Ǽ۸�
		outtextxy(660, 390, c3);
		outtextxy(740, 390, "Ԫ");
	}
	else if (temp4 == 1)
	{
		int aa;
		settextstyle(40, 0, "����");
		char c3[20];
		aa = c + 3;
		sprintf_s(c3, " % d", aa);//aa�Ǽ������ͷѵļ۸�
		outtextxy(660, 390, c3);
		outtextxy(740, 390, "Ԫ");
		settextstyle(20, 0, "����");
		outtextxy(600, 345, "+3Ԫ���ͷ�");
	}
	settextstyle(25, 0, "����");
	outtextxy(360, 390, "���Ķ�������������...");
	Sleep(4000);
	clearrectangle(350, 390, 650, 430);
	outtextxy(360, 390, "���Ķ�������ɣ�����ȡ��");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 690 && m.x <= 790 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(320, 190, 835, 545);
				setlinecolor(BLACK);
				setfillcolor(WHITE);
				fillroundrect(330, 200, 830, 540, 30, 30);
				settextstyle(50, 0, "����");
				setbkmode(TRANSPARENT);// ȥ�����ֱ���
				settextcolor(RGB(0, 0, 15));
				outtextxy(350, 280, "ף���ò���죡");
				Sleep(1000);
				inferface();
				break;
			}
		}
		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				show_product();
				break;
			}
		}
	}
}






