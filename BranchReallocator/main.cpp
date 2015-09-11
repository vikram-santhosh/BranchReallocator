#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "student.h"
#include <QDebug>
#include<QString>

int student::bte;//1
int student::che;//2
int student::cse;//3
int student::ece;//4
int student::eee;//5
int student::ime;//6
int student::ise;//7
int student::mee;//8
int student::mhe;//9
int student::tce;//10

QMap<int ,int >map_1;
student:: student(){}

student::student(QString name, int CGPA)

   {
       this->CGPA=CGPA;
       this->name=name;

        pref_1=0;
        pref_2=0;
        native=0;
        alloc=0;

   }

   void student::setPref(int a ,int b, int c)
   {
       native=a;
       pref_1=b;
       pref_2=c;
   }

 void allocate(QVector<student> &obj)
   {
       int y;
       QVector<student> z;
       for(int i=0;i<obj.size();i++)
       {
           map_1[obj[i].native]++;
       }
   int c=1;
   qDebug("1");
   while(c)
   {
       c=0;
        for(int i=0;i<obj.size();i++)
       {
           if( map_1[obj[i].pref_1]==0 && map_1[obj[i].pref_2]==0 )
          {
               obj[i].alloc=obj[i].native;
               z.push_back(obj[i]);
               obj.erase(obj.begin()+i);
               map_1[obj[i].alloc]-=1;
               c++;
          }

       }

   }


   qDebug("2");


       for(int i=0;i<obj.size();i++)
              {
                  y=i;
                  for(int j=0;j<obj.size();j++)
                  {

                      if(obj[i].CGPA<=obj[j].CGPA)
                           y=j;
                  }

                       if(map_1[obj[y].pref_1])
                       {
                           obj[y].alloc=obj[y].pref_1;

                       }

                       else if(map_1[obj[y].pref_2])
                       {
                           obj[y].alloc=obj[y].pref_2;
                       }

                       --map_1[obj[y].alloc];
                       z.push_back(obj[y]);
                       obj.erase(obj.begin()+y);

               }
       for(int i=0;i<z.size();i++)
              obj.push_back(z[i]);
       qDebug("Leaving Allocate()");
   }

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

       // string name;
        //int CGPA;
        //int ch;

        map_1[1]=student::bte;
        map_1[2]=student::che;
        map_1[3]=student::cse;
        map_1[4]=student::ece;
        map_1[5]=student::eee;
        map_1[6]=student::ime;
        map_1[7]=student::ise;
        map_1[8]=student::mee;
        map_1[9]=student::mhe;
        map_1[10]=student::tce;

        return a.exec();

}



