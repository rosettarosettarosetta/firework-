#include "layer.h"
#include<iostream>
#include <graphics.h>
#include <easyx.h>
#include"star.h"

layer::layer(int xx ,int yy)
{
	 x = xx;
	 y = yy;
	background();
	cleardevice();        // �����Ļ
}

void layer::Refresh()
{
	moon( );
	getimage(&img, 0, 0, 1000, 720);
	int time = 0;
	while (1)
	{
		BeginBatchDraw();
		cleardevice();

		putimage(0, 0, &img);
		time++;
		stars.starfresh(time);

		FlushBatchDraw();
	}
	
}

void layer::background()
{
	initgraph(x, y);//��ʼ�����ڴ�С   140 120
	setbkcolor(BLACK);    // ���ñ���ɫΪ��ɫ
}

void layer::moon()
{
	setlinecolor(BLACK);
	setfillcolor(YELLOW);  //   ���������ɫΪ��ɫ
	fillcircle(850, 100, 50);  // ������Բ
	setfillcolor(BLACK);  // ���������ɫΪ��ɫ
	fillcircle(880, 90, 50);   // ������Բ

}



