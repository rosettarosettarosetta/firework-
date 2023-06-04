#include "layer.h"
#include<iostream>
#include <graphics.h>
#include <easyx.h>
#include"star.h"
#include"shape.h"

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
		if (MouseHit())
		{

		}
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