#include<windows.h>
#include<iostream>
#include<conio.h>

using namespace std;

class menu
{
public:
	menu();
private:
	void draw_menu(const size_t)const;
	int judger(const size_t)const;
};