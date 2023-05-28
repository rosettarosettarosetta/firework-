#pragma once
#include <graphics.h>
#include <easyx.h>
class shape
{
public:
	shape(COLORREF color, int rasterOp, PIMAGE layer);


private:
	void setFillColor();
	void setLineColor();
	COLORREF color;
};

