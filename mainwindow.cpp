#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gb=new GameBoard(this);
    this->setMouseTracking(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    gb->resizeMe(this->width(),this->height());
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<event->x()<<event->y();
    gb->mouseMove(event->x(),event->y());
}


