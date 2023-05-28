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
	cleardevice();        // 清空屏幕
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
	initgraph(x, y);//初始化窗口大小   140 120
	setbkcolor(BLACK);    // 设置背景色为黑色
}

void layer::moon()
{
	setlinecolor(BLACK);
	setfillcolor(YELLOW);  //   设置填充颜色为白色
	fillcircle(850, 100, 50);  // 绘制外圆
	setfillcolor(BLACK);  // 设置填充颜色为黑色
	fillcircle(880, 90, 50);   // 绘制内圆

}



