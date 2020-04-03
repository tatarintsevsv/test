#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <gameboard.h>
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;

    GameBoard* gb;
protected:
    void resizeEvent(QResizeEvent *event);
};
#endif // MAINWINDOW_H
