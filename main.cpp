#include "graphicclasscars.h"
#include "systemelements.h"
#include <iostream>

using namespace std;//використовуємо стандартний простір імен

int main()
{
    restartlabel:
    systemElements se;//класс systemElements;
    GraphicClassCars gcc;
    int nPreColisionMoment=0;//IДИКАТОР КОЛІЗІЙ
    bool variableOfExit=0;//змінна для виходу з гри (ІНАКШЕ НЕ ХОТІЛО ПРАЦЮВАТИ)
    int pointVariable=0;//лічильник очок(циклів)
    int nCarPosition=2;//Положення машинки
    for (;;pointVariable++)//Вічний цикл і збільшення лічильника очок


    {
        se.fvStabilization(pointVariable);//стабілізація виводу консолі
        se.clear();//Очистка консолі
        cout<<endl;
        gcc.fvOutputGamePoint(pointVariable);//Вивід очок для користувача
        gcc.fvTopBotomLineGraphic();//Верхня лінія гуі
        nCarPosition=se.fiGameControlInput(nCarPosition);//керування машинкою
        nPreColisionMoment=gcc.fvOutputDisplayFunction(nCarPosition,nPreColisionMoment,pointVariable);//вивід на екран

        gcc.fvTopBotomLineGraphic();//Нижня лінія гуі
        cout<<"::'z'-left:::::::::::'/'-right::"<<endl;//Підказка керування

        if(nPreColisionMoment==20)//якщо умова вірна...
        {
            cout<<"You lose. Pres 'S' to continue or 'X to exit "<<endl;//... вивевти на екран повідомлення
            char cPreVariableOfExit='d';//змінна для прийняття рішення провихід згр и чи продовження
            cin>>cPreVariableOfExit;//присвоєння значення змінної з потоку вводу
            if(cPreVariableOfExit=='S'||cPreVariableOfExit=='s')//якщо умова вірна(гравець натиснув s) то...
            {
                gcc.vRestartGraphicFunctuion();//перезагрузити графіку
                goto restartlabel;//перейти до мітк и
            }
                if(cPreVariableOfExit=='X'||cPreVariableOfExit=='x')//якщо умова вірна
            {
                variableOfExit=1;//то змінній присвоїти значееня тру
            }
        }
        if(variableOfExit==1)//якщо умова вірна
            {
                break;//то вихід збезкінечного циклу
            }
    }
    return 0;
}
