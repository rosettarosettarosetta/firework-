#pragma once
#include<graphics.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include"Textprint.h"
class Onebyone :public Textprint//��һ��һ������
{
public:
	Onebyone(wchar_t a[]) :Textprint(a)
	{}
	virtual void print()
	{
		srand((unsigned int)time(NULL));
		int x = 150;
		int y = 250;
		for (int i = 0; getstr(i); i += 1)
		{
			settextcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
			settextstyle(30, 0, _T("��������"));
			outtextxy(x, y, getstr(i));
			x += 40;
			if (x >= 1000)
			{
				x = 10;
				y += 100;
			}
			Sleep(100);
		}
		Sleep(1800);
		int flag = 0;
		do {
			putpixel(rand() % 1080, rand() % 720, 0);
			flag++;
		} while (flag <= 810000);
		cleardevice();
	}
};

class Bothsides :public Textprint//�ִ����߹���
{
public:
	Bothsides(wchar_t a[]) :Textprint(a)
	{}
	virtual void print()
	{
		settextcolor(MAGENTA);
		int x = 20;
		int y = 20;
		for (int i = 0; i < 30; i++)
		{
			HRGN rgn = CreateRectRgn(0, 180, 1080, 360);
			setcliprgn(rgn);
			clearcliprgn();
			//cleardevice();
			//setbkcolor(BLUE);
			settextstyle(25, 0, _T("��������"));
			//settextstyle(35, 0, _T("��������"));
			outtextxy(y, 220, _T("��������202221147036"));
			outtextxy(1080 - x, 270, _T("�ڶ�ģ�飺Logo����"));
			x += 21;
			if (i < 12)
				y += 25;
			Sleep(15);
		}
		Sleep(1500);
	}
};

class Revolve :public Textprint//��ѭ����������
{
public:
	Revolve(wchar_t a[]) :Textprint(a)
	{}
	virtual void print()
	{
		int redius = 300;
		int coordx = 1080 / 2 + 250;
		int coordy = 720 / 2 + 50;
		const double pai = 3.1415926;
		settextcolor(YELLOW);
		int num = 60;
		double n = 1;
		for (int i = 0; i < 30; i++)
		{
			double hudu = (pai / 180 * i * (360 / num));
			int x = (int)(coordx + cos(hudu) * redius);
			int y = (int)(coordy - sin(hudu) * redius);
			cleardevice();
			//setbkcolor(BLUE);
			settextstyle(int(10 + n), 0, _T("��������"));
			n += 0.5;
			//n += 1;
			outtextxy(x - 170, y - 300, _T("����� 202221147045"));
			outtextxy(x - 45, y - 250, _T("��һģ�飺�̻����Ű�����"));
			//outtextxy(x - 170, y - 100, _T("����� 202221147045"));
			//outtextxy(x - 45, y - 50, _T("��һģ�飺�̻����Ű�����"));
			Sleep(50);

		}
		Sleep(1500);
	}
};

class Deeper :public Textprint//�����𽥼���
{
public:
	Deeper(wchar_t a[]) :Textprint(a)
	{}
	virtual void print()
	{
		//COLORREF bk = getbkcolor();
		COLORREF bk = BLUE;
		COLORREF te = GREEN;
		int bkcolor[3] = { GetRValue(bk),GetGValue(bk) ,GetBValue(bk) };
		int tecolor[3] = { GetRValue(te),GetGValue(te) ,GetBValue(te) };
		int times = 50;
		int r = (tecolor[0] - bkcolor[0]) / times;
		int g = (tecolor[1] - bkcolor[1]) / times;
		int b = (tecolor[2] - bkcolor[2]) / times;
		for (int i = 0; i < times; i++)
		{
			HRGN rgn = CreateRectRgn(0, 360, 1080, 540);
			setcliprgn(rgn);
			clearcliprgn();
			//cleardevice();
			//setbkcolor(BLUE);
			settextstyle(25, 0, _T("��������"));
			//settextstyle(35, 0, _T("��������"));
			settextcolor(RGB(bkcolor[0] + r * i, bkcolor[1] + g * i, bkcolor[2] + b * i));
			outtextxy(325, 370, _T("������ 202221147043"));
			outtextxy(450, 420, _T("����ģ�飺���֣�ף���С���Ա����̬����"));
			//outtextxy(325, 320, _T("������ 202221147043"));
			//outtextxy(450, 370, _T("����ģ�飺���֣�ף���С���Ա����̬����"));

			Sleep(15);
		}
		Sleep(1500);
	}
};

class Bigger :public Textprint//�����𽥱��
{
public:
	Bigger(wchar_t a[]) :Textprint(a)
	{}
	virtual void print()
	{
		for (int x = 0; x <= 25; x += 3)
		{
			HRGN rgn = CreateRectRgn(0, 540, 1080, 720);
			setcliprgn(rgn);
			clearcliprgn();
			//cleardevice();
			//setbkcolor(BLUE);
			setcolor(RED);
			settextstyle(x, 0, _T("��������"));
			outtextxy(325, 550, _T("�� 202221147064"));
			outtextxy(450, 600, _T("����ģ�飺ϵͳ���ϼ��������"));
			//outtextxy(325, 320, _T("�� 202221147064"));
			//outtextxy(450, 370, _T("����ģ�飺ϵͳ���ϼ��������"));

			Sleep(90);
		}
		Sleep(1500);
	}
};