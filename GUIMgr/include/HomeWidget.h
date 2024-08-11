#ifndef HOMEWIDGET_H
#define HOMEWIDGET_H

#include <QWidget>

class HomeWidget : public QWidget 
{
    Q_OBJECT
public:
    HomeWidget(QWidget* parent);
    HomeWidget(HomeWidget &&) = delete;
    HomeWidget(const HomeWidget &) = delete;
    HomeWidget &operator=(HomeWidget &&) = delete;
    HomeWidget &operator=(const HomeWidget &) = delete;
    ~HomeWidget();

private:
    
};

#endif // !HOMEWIDGET_H
