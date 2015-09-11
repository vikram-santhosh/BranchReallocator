#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<QDebug>
#include<iostream>
#include<QMap>
#include<QString>
#include<cstdlib>
#include <QVector>
#include <algorithm>

class student
{

public :

    int pref_1;
    int pref_2;
    int native;
    int CGPA;
    int alloc;
    int flag;
    QString name;

    static int bte;//1
    static int che;//2
    static int cse;//3
    static int ece;//4
    static int eee;//5
    static int ime;//6
    static int ise;//7
    static int mee;//8
    static int mhe;//9
    static int tce;//10

    student();
    student(QString name,int CGPA);

    void setPref(int a ,int b, int c); 

};
void allocate(QVector<student> &obj);
#endif // STUDENT_H
