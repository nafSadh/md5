#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_mainwindow.h"
#include "aboutdialog.h"

class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
private slots:
    void on_hashButton_clicked();
    void on_aboutButton_clicked();
private:
    AboutDialog *aboutDialog;
};

#endif // MAINWINDOW_H
