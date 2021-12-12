#pragma once
#include"Interface.h"
#include"Back_stage_management.h"
using namespace std;

Interface::Interface()
{
	char* No[12] = {};//���
	char* name[12] = {};//���ȵ����֣����磺��������ʽ��
	int prise[12] = {};//�۸�
	int number[12] = {};//����
	char NO[20] = {};
	string Name[12] = {};
	string Prise[12] = {};
	char weight[20] = {};
	char temperature[20] = {};
	char suger[20] = {};
	char delivery[20] = {};
}

Interface::~Interface()
{
}

//�û���ͻ����Ա��½
void Interface::admin_login_OR_guest_choice()
{
	while (1)
	{
		ExMessage m;//���
		m = getmessage();//��ȡ������

		//�û����
		if (m.x >= 650 && m.x <= 850 && m.y >= 80 && m.y <= 180) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				cleardevice();
				//��ת����Ʒչʾ����
				show_product();
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
			}
		}
	}
}

//�����棨�û���ͻ����Ա��½��
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
	admin_login_OR_guest_choice();

	system("pause");
}

//��Ʒ������
void Interface::inferface_product()
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
			}
		}
		//����
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
			}
		}
		//�̲�
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
			}
		}
		//����
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
			}
		}
		//����
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
			}
		}
		//����������
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
			}
		}
	}
}

//ѡ�������
void Interface::specifications(int temp = 0)
{
	int temp1 = temp;
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(330, 200, 830, 540, 30, 30);// �����Բ�Ǿ���(�б߿�)
	fillroundrect(340, 280, 390, 305, 10, 10);
	fillroundrect(420, 280, 470, 305, 10, 10);
	fillroundrect(340, 330, 390, 355, 10, 10);
	fillroundrect(420, 330, 470, 355, 10, 10);
	fillroundrect(500, 330, 550, 355, 10, 10);
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
	outtextxy(345, 333, "����");
	outtextxy(425, 333, "�ӱ�");
	outtextxy(515, 333, "��");
	outtextxy(345, 383, "����");
	outtextxy(425, 383, "����");
	outtextxy(345, 433, "����");
	outtextxy(425, 433, "����");
	settextstyle(40, 0, "����");
	outtextxy(360, 493, "����");
	outtextxy(655, 493, "ȷ��֧��");

	//չʾҳ�� 
	while (1)
	{
		//coffee
		m = getmessage();//��ȡ������
		if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();
			}
		}

		//pay��ʽ
		else if (m.x >= 650 && m.x <= 850 && m.y >= 490 && m.y <= 540) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show(temp1);
				break;
			}
		}

		//��
		else if (m.x >= 340 && m.x <= 390 && m.y >= 280 && m.y <= 305) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(675, 285, 730, 315);
				settextstyle(25, 0, "����");
				setbkmode(TRANSPARENT);// ȥ�����ֱ���
				settextcolor(RGB(0, 0, 15));
				char weight[20] = { "��" };
				outtextxy(680, 285, weight);
			}
		}

		//С��
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
			}
		}

		//����
		else if (m.x >= 340 && m.x <= 390 && m.y >= 330 && m.y <= 355) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(675, 315, 730, 345);
				settextstyle(25, 0, "����");
				setbkmode(TRANSPARENT);// ȥ�����ֱ���
				settextcolor(RGB(0, 0, 15));
				char temperature[20] = "����";
				outtextxy(680, 315, temperature);
			}
		}

		//�ӱ�
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
			}
		}

		//��
		else if (m.x >= 500 && m.x <= 550 && m.y >= 330 && m.y <= 355) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(675, 315, 730, 345);
				settextstyle(25, 0, "����");
				setbkmode(TRANSPARENT);// ȥ�����ֱ���
				settextcolor(RGB(0, 0, 15));
				char temperature[20] = "��";
				outtextxy(680, 315, temperature);

			}
		}

		//����
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
			}

		}

		//����
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
			}
		}

		//����
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
			}
		}

		//��ʳ
		else if (m.x >= 420 && m.x <= 470 && m.y >= 430 && m.y <= 455) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(735, 375, 800, 405);
				settextstyle(25, 0, "����");
				setbkmode(TRANSPARENT);// ȥ�����ֱ���
				settextcolor(RGB(0, 0, 15));
				char delivery[20] = "��ʳ";
				outtextxy(740, 375, delivery);
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

