#include "graphicclasscars.h"
#include <iostream>
#include <string>

using namespace std;

      int nKrot[46][6]{{0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,2,1,1,0,4},
                       {0,3,1,1,0,4},
                       {0,2,1,1,0,4},
                       {0,3,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,2,1,2,0,4},
                       {0,3,1,3,0,4},
                       {0,2,1,2,0,4},
                       {0,3,1,3,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,2,1,0,4},
                       {0,1,3,1,0,4},
                       {0,1,2,1,0,4},
                       {0,1,3,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,2,0,4},
                       {0,1,1,3,0,4},
                       {0,1,1,2,0,4},
                       {0,1,1,3,0,4},
                       {0,2,1,1,0,4},
                       {0,3,1,1,0,4},
                       {0,2,1,1,0,4},
                       {0,3,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4},
                       {0,1,1,1,0,4}};
int outPutMassiv[17][6]{{0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4}};
int nTraphickMass[46][6]{{0,3,3,3,0,4},
                        {0,1,1,1,0,4},
                        {0,2,1,1,0,4},
                        {0,3,1,1,0,4},
                        {0,2,1,1,0,4},
                        {0,3,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,2,1,2,0,4},
                        {0,3,1,3,0,4},
                        {0,2,1,2,0,4},
                        {0,3,1,3,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,2,1,0,4},
                        {0,1,3,1,0,4},
                        {0,1,2,1,0,4},
                        {0,1,3,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,2,0,4},
                        {0,1,1,3,0,4},
                        {0,1,1,2,0,4},
                        {0,1,1,3,0,4},
                        {0,2,1,1,0,4},
                        {0,3,1,1,0,4},
                        {0,2,1,1,0,4},
                        {0,3,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4},
                        {0,1,1,1,0,4}};
GraphicClassCars::GraphicClassCars()
{

}
void GraphicClassCars::fvOutputGamePoint(int iLichylnyck)//меню і вивід очок
{
    cout<<"::s)start::::p)pause::::q)exit::"<<endl;//тіпа меню
    cout<<"::::::::::::::::::::::::::::::::"<<endl;//граф. понти для приезжих
    cout<<"::"<<iLichylnyck<<"km";//відображення ігрових очок
    if(iLichylnyck<10)//якщо менше 10 очок
        {
            cout<<" ";
        }
    if(iLichylnyck<100)//менше 100
        {
            cout<<" ";
        }
    if(iLichylnyck<1000)//.....
        {
            cout<<" ";//...
        }
    if(iLichylnyck<10000)//.....
        {
            cout<<" ";
        }
    if(iLichylnyck<100000)
        {
            cout<<" ";
        }
    cout<<"                    ::"<<endl;
}
void GraphicClassCars::fvTopBotomLineGraphic()
{
    for(int nGraphikTopLine=32;nGraphikTopLine>0;nGraphikTopLine--)
    {
        cout << ":";
    }
    cout<< endl;
}
int GraphicClassCars::fvOutputDisplayFunction(int nCarPosition,int nPrecolisioMoment,int nPointVariable)
{
    nPrecolisioMoment++;
    string sCarGraphics [5]{":::::::","      ","  ::  ","::::::","\n"};//масив гравічних елементів


   if(nPointVariable>20)
   {
       for(int n=0;n<17;n++)
       for(int i=0;i<6;i++)
       {
            {
                outPutMassiv[n][i]=nTraphickMass[n][i];
            }
       }
       for(int y=0;y<46;y++)
       {
           for(int x=0;x<6;x++ )
           {
              // if(y==0)
               //{
                   nKrot [1][x]=nTraphickMass[43][x];

               //}
               //else
               //{
                    nKrot[y][x]=nTraphickMass[y][x];
               //}
                  //cout<<nKrot;
           }
       }
       for(int y=0;y<44;y++)
       {
           for(int x=0;x<6;x++ )
           {
               nTraphickMass[y+1][x]=nKrot[y][x];
              // cout<<nTraphickMass;
           }
       }
   }
   for(int n=0;n<17;n++)
    {

       if(nCarPosition==0)
        {
            outPutMassiv[16][1]=3;
            outPutMassiv[15][1]=2;
            outPutMassiv[14][1]=3;
            outPutMassiv[13][1]=2;
           //if(outPutMassiv[12][1]==3||outPutMassiv[13][1]==2);
            //{
              //  nPrecolisioMoment=20;
            //}
        }
        if(nCarPosition==1)
        {
            outPutMassiv[16][2]=3;
            outPutMassiv[15][2]=2;
            outPutMassiv[14][2]=3;
            outPutMassiv[13][2]=2;
            //if(outPutMassiv[12][2]==3||outPutMassiv[13][2]==2);
            //{
                //nPrecolisioMoment=20;
          //  }
        }

        if(nCarPosition==2)
        {
            outPutMassiv[16][3]=3;
            outPutMassiv[15][3]=2;
            outPutMassiv[14][3]=3;
            outPutMassiv[13][3]=2;
           //if(outPutMassiv[11][3]==3||outPutMassiv[13][3]==2);
        //{
          //   nPrecolisioMoment=20;
        //}
   }
    }
   if(outPutMassiv[12][1]==2&&nCarPosition==0)
   {
           nPrecolisioMoment=20;
   }
   if(outPutMassiv[12][2]==2&&nCarPosition==1)
   {
           nPrecolisioMoment=20;
   }
   if(outPutMassiv[12][3]==2&&nCarPosition==2)
   {
           nPrecolisioMoment=20;
   }



            for(int a=0;a<17;a++)
            {
                for(int n=0;n<6;n++)
                {
                    cout<<sCarGraphics [outPutMassiv[a][n]];
                }

             }
     if (nPrecolisioMoment==17)
     {
         nPrecolisioMoment=0;
     }
    return nPrecolisioMoment;
}
void GraphicClassCars::vRestartGraphicFunctuion()
{
     int nDoubleoutPutMassiv[17][6]={{0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4},
                            {0,1,1,1,0,4}};
     for(int x=0;x<17;x++)
     {
         for(int y=0;y<6;y++)
         {
             outPutMassiv[x][y]=nDoubleoutPutMassiv[x][y];
         }
     }
}
