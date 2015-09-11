#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QVector>
#include <QDebug>
#include "student.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QVector<student> ob;

void MainWindow::on_done_clicked()
{

   QVector<student> x;
   QMap<int , QString>map_2;
   map_2[1]="Biotechnology";
   map_2[2]="Chemical Engineering";
   map_2[3]="Computer Science and Engineering";
   map_2[4]="Electrical & Electronics Engineering";
   map_2[5]="Electronics & Communication Engineering";
   map_2[6]="Industrial Engineering & Management";
   map_2[7]="Information Science & Engineering";
   map_2[8]="Mechanical Engineering";
   map_2[9]="Medical Electronics";
   map_2[10]="Telecommunication Engineering";

qDebug("Entering Allocate()");
   allocate(ob);
   qDebug("done Allocate()");
   for(int i=0;i<ob.size();i++)
   {
       ui->textBrowser->append("\nName : \t");
       ui->textBrowser->append(ob[i].name);
       ui->textBrowser->append("\nBefore : \t");
       ui->textBrowser->append(map_2[ob[i].native]);
       ui->textBrowser->append("\nAfter : \t");
       ui->textBrowser->append(map_2[ob[i].alloc]);

   }

}

void MainWindow::on_next_clicked()
{
   // vector<student> ob;
    QString name=ui->nameLineEdit->text();
    QString cgpaT=ui->cGPALineEdit->text();
    int cgpa = cgpaT.toInt();
    student temp(name,cgpa);
    qDebug()<<temp.name<<"  "<<temp.CGPA;
    temp.setPref(ui->currentBrachComboBox->currentIndex(),ui->currentBrachComboBox_2->currentIndex(),
                ui->currentBrachComboBox_3->currentIndex());
    ob.push_back(temp);
    ui->nameLineEdit->clear();
    ui->cGPALineEdit->clear();
    ui->currentBrachComboBox->setCurrentIndex(0);
    ui->currentBrachComboBox_2->setCurrentIndex(0);
    ui->currentBrachComboBox_3->setCurrentIndex(0);


}
