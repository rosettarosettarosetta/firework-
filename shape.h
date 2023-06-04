#pragma once
#include <graphics.h>
#include <easyx.h>
#include <vector>

#include<iostream>
using namespace std;

const COLORREF InvalidColor = 0xFFFFFFFF;


struct shapes
{
	int x;
	int y;
	COLORREF color;
	int r;
	int angle;
	POINT place[10];
};

class shape
{
public:
	shape();
	//virtual ~shape();
	virtual void update(int) = 0;
	virtual void draw(int) =0;
	void fillcolor();
	void getcolor(COLORREF);
	
private:
	COLORREF color;

};

