#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
{
    gameBoard = new QGraphicsView();
    mainLayout = new QVBoxLayout();
    gameBoard->setParent(parent);
    gameBoard->setMinimumSize(parent->width(),parent->height());

 gameBoard->setMouseTracking(true);
 gameBoard->grabMouse();
    scene=new QGraphicsScene();
    QPen pen;
    QColor black(0,0,0);
    pen.setColor(black);
    scene->addEllipse(0, 0, 10,10, pen, QBrush(Qt::SolidPattern));
    gameBoard->setScene(scene);
    gameBoard->setCursor(Qt::BlankCursor);
}


void GameBoard::mouseMove(int x, int y)
{    
    gameBoard->scene()->clear();
    QPen pen;
    pen.setColor(Qt::black);
    gameBoard->scene()->addEllipse(x, y, 10,10, pen, QBrush(Qt::SolidPattern));

}
