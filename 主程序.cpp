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

    _getch();  // �ȴ��û��������������
    closegraph();  // �ر�ͼ�ν���

    return 0;
}

