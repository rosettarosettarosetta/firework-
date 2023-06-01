#include"star.h"
#include"shape.h"
#include<vector>
#ifndef LAYER_H_
#define LAYER_H_

class layer
{
public:
	layer(int = 1000, int = 720,int=10);
	void unchanged();
	void Refresh();
	
	friend void moon(layer& l);
private:
	IMAGE img;
	vector<shape*> shapes_;
	int x, y;
	void background(int,int);
	

	star Stars;
};


#endif // MYGRAPHICS_H