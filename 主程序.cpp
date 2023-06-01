#include <math.h>
#include<windows.h>
#include<mmsystem.h>
#include <conio.h>
#include"star.h"
#include"layer.h"
//#include"music.h"

using namespace std;



int main()
{
    srand(static_cast<unsigned int>(time(0)));

    
    layer stars;
    //PlaySound(LPWSTR(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
    stars.Refresh();

    _getch();  // 等待用户按下任意键继续
    closegraph();  // 关闭图形界面

    return 0;
}

