#include "layer.h"
#include<iostream>
#include <graphics.h>
#include <easyx.h>
#include"star.h"
#include"shape.h"

wchar_t a[1] = { 0 };//û����

layer::layer(int xx ,int yy,int sum):x(xx),y(yy),Stars(sum),fire(xx,yy)
{
	background(x,y);
	cleardevice();        // �����Ļ
}

void layer::Refresh()
{
	unchanged();
	int time = 0;
	while (1)
	{
		BeginBatchDraw();
		cleardevice();
		putimage(0, 0, &img);
		time++;
		Stars.update(time);
		fire.update(time);
		mouse(time);
		Sleep(50);
		FlushBatchDraw();
	}
	
}

void layer::unchanged()
{
	moon(*this);
	getimage(&img, 0, 0,x, y);
}


void layer::background(int xx,int yy)
{
	initgraph(x, y);//��ʼ�����ڴ�С   140 120
	setbkcolor(BLACK);    // ���ñ���ɫΪ��ɫ
}

void moon(layer& l)//����layer���˽�г�Ա
{
	setlinecolor(BLACK);
	setfillcolor(YELLOW);  //   ���������ɫΪ��ɫ
	fillcircle(850, 100, 50);  // ������Բ
	setfillcolor(BLACK);  // ���������ɫΪ��ɫ
	fillcircle(880, 90, 50);   // ������Բ

}


int layer::get_x()
{
	return x;
}

int layer::get_y()
{
	return y;
}

void layer::mouse(int time)
{
	
	if (MouseHit())
	{
		// ��ȡ����¼�����Ϣ
		MOUSEMSG mouseMsg = GetMouseMsg();

		// ��ȡ�������
		int mouseX = mouseMsg.x;
		int mouseY = mouseMsg.y;

		// �ж�������ڵ�����
		if (mouseX >= 0 && mouseX <= vertical && mouseY >= 0 && mouseY <= Sideways)
		{
			Revolve r(a);
			ptr = &r;
			ptr->print(time);
			return;
		}
		if (mouseX >= vertical  && mouseX <=1000 && mouseY >= Sideways && mouseY <= 720)
		{ 
			Deeper r(a);
			ptr = &r;
			ptr->print(time);
			return;
		}
		if (mouseX >= vertical && mouseX <= 1000 && mouseY >= Sideways && mouseY <= 720)
		{
			Deeper r(a);
			ptr = &r;
			ptr->print(time);
			return;
		} 
	}

}