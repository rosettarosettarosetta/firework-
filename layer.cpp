#include "layer.h"
#include<iostream>
#include <easyx.h>
#include"star.h"
#include"logo.h"
#include"printmode.h"
#include"shape.h"
#include"music.h"
#pragma comment(lib,"winmm.lib")
#include <graphics.h>

wchar_t a[1] = { 0 };//没得用

layer::layer(int xx ,int yy,int sum):x(xx),y(yy),Stars(sum),fire(xx,yy)
{
	PlaySound(LPWSTR(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
	background(x,y);
	cleardevice();        // 清空屏幕
}

void layer::background(int xx, int yy)
{
	initgraph(x, y);//初始化窗口大小   140 120
	loadimage(&img, _T("back.jpg"), 1000, 720);
	putimage(0, 0, &img);//输出照片,坐标和地址
}

void layer::Refresh()
{
	unchanged();
	int time = 0;
	if (time == 0)
	{
		bless(time);
	}
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
	putimage(0, 0, &img);//输出照片,坐标和地址
	moon(*this);
	logo.getinformation(100, 650, RED, 1);
	getimage(&img, 0, 0,x, y);
}


void layer::bless(int time)
{
	wchar_t zhufuyu[] = L"东风夜放花千树，月儿圆，星点缀，香车宝羊堵满路，鞭炮声，烟花绽，一派歌舞升平，花灯吐艳迎佳节，短信传情祝福热。祝节日快乐！";
	Onebyone o(zhufuyu);
	ptr = &o;
	ptr->print(time);
}

void moon(layer& l)//访问layer类的私有成员
{
	setlinecolor(BLACK);
	setfillcolor(YELLOW);
	fillcircle(850, 100, 50);
	setfillcolor(BLACK);
	fillcircle(880, 90, 50);
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
	//bless(time);
	if (MouseHit())
	{
		// 获取鼠标事件的信息
		MOUSEMSG mouseMsg = GetMouseMsg();

		// 获取鼠标坐标
		int mouseX = mouseMsg.x;
		int mouseY = mouseMsg.y;

		// 判断鼠标所在的区域
		if (mouseX >= 0 && mouseX <= vertical && mouseY >= 0 && mouseY <= Sideways)
		{
		//	cout << "1";
			Revolve r(a);
			ptr = &r;
			ptr->print(time);
			return;
		}
		if (mouseX >= 650  && mouseX <=1000 && mouseY >= 540 && mouseY <= 720)
		{ 
		//	cout << "2";
			Deeper r(a);
			ptr = &r;
			ptr->print(time);
			return;
		}
		if (mouseX >= 0 && mouseX <=200 && mouseY >=550  && mouseY <= 720)
		{
			//cout << "3";
			Bothsides r(a);
			ptr = &r;
			ptr->print(time);
			return;
		} 

		//cout << "4";
		Bigger r(a);
		ptr = &r;
		ptr->print(time);
		return;
	}

}

void setclipcircle(int centerX, int centerY, int radius)
{
	setorigin(centerX - radius, centerY - radius);  // 设置坐标原点为圆心
	setaspectratio(1, 1);  // 设置坐标轴比例为1:1
}