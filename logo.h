#pragma once
#pragma once
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
class Logo
{
private:
	int logox;
	int logoy;
	COLORREF colorfill;
	COLORREF colorback;
	float a;
	void setColor()//logo颜色
	{
		setfillcolor(colorfill);
	}
	void setBackColor()//背景颜色
	{
		setfillcolor(colorback);
	}
	void size(float a)//缩放比例
	{
		setaspectratio(a, a);
	}
	void Drawlogo()//绘制logo
	{
		size(a);
		setColor();
		solidrectangle(logox - 70, logoy + 20, logox + 70, logoy + 25);
		//setBackColor();
		solidrectangle(logox - 65, logoy + 15, logox + 65, logoy + 20);
		setColor();
		for (int i = 3; i < 27; i++)
		{
			float k = i;
			if (i % 2 == 0)
			{
				solidpie(logox - 60, logoy - 50, logox + 65, logoy + 70, k / 10, (k + 1) / 10);
			}
		}
		setBackColor();
		solidpie(logox - 48, logoy - 38, logox + 52, logoy + 58, 0.3, 2.7);
		setColor();
		solidpie(logox - 38, logoy - 30, logox + 44, logoy + 45, 0.3, 2.7);
		solidpie(logox - 65, logoy - 40, logox + 75, logoy + 70, 2.7, 3.14);
		solidpie(logox - 65, logoy - 32, logox + 65, logoy + 62, 0, 0.33);
	}


public:
	void getinformation(int x, int y, COLORREF fill, float a1)//logo的xy坐标，填充色，背景色，缩放比例
	{
		logox = x;
		logoy = y;
		colorfill = fill;
		
		a = a1;
		Drawlogo();
	}
};