//вцім файлі зібрані основні системні функції і об'єднані в один клас
//-------------------------------------------------------------------

#include <sys/ioctl.h>//getch
#include <unistd.h>//getch
#include <termios.h>//getch
#include "systemelements.h"
#include <iostream>//підключаєм бібліотеку вводу виводу;

using namespace std;//використовуємо стандарнтний простір імен

void systemElements::clear()//очистка екрана
        {
            cout << "\033[0d\033[2J";
        }
int systemElements::getch(void)// неперервне зчитування з клавіатури (syys/ioctl.h, unistd.h, termios,h)
    {
        struct termios oldt, newt;
        int ch;

        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        ch = getchar();
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

        return ch;
    }
bool systemElements::kbhit()//функція котра дає сигнал true пoки нажата клавіша
    {
        termios term;
        tcgetattr(0, &term);

        termios term2 = term;
        term2.c_lflag &= ~ICANON;
        tcsetattr(0, TCSANOW, &term2);

        int byteswaiting;
        ioctl(0, FIONREAD, &byteswaiting);

        tcsetattr(0, TCSANOW, &term);

        return byteswaiting > 0;
    }

int systemElements::fiGameControlInput(int nCarPosition)//Функція керування
    {
        char cGameControlVariable='\0';

                while(true)//керування
                     {
                          if(kbhit())
                            {
                               cGameControlVariable=getch();
                                if(cGameControlVariable=='p'||cGameControlVariable=='P')//Пауза в грі
                                    {
                                        if(cGameControlVariable!='s'||cGameControlVariable!='S')//вихід з паузи
                                            {
                                                cout<<"pause \n pres 's' end 'Enter' to continue"<<endl;//повідомлення про паузу
                                                cin>>cGameControlVariable;
                                            }
                                    }
                                if(cGameControlVariable=='Z')//якщо змінна = "Z" то
                                   {
                                      cGameControlVariable='z';//то змінній присвоїти "z"
                                    }

                                if (cGameControlVariable=='q'||cGameControlVariable=='Q')//якщо умова вірна
                                     {
                                         cout<<"Game Over";
                                         return 0;
                                      }

                                if (cGameControlVariable=='z'&&nCarPosition>0)
                                     {
                                          nCarPosition--;
                                     }

                                if (cGameControlVariable=='/'&&nCarPosition<2)
                                     {
                                           nCarPosition++;
                                     }

                                cGameControlVariable='\0';
                                break;
                        }
                    else
                        {
                            break;
                        }

                    }
                return nCarPosition;

        }
void systemElements::fvStabilization(int pointVariable)//таймер для стабілізаціґ виводу щоб консоль не мигала
        {
                int x=100000L-pointVariable*4;
                clock_t start, stop;
               unsigned long t;//Таймер для стабілізації виводу і підрахунку очок
               start = clock();
               for(t=0;t<x;t++)
               stop =clock();
        }
