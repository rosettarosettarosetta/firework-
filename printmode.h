#pragma once
#include<graphics.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include"Textprint.h"
const double pai = 3.1415926;
class Onebyone :public Textprint//��һ��һ������
{
public:
	Onebyone(wchar_t a[]) :Textprint(a)
	{}
	virtual void print(int time)
	{
		int x = 50;
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
	virtual void print(int time)
	{
		int colorChange3;
		int colorChange2;
		int angleChange;
		colorChange3 = rand() % 255;
		colorChange2 = 200 + rand() % 55;
		int color = RGB(static_cast<BYTE>(colorChange2), static_cast<BYTE>(colorChange3), static_cast<BYTE>(colorChange3));
		int redius = 20;
		int x = (int)(cos(time / 3) * redius);
		int y = (int)(sin(time / 3) * redius);
		settextcolor(color);
		setbkcolor(TRANSPARENT);
		settextstyle(22, 0, _T("΢���ź�"));
		setbkmode(TRANSPARENT);

		outtextxy(700 + x, 600 + y, _T("������ 202221147045"));
		outtextxy(700 + x, 650 + y, _T("�ڶ�ģ�飺Logo����"));
		
	}
};

class Revolve :public Textprint//��ѭ����������
{
public:
	Revolve(wchar_t a[]) :Textprint(a)
	{}
	virtual void print(int time)
	{
		/*
		int redius = 300;
		int coordx = 1080 / 2 + 250;
		int coordy = 720 / 2 + 50;
		
		
		int num = 60;
		double n = 1;
		
		double hudu = (pai / 180 * (time%30) * (360 / num));
			int x = (int)(coordx + cos(hudu) * redius);
			int y = (int)(coordy - sin(hudu) * redius);
			
			
			settextstyle(int(10 + n), 0, _T("��������"));
			n += 0.5;
			//n += 1;
		*/
		int colorChange3;
		int colorChange2;
		int angleChange;
		colorChange3 = rand() % 255;
		colorChange2 = 200 + rand() % 55;
		int color = RGB(static_cast<BYTE>(colorChange2), static_cast<BYTE>(colorChange3), static_cast<BYTE>(colorChange3));
		  int redius = 20;
		  int x = (int)(cos(time/3) * redius);
		  int y = (int)(sin(time/3) * redius);
			settextcolor(color);
				setbkcolor(TRANSPARENT);
			outtextxy( 700+x,  600+y, _T("����� 202221147045"));
			outtextxy( 700+x,  650+y, _T("��һģ�飺�̻����Ű�����"));
			
	}
};

class Deeper :public Textprint//�����𽥼���
{
public:
	Deeper(wchar_t a[]) :Textprint(a)
	{}
	virtual void print(int time)
	{
		int colorChange3;
		int colorChange2;
		int angleChange;
		colorChange3 = rand() % 255;
		colorChange2 = 200 + rand() % 55;
		int color = RGB(static_cast<BYTE>(colorChange2), static_cast<BYTE>(colorChange3), static_cast<BYTE>(colorChange3));
		int redius = 20;
		int x = (int)(cos(time / 3) * redius);
		int y = (int)(sin(time / 3) * redius);
		settextcolor(color);
		setbkcolor(TRANSPARENT);
		settextstyle(22, 0, _T("΢���ź�"));
		setbkmode(TRANSPARENT);

		outtextxy(700 + x, 600 + y, _T("������ 202221147043"));
		outtextxy(700 + x, 650 + y, _T("����ģ�飺���֣�ף���С���Ա����̬����"));
			
		//}
		
	}
};

class Bigger :public Textprint//�����𽥱��
{
public:
	Bigger(wchar_t a[]) :Textprint(a)
	{}
	virtual void print(int time )
	{
		
		int colorChange3;
		int colorChange2;
		int angleChange;
		colorChange3 = rand() % 255;
		colorChange2 = 200 + rand() % 55;
		int color = RGB(static_cast<BYTE>(colorChange2), static_cast<BYTE>(colorChange3), static_cast<BYTE>(colorChange3));
		int redius = 20;
		int x = (int)(cos(time / 3) * redius);
		int y = (int)(sin(time / 3) * redius);
		settextcolor(color);
		setbkcolor(TRANSPARENT);
		settextstyle(22, 0, _T("΢���ź�"));
		setbkmode(TRANSPARENT);

		outtextxy(700 + x, 600 + y, _T("�� 202221147064"));
		outtextxy(700 + x, 650 + y, _T("����ģ�飺������ϵͳ���ϼ��������"));

			
	}
};