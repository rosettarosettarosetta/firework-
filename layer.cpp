#include "layer.h"
#include<iostream>
#include <graphics.h>
#include <easyx.h>
#include"star.h"
#include"shape.h"

layer::layer(int xx ,int yy,int sum):x(xx),y(yy),Stars(sum),fire(xx,yy)
{
	background(x,y);
	cleardevice();        // 清空屏幕
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
	initgraph(x, y);//初始化窗口大小   140 120
	setbkcolor(BLACK);    // 设置背景色为黑色
}

void moon(layer& l)//访问layer类的私有成员
{
	setlinecolor(BLACK);
	setfillcolor(YELLOW);  //   设置填充颜色为白色
	fillcircle(850, 100, 50);  // 绘制外圆
	setfillcolor(BLACK);  // 设置填充颜色为黑色
	fillcircle(880, 90, 50);   // 绘制内圆

}



int layer::get_x()
{
	return x;
}

int layer::get_y()
{
	return y;
}