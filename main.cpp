#include "mainwindow.h"

#include <QApplication>
#include <QSize>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QVBoxLayout layout;
    QWidget widget1;
    QPushButton button1 = QPushButton(&w);
    button1.setText("test");
    widget1.setToolTip("test");
    layout.addWidget(&widget1);
    layout.addWidget(&button1);
    w.setLayout(&layout);
    QSize mainWindowSize  = QSize(800,600);
    w.resize(mainWindowSize);
    w.show();
    return a.exec();
}
