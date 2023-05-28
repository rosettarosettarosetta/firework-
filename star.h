#pragma once
#include<string>
#include <conio.h>
#include <graphics.h>
#include <easyx.h>
#include<iomanip>
#include<ctime>
#include <time.h>
#include <cstdlib> 
#include <iostream>


using namespace std;

static double pi = 3.14159265358979323846;

#ifndef STAR_H_
#define STAR_H_

struct Star 
{
	int x;
	int y;
	COLORREF color;
	int r;
	int angle;
	POINT place[5];
};

class star
{
private:
	Star stars[10];
public:
	star();
	void setStar(int);
	void starfresh(int);

};

#endif