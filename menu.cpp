#include"menu.h"

menu::menu()
{
    size_t menu_position = 0; // 记录菜单页光标位置，初始为第一个菜单项
    draw_menu(menu_position); // 绘制菜单页面

    while (true) // 开始监听键盘
    {
        if (!_kbhit()) // 如果没有键被按下则继续等待
            continue;

        switch (_getch()) // 判断键值
        {
        case 72: // 上箭头键，向上移动菜单光标
            if (menu_position > 0)
                menu_position--;
            break;
        case 80: // 下箭头键，向下移动菜单光标
            if (menu_position < 2)
                menu_position++;
            break;
        case 13: // 回车键，根据菜单光标位置执行相应的操作
            switch (menu_position)
            {
            case 0: // "烟花齐放"菜单项
                // 执行烟花齐放程序
                break;
            case 1: // "组员概况"菜单项
                // 执行组员概况程序
                break;
            case 2: // "再来亿遍"菜单项
                // 执行再来亿遍程序
                break;
            }
            break;
        }

        draw_menu(menu_position); // 更新菜单页面，显示新的光标位置
    }

}


void menu::draw_menu(const size_t menu_position)const
{
    system("cls");//清空控制台屏幕
    const char* menu_options[] = {
        "完整展示",
        "烟花齐放",
        "成员信息",
        "暂停",
        "退出"
    };//菜单选项
   // if (!running)//如果游戏未在运行状态，将菜单选项的第一个选项改为 "Start"
      //  menu_options[0] = "Start" ;
  // const char* tips[] = {
    //    "Press \033[33m↑↓\033[32m to select an option. Press \033[33mEnter\033[32m to confirm. Press \033[33mESC\033[32m to back to the game." ,
      //  "Restart the game.",
        //"Turn on the computer player, and then it will take over the current round.",
      //  "Turn off the computer player.",
       // "Quit the game"
   // };//选项提示
    //printf("\t\033[44m MENU \033[0m\n\n");
    for (size_t i = 0; i != 5; ++i)//显示菜单主体
    {
        if (i == menu_position)//如果是光标所在位置则设为黄色背景黑色前景
            printf("  \033[30;43m%s\033[0m\n", menu_options[i]);
        else
            printf("  %s\n", menu_options[i]);//%s 占位符会被字符串常量 menu_options[i] 替换
    }
 //   printf("\n  \033[35mComputer: ");
  //  if (computer_flag != 0)
//        printf("%dP\n", computer_flag);
 //   else
 //       printf("NULL\n");
 //   printf("  \033[32m%s\033[0m\n", tips[menu_position]);//显示选项提示
}