#include <math.h>
#include<windows.h>
#include<mmsystem.h>
#include <conio.h>
#include"star.h"
#include"layer.h"
#include <thread>
#include"menu.h"
#include"fire.h"
#include"music.h"
#include<mmsystem.h>
#include"printmode.h"
#include"textprint.h"
#include"music.h"
#pragma comment(lib,"winmm.lib")
using namespace std;


int main()
{
    srand(static_cast<unsigned int>(time(0)));

    layer stars;
    stars.Refresh();

    _getch();  // 等待用户按下任意键继续
    closegraph();  // 关闭图形界面

    return 0;
}

