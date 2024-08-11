#ifndef HOMEWIDGET_H
#define HOMEWIDGET_H

#include <QWidget>

class HomeWidget {
public:
    HomeWidget();
    HomeWidget(HomeWidget &&) = delete;
    HomeWidget(const HomeWidget &) = delete;
    HomeWidget &operator=(HomeWidget &&) = delete;
    HomeWidget &operator=(const HomeWidget &) = delete;
    ~HomeWidget();

private:
    
};

#endif // !HOMEWIDGET_H
