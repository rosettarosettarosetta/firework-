#include <math.h>

#include"star.h"
#include"layer.h"


using namespace std;



int main()
{
    srand(static_cast<unsigned int>(time(0)));

    
    layer screan1;
    screan1.Refresh();

    _getch();  // �ȴ��û��������������
    closegraph();  // �ر�ͼ�ν���

    return 0;
}

