#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
{
    gameBoard = new QGraphicsView();
    mainLayout = new QVBoxLayout();
    gameBoard->setParent(parent);
    gameBoard->setMinimumSize(parent->width(),parent->height());

 gameBoard->setMouseTracking(true);

    scene=new QGraphicsScene();
    QPen pen;
    QColor black(0,0,0);
    pen.setColor(black);
    scene->addEllipse(0, 0, 10,10, pen, QBrush(Qt::SolidPattern));
    gameBoard->setScene(scene);
}
void GameBoard::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<event->pos().x();
}
