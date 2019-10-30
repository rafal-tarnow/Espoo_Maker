#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    canvas_gl = new CanvasGL(this);
    this->setCentralWidget(canvas_gl);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete canvas_gl;
}
