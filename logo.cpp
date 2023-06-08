#include"logo.h"

void Logo::Drawlogo()//绘制logo
{
	size(a);
	setColor();
	solidrectangle(x - 70, y + 20, x + 70, y + 25);
	//setBackColor();
	solidrectangle(x - 65, y + 15, x + 65, y + 20);
	setColor();
	for (int i = 3; i < 27; i++)
	{
		float k = i;
		if (i % 2 == 0)
		{
			solidpie(x - 60, y - 50, x + 65, y + 70, k / 10, (k + 1) / 10);
		}
	}
	setBackColor();
	solidpie(x - 48, y - 38, x + 52, y + 58, 0.3, 2.7);
	setColor();
	solidpie(x - 38, y - 30, x + 44, y + 45, 0.3, 2.7);
	solidpie(x - 65, y - 40, x + 75, y + 70, 2.7, 3.14);
	solidpie(x - 65, y - 32, x + 65, y + 62, 0, 0.33);
}

void Logo::getinformation(int x, int y, COLORREF fill, float a1)//logo的xy坐标，填充色，背景色，缩放比例
{
	x = x;
	y = y;
	color = fill;

	a = a1;
	Drawlogo();
}
