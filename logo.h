#pragma once
#pragma once
#include <graphics.h>
#include <conio.h>
#include"shape.h"
#include <iostream>
using namespace std;
class Logo:public shape
{
private:
	int x;
	int y;
	COLORREF color;
	COLORREF colorback;
	float a;
	void setColor()//logo��ɫ
	{
		setfillcolor(color);
	}
	void setBackColor()//������ɫ
	{
		setfillcolor(colorback);
	}
	void size(float a)//���ű���
	{
		setaspectratio(a, a);
	}
	void Drawlogo();


public:
	Logo();
	void  update(int) ;
	 void draw(int) ;
	void getinformation(int, int, COLORREF, float);//logo��xy���꣬���ɫ������ɫ�����ű���
	
};