#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
   // void on_currentBrachComboBox_currentIndexChanged(int index);

    void on_done_clicked();

private slots:
    void on_next_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