//vipע�����
void Interface::VIP_register()
{
	ExMessage m;//���
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(400, 240, 850, 500, 30, 30);
	fillrectangle(500, 340, 800, 380);
	fillrectangle(500, 400, 800, 440);
	fillroundrect(780, 510, 940, 560, 30, 30);
	setlinecolor(BLACK);
	line(400, 290, 850, 290);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(540, 250, "��Աע��");
	outtextxy(410, 345, "�˺�");
	outtextxy(410, 405, "����");
	outtextxy(820, 520, "����");

	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 780 && m.x <= 940 && m.y >= 510 && m.y <= 560) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//������һ����
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
	fillrectangle(500, 400, 800, 440);
	fillroundrect(780, 510, 940, 560, 30, 30);
	setlinecolor(BLACK);
	line(400, 290, 850, 290);
	settextstyle(35, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(540, 250, "��Ա��¼");
	outtextxy(410, 345, "�˺�");
	outtextxy(410, 405, "����");
	outtextxy(820, 520, "����");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 780 && m.x <= 940 && m.y >= 510 && m.y <= 560) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//������һ����
			}
		}
	}
}

//��Ʒչʾ
void Interface::show_product()
{
	inferface_product();
	choice();
	system("pause");
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
				VIP_register();
			}
		}
		else if (m.x >= 630 && m.x <= 830 && m.y >= 300 && m.y <= 440)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_login();
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
			}
		}

		//��֭
		/*
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
			}
		}
		
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruitjuice_show();//��Ӧ����
			}
		}
		*/
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
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
	//for (int i = 1; i < 4; i++)//���뿧�ȵ���Ϣ
	//{
		//cout << "�������" << i << "�����ȵı�š����ơ��۸�������" << endl;
		//cin >> No[i] >> name[i] >> prise[i] >> number[i];
		//cout << "��" << i << "�����ȵ���Ϣ�ǣ�" << endl;
		//cout << "��ţ�" << No[i] << " " << "����" << name[i] << " " << "�۸�" << prise[i] << " " << "����" << number[i] << endl;

	//};
	//outtextxy(330, 200, No[1]);
	//outtextxy(330, 300, No[2]);
	//outtextxy(330, 400, No[3]);
	//outtextxy(350, 200, name[1]);
	//outtextxy(350, 300, name[2]);
	//outtextxy(350, 400, name[3]);
	//char c1[20],c2[20],c3[20],c4[20],c5[20],c6[20];
	//sprintf_s(c1, " % d", prise[1]);
	//sprintf_s(c2, " % d", prise[2]);
	//sprintf_s(c3, " % d", prise[3]);
	//outtextxy(350, 230, prise[1]);
	//outtextxy(350, 330, prise[2]);
	//outtextxy(350, 430, prise[3]);
	//sprintf_s(c4, " % d", number[1]);
	//sprintf_s(c5, " % d", number[2]);
	//sprintf_s(c6, " % d", number[3]);
	//outtextxy(330, 230, number[1]);
	//outtextxy(330, 330, number[2]);
	//outtextxy(330, 430, number[3]);
	settextstyle(25, 0, "����");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	outtextxy(330, 170, "No1");
	outtextxy(330, 270, "No2");
	outtextxy(330, 370, "No3");
	outtextxy(380, 170, "��ʽ����");
	outtextxy(380, 270, "��������");
	outtextxy(380, 370, "Ĩ������");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	outtextxy(320, 220, "���棺30");
	outtextxy(320, 320, "���棺30");
	outtextxy(320, 420, "���棺30");
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸�10Ԫ");
	outtextxy(800, 310, "�۸�13Ԫ");
	outtextxy(800, 410, "�۸�15Ԫ");
	string Name[1] = { "��ʽ����" };
	string Prise[1] = { "10Ԫ" };
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				int temp;
				clearrectangle(201, 151, 979, 579);
				temp = 1;
				specifications(temp);//��ת��ѡ�������
				break;


			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				int temp;
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
				temp = 2;
				specifications(temp);
				break;
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				int temp;
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
				temp = 3;
				specifications(temp);
				break;
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
			}
		}
		//����
		/*
			else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruitjuice_show();//��Ӧ����
			}
		}
		*/
		
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
			}
		}
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
	outtextxy(330, 170, "No4");
	outtextxy(330, 270, "No5");
	outtextxy(330, 370, "No6");
	outtextxy(380, 170, "��Ҭ����");
	outtextxy(380, 270, "���ನ���̲�");
	outtextxy(380, 370, "�����̲�");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	outtextxy(320, 220, "���棺40");
	outtextxy(320, 320, "���棺40");
	outtextxy(320, 420, "���棺40");
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸�17Ԫ");
	outtextxy(800, 310, "�۸�20Ԫ");
	outtextxy(800, 410, "�۸�15Ԫ");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
			}
		}
		/*
			else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruitjuice_show();//��Ӧ����
			}
		}
		*/
		
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
			}
		}
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
	outtextxy(330, 170, "No7");
	outtextxy(330, 270, "No8");
	outtextxy(330, 370, "No9");
	outtextxy(380, 170, "����ˮ��Ͱ");
	outtextxy(380, 270, "��ݮ���");
	outtextxy(380, 370, "�ʰ������");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	outtextxy(320, 220, "���棺45");
	outtextxy(320, 320, "���棺45");
	outtextxy(320, 420, "���棺45");
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸�25Ԫ");
	outtextxy(800, 310, "�۸�19Ԫ");
	outtextxy(800, 410, "�۸�19Ԫ");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();//��ת��ѡ�������
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
			}
		}
		/*
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruitjuice_show();//��Ӧ����
			}
		}

		*/
		
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
			}
		}
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
	outtextxy(330, 170, "No13");
	outtextxy(330, 270, "No14");
	outtextxy(330, 370, "No15");
	outtextxy(390, 170, "����ǧ�㵰��");
	outtextxy(390, 270, "��ݮ����");
	outtextxy(390, 370, "��������");
	setbkmode(TRANSPARENT);// ȥ�����ֱ���
	settextcolor(RGB(0, 0, 15));
	settextstyle(15, 0, "����");
	outtextxy(320, 220, "���棺30");
	outtextxy(320, 320, "���棺30");
	outtextxy(320, 420, "���棺30");
	settextstyle(24, 0, "����");
	outtextxy(800, 210, "�۸�10Ԫ");
	outtextxy(800, 310, "�۸�30Ԫ");
	outtextxy(800, 410, "�۸�16Ԫ");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 200 && m.x <= 980 && m.y >= 150 && m.y <= 250) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show(2);//��ת��֧������
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 250 && m.y <= 350) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show(2);//��ת��֧������
			}
		}
		else if (m.x >= 200 && m.x <= 980 && m.y >= 350 && m.y <= 450) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show(2);//��ת��֧������
			}

		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 150 && m.y <= 220) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				VIP_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 220 && m.y <= 290)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				coffee_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 290 && m.y <= 360)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				milktea_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruittea_show();//��Ӧ����
			}
		}
		/*
			else if (m.x >= 20 && m.x <= 200 && m.y >= 360 && m.y <= 430)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				fruitjuice_show();//��Ӧ����
			}
		}
		*/
		
		else if (m.x >= 20 && m.x <= 200 && m.y >= 430 && m.y <= 500)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				cake_show();//��Ӧ����
			}
		}
		else if (m.x >= 20 && m.x <= 200 && m.y >= 500 && m.y <= 580)//�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				inferface();//��Ӧ����
			}
		}
	}
	system("pause");
}

