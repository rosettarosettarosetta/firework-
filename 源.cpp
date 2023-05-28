#include <math.h>

#include"star.h"
#include"layer.h"


using namespace std;



int main()
{
    srand(static_cast<unsigned int>(time(0)));

    
    layer screan1;
    screan1.Refresh();

    _getch();  // 等待用户按下任意键继续
    closegraph();  // 关闭图形界面

    return 0;
}

