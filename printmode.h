#pragma once
#include<graphics.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include"Textprint.h"
const double pai = 3.1415926;
class Onebyone :public Textprint//字一个一个出现
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
			settextstyle(30, 0, _T("方正舒体"));
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

class Bothsides :public Textprint//字从两边过来
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
		settextstyle(22, 0, _T("微软雅黑"));
		setbkmode(TRANSPARENT);

		outtextxy(700 + x, 600 + y, _T("张梓瑶 202221147045"));
		outtextxy(700 + x, 650 + y, _T("第二模块：Logo呈现"));
		
	}
};

class Revolve :public Textprint//字循着螺旋曲线
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
			
			
			settextstyle(int(10 + n), 0, _T("方正舒体"));
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
			outtextxy( 700+x,  600+y, _T("蒋子韬 202221147045"));
			outtextxy( 700+x,  650+y, _T("第一模块：烟花绽放爱心雨"));
			
	}
};

class Deeper :public Textprint//字体逐渐加深
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
		settextstyle(22, 0, _T("微软雅黑"));
		setbkmode(TRANSPARENT);

		outtextxy(700 + x, 600 + y, _T("韩建军 202221147043"));
		outtextxy(700 + x, 650 + y, _T("第三模块：配乐，祝福语，小组成员名动态呈现"));
			
		//}
		
	}
};

class Bigger :public Textprint//字体逐渐变大
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
		settextstyle(22, 0, _T("微软雅黑"));
		setbkmode(TRANSPARENT);

		outtextxy(700 + x, 600 + y, _T("沈辰 202221147064"));
		outtextxy(700 + x, 650 + y, _T("第四模块：月亮，系统整合及界面设计"));

			
	}
};