#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow      *ui;
    QStackedWidget      *_pagesStack;
    QListWidget         *_pageNamesList;

private slots:
    void _pageNameClicked(QListWidgetItem *item);

};
#endif // MAINWINDOW_H
