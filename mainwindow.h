#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include "CustomGraphicScene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public  slots:


private:
    Ui::MainWindow *ui;
    CustomGraphicScene * scene;
    QTimer * gameTimer;
};

#endif // MAINWINDOW_H
