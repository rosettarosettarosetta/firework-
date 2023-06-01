#include"menu.h"

menu::menu()
{
    size_t menu_position = 0; // ��¼�˵�ҳ���λ�ã���ʼΪ��һ���˵���
    draw_menu(menu_position); // ���Ʋ˵�ҳ��

    while (true) // ��ʼ��������
    {
        if (!_kbhit()) // ���û�м�������������ȴ�
            continue;

        switch (_getch()) // �жϼ�ֵ
        {
        case 72: // �ϼ�ͷ���������ƶ��˵����
            if (menu_position > 0)
                menu_position--;
            break;
        case 80: // �¼�ͷ���������ƶ��˵����
            if (menu_position < 2)
                menu_position++;
            break;
        case 13: // �س��������ݲ˵����λ��ִ����Ӧ�Ĳ���
            switch (menu_position)
            {
            case 0: // "�̻����"�˵���
                // ִ���̻���ų���
                break;
            case 1: // "��Ա�ſ�"�˵���
                // ִ����Ա�ſ�����
                break;
            case 2: // "�����ڱ�"�˵���
                // ִ�������ڱ����
                break;
            }
            break;
        }

        draw_menu(menu_position); // ���²˵�ҳ�棬��ʾ�µĹ��λ��
    }

}


void menu::draw_menu(const size_t menu_position)const
{
    system("cls");//��տ���̨��Ļ
    const char* menu_options[] = {
        "����չʾ",
        "�̻����",
        "��Ա��Ϣ",
        "��ͣ",
        "�˳�"
    };//�˵�ѡ��
   // if (!running)//�����Ϸδ������״̬�����˵�ѡ��ĵ�һ��ѡ���Ϊ "Start"
      //  menu_options[0] = "Start" ;
  // const char* tips[] = {
    //    "Press \033[33m����\033[32m to select an option. Press \033[33mEnter\033[32m to confirm. Press \033[33mESC\033[32m to back to the game." ,
      //  "Restart the game.",
        //"Turn on the computer player, and then it will take over the current round.",
      //  "Turn off the computer player.",
       // "Quit the game"
   // };//ѡ����ʾ
    //printf("\t\033[44m MENU \033[0m\n\n");
    for (size_t i = 0; i != 5; ++i)//��ʾ�˵�����
    {
        if (i == menu_position)//����ǹ������λ������Ϊ��ɫ������ɫǰ��
            printf("  \033[30;43m%s\033[0m\n", menu_options[i]);
        else
            printf("  %s\n", menu_options[i]);//%s ռλ���ᱻ�ַ������� menu_options[i] �滻
    }
 //   printf("\n  \033[35mComputer: ");
  //  if (computer_flag != 0)
//        printf("%dP\n", computer_flag);
 //   else
 //       printf("NULL\n");
 //   printf("  \033[32m%s\033[0m\n", tips[menu_position]);//��ʾѡ����ʾ
}