#include "star.h"

star::star()
{
	for (int i = 0; i < 10; i++)
	{
		stars[i].x = 5 + rand() % 990;
		stars[i].y = 5+rand()%710;
		stars[i].angle = rand()%72;
		stars[i].r =2 + rand()%20;
		//setStar(i);
	}
} 


void star::starfresh(int time)
{
	int colorChange3;
	int colorChange2;
	int angleChange;


		for (int i = 0; i < 10; i++)
		{
			angleChange = rand() % 100;
			cout << time;
			if (time % 10 == 0)
			{
				stars[i].x = 5 + rand() % 890;
				stars[i].y = 5 + rand() % 510;
			}
			double a = pi / 2 + stars[i].angle+ angleChange;
			if (time % 2)
				stars[i].r++;
			else stars[i].r--;
			
			for (int t = 0; t < 5; t++)
			{
				stars[i].place[t].x = int(stars[i].x + cos(a) * stars[i].r);
				stars[i].place[t].y = int(stars[i].y - sin(a) * stars[i].r);
				a += pi * 4 / 5;
			}

			setpolyfillmode(WINDING);
			colorChange3 = rand() % 255;
			colorChange2 = 200 + rand () % 55;
			stars[i].color= RGB(static_cast<BYTE>(colorChange2), static_cast<BYTE>(colorChange2), static_cast<BYTE>(colorChange3));
			setfillcolor(stars[i].color);
			// 绘制五角星(无边框)
			solidpolygon(stars[i].place, 5);
		}

		Sleep(300);

		


	
}



void star::setStar(int i)
{
	setfillcolor(stars[i].color);
	setlinecolor(stars[i].color);
	double a = pi / 2 + stars[i].angle;

	for (int t = 0; t < 5; t++)
	{
		stars[i].place[t].x = int(stars[i].x + cos(a) * stars[i].r);
		stars[i].place[t].y = int(stars[i].y - sin(a) * stars[i].r);
		a += pi * 4 / 5;
	}

	setpolyfillmode(WINDING);
	// 设置填充颜色为红色
	setfillcolor(YELLOW);
	// 绘制五角星(无边框)
	solidpolygon(stars[i].place, 5);

}
