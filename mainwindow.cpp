#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new CustomGraphicScene();

    ui->graphicsView->setScene(scene);  /// Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    /// Устанавливаем сглаживание
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); /// Отключаем скроллбар по вертикали
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); /// Отключаем скроллбар по горизонтали
    ui->graphicsView->setGeometry(ui->graphicsView->x(), ui->graphicsView->y(), 350, 400);

    scene->setSceneRect(-175, -200, 350, 400); // Устанавливаем область графической сцены

    gameTimer = new QTimer(this);
    gameTimer->start(20);
}

MainWindow::~MainWindow()
{
    delete ui;
}

