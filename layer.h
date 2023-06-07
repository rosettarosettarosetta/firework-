#include"star.h"
#include"shape.h"
#include"fire.h"
#include<vector>
#include"logo.h"
#include <graphics.h>
#include"printmode.h"
#include"textprint.h"
#ifndef LAYER_H_
#define LAYER_H_

class layer
{
public:
	layer(int = 1000, int = 720,int=10);
	void unchanged();
	void Refresh();
	int get_x();
	int get_y();
	void mouse(int);
	friend void moon(layer& l);
	friend void setclipcircle(int, int, int);
private:
	IMAGE img;
	IMAGE img2;
	vector<shape*> shapes_;
	int x, y;
	void background(int,int);
	Textprint* ptr;
	Fire fire;
	star Stars;
	Logo logo;
	const int vertical = 850;//Êú×Å
	const int Sideways = 550;

};


#endif // MYGRAPHICS_H