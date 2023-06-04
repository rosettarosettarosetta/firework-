#pragma once
#include"shape.h"

struct Property  :shapes    //�̻�������
	{
		int max_x;
		int max_y;      //���λ��
		int x;
		int y;      //��ǰλ��

		bool ready;     //�Ƿ���Է���
		bool reach;     //�Ƿ񵽴����λ��

		int r = 15;  //��ը�뾶
		int k = 0;      //���Ŵ���
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
	Property arr[NUM];			//Ĭ����10���ڵ�

public:
	Fire(int,int);
	~Fire();
	void CreateFire(int n);//�����̻�����
	void PlayFire();//�����̻�
	bool JudgePlay(int n);//�ж��̻�����
	void Change(int n);//�ı��̻�״̬
	void Fire_Burst();			 //�̻�����
	void update(int) ;
	void draw(int);
};

#endif


