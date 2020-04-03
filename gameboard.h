#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QtCore>
#include<QGraphicsView>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QDebug>
class MainWindow;
class GameBoard : public QGraphicsView
{
//friend class MainWindow;
public:
    GameBoard(QWidget *parent);
    void resizeMe(int w,int h){gameBoard->resize(w,h); }
    void mouseMove(int x, int y);
private:
 QVBoxLayout* mainLayout;
 QGraphicsView* gameBoard;
 QGraphicsScene* scene;

};

#endif // GAMEBOARD_H
