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

#ifndef FIREWORK_H_
#define FIREWORK_H_
class firework
{
private:
	int x;
	int y;


public:
	void raise();
	void prepare();
};

#endif