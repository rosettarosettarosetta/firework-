#pragma once
#include"shape.h"

struct Property  :shapes    //烟花的属性
	{
		int max_x;
		int max_y;      //最高位置
		int x;
		int y;      //当前位置

		bool ready;     //是否可以发射
		bool reach;     //是否到达最高位置

		int r = 15;  //爆炸半径
		int k = 0;      //绽放次数
	};



struct Final_Pos :shapes
{
	int x;
	int y;
};

#ifndef FIRE_H
#define FIRE_H

const double PI = 3.1415926;
const  int NUM = 10;
class Fire :public shape
{
private:
	 int WIDTH  ;
	 int HEIGHT  ;
	 DWORD t1 , tt1, t2 , tt2;
	 DWORD t3 , tt3;
	 int flag;
	 Final_Pos pos[NUM];//= { 0 };
	Property arr[NUM];			//默认有10个炮弹

public:
	Fire(int,int);
	~Fire();
	void CreateFire(int n);//创建烟花属性
	void PlayFire();//发射烟花
	bool JudgePlay(int n);//判断烟花发射
	void Change(int n);//改变烟花状态
	void Fire_Burst();			 //烟花绽放
	void update(int) ;
	void draw(int);
};

#endif


