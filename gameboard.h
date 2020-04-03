#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include<QGraphicsView>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QDebug>
class MainWindow;
class GameBoard : public QGraphicsView
{
friend class MainWindow;
public:
    GameBoard(QWidget *parent);
private:
 QVBoxLayout* mainLayout;
 QGraphicsView* gameBoard;
 QGraphicsScene* scene;
protected:
   void mouseMoveEvent(QMouseEvent *event);
};

#endif // GAMEBOARD_H
