#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _mainTabWidget = new QTabWidget(this);
    _mainTabWidget->setTabPosition(QTabWidget::West);
}

MainWindow::~MainWindow()
{
    delete ui;
}
