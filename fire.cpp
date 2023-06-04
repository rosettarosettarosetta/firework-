#include "Fire.h"
#include<graphics.h>
#include<iostream>
#include <ctime>	
#include <cstdlib>

Fire::Fire(int xx,int yy):WIDTH(xx), HEIGHT(yy)
{
	t1 = timeGetTime();
	t2 = timeGetTime();
	t3 = timeGetTime();
	for (int i = 0; i < NUM; i++)
	{
		arr[i].max_x = rand() % (WIDTH - 100) + 50;
		arr[i].max_y = rand() % 200 + 50;
		arr[i].x = arr[i].max_x;
		arr[i].y = rand() % 100 + 720;
		arr[i].ready = true;
	}
}

void Fire::CreateFire(int n)
{
	arr[n].max_x = rand() % (WIDTH - 100) + 50;
	arr[n].max_y = rand() % 200 + 50;
	arr[n].x = arr[n].max_x;
	arr[n].y = rand() % 100 + 720;
	arr[n].ready = true;
	arr[n].r = 15;
	arr[n].k = 0;
}


void Fire::Change(int n)
{
	arr[n].ready = false;
}


bool Fire::JudgePlay(int n)
{
	return arr[n].ready;
}

void Fire::PlayFire()
{
	for (int i = 0; i < NUM; i++)
	{
		setfillcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
		if (!JudgePlay(i))
		{
			if (arr[i].y > arr[i].max_y)//�̻�δ������ߵ�
			{
				// ����̻���ǰλ�õ�Բ��
				clearellipse(arr[i].x - 5, arr[i].y - 10, arr[i].x + 5, arr[i].y + 10);
				// ���̻�λ�������ƶ�5������
				arr[i].y -= 5;
				// ����λ�û����̻�
				solidellipse(arr[i].x - 5, arr[i].y - 10, arr[i].x + 5, arr[i].y + 10);
				// ���̻��ײ�����3�����ص㣬������ʾ�̻��Ĺ�â
				putpixel(arr[i].x, arr[i].y + 10, getfillcolor());
				putpixel(arr[i].x - 1, arr[i].y + 10, getfillcolor());
				putpixel(arr[i].x + 1, arr[i].y + 10, getfillcolor());
			}
			else//���̻��ѵ�����ߵ�
			{
				clearellipse(arr[i].x - 5, arr[i].y - 10, arr[i].x + 5, arr[i].y + 10);
				arr[i].reach = true;
				// ��¼�̻��յ�λ��
				pos[i].x = arr[i].max_x;
				pos[i].y = arr[i].max_y;
			}
		}
	}
}
 

void Fire::Fire_Burst()
{
	int num = 60;//�̻�������������
	for (int n = 0; n < NUM; n++)
	{
		if (arr[n].reach == true)
		{
			setfillcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
			for (int i = 0; i < num; i++)
			{
				//����λ��
				double radian = (PI / 180) * (360 / num) * i;
				int x = (int)(arr[n].x + cos(radian) * arr[n].r);
				int y = (int)(arr[n].y - sin(radian) * arr[n].r);
				// ��������
				for (int j = 0; j < arr[n].r; j++)
				{
					putpixel(x - j, y - j, getfillcolor());
					putpixel(x + j, y - j, getfillcolor());
				}
			}
			// �����̻�������
			arr[n].k++;  // 
			arr[n].r += 15;
			if (arr[n].k == 3)
			{
				arr[n].reach = false;
				CreateFire(n);
			}
		}
	}
}

void Fire::update(int time)
{
	tt1 = timeGetTime();
	if (tt1 - t1 > 500)
	{
		flag = rand() % 10 + 1;
		if (JudgePlay(flag) == true)
			Change(flag);
		t1 = tt1;
	}

	tt2 = timeGetTime();
	if (tt2 - t2 > 20)
	{
		PlayFire();
		t2 = tt2;
	}

	tt3 = timeGetTime();
	if (tt3 - t3 > 50)
	{
		Fire_Burst();
		t3 = tt3;
	}

	for (int i = 0; i < 3000; i++)
	{
		int a = rand() % WIDTH;
		int b = rand() % HEIGHT;
		putpixel(a, b, BLACK);
	}
}

void Fire::draw(int time)
{
	return;
}

Fire::~Fire() {}
