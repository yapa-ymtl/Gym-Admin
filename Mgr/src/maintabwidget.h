#ifndef MAINTABWIDGET_H
#define MAINTABWIDGET_H

#include <QWidget>

namespace Ui {
class MainTabWidget;
}

class MainTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainTabWidget(QWidget *parent = nullptr);
    ~MainTabWidget();

private:
    Ui::MainTabWidget *ui;
};

#endif // MAINTABWIDGET_H
