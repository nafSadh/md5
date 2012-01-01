#include <string>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "md5.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    aboutDialog = new AboutDialog;
}

void MainWindow::on_hashButton_clicked()
{
    QString input = inputTextEdit->toPlainText();

    std::string inputs = input.toStdString();
    std::string outputs = md5(inputs);

    QString output = QString::fromStdString(outputs);

    outputLineEdit->setText(output);
}

void MainWindow::on_aboutButton_clicked()
{
    aboutDialog->show();
}