//֧������
void Interface::pay_show(int temp1 = 0)
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
	if (temp1 == 1)
	{
		settextstyle(25, 0, "����");
		setbkmode(TRANSPARENT);// ȥ�����ֱ���
		settextcolor(RGB(0, 0, 15));
		outtextxy(500, 300, Prise[1].c_str());
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
			}
		}
		else if (m.x >= 640 && m.x <= 820 && m.y >= 300 && m.y <= 440) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				Alipay_pay();
			}
		}
		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				specifications();
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
				order_show();
			}
		}

		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show();
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
				order_show();
			}
		}
		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				pay_show();
			}
		}
	}
}

//��������
void Interface::order_show()
{
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
	outtextxy(490, 205, "��������");
	outtextxy(365, 493, "����");
	outtextxy(705, 493, "��ȡ");
	while (1)
	{
		m = getmessage();//��ȡ������
		if (m.x >= 690 && m.x <= 790 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{

			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(350, 250, 800, 480);
				clearrectangle(690, 490, 790, 535);
				settextstyle(50, 0, "����");
				setbkmode(TRANSPARENT);// ȥ�����ֱ���
				settextcolor(RGB(0, 0, 15));
				outtextxy(350, 280, "ף���ò���죡");
				Sleep(500);
				inferface();
			}
		}
		else if (m.x >= 350 && m.x <= 450 && m.y >= 490 && m.y <= 535) //�������λ�� �Ƿ���������
		{
			if (m.message == WM_LBUTTONDOWN)
			{
				clearrectangle(201, 151, 979, 579);
				show_product();
			}
		}
	}
}