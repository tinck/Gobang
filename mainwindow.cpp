#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPaintEvent>
#include <QPainter>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(SCREEN_WIDTH, SCREEN_LENGTH);
    memset(layout, 0, POINTS_WIDTH * POINTS_LENGTH * sizeof(int));
    player = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *){
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing,true);
    for(int i=0;i<16;i++){

        p.drawLine(20+i*40, 20, 20+i*40, 620);
        p.drawLine(20, 20+i*40, 620, 20+i*40);
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *){


}
