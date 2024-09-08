#ifndef REPORTSWIDGET_H
#define REPORTSWIDGET_H

#include <QWidget>

class ReportsWidget : public QWidget 
{
    Q_OBJECT
public:
    ReportsWidget(QWidget* parent);
    ReportsWidget(ReportsWidget &&) = delete;
    ReportsWidget(const ReportsWidget &) = delete;
    ReportsWidget &operator=(ReportsWidget &&) = delete;
    ReportsWidget &operator=(const ReportsWidget &) = delete;
    // ~ReportsWidget();

private:
    
};

#endif // !REPORTSWIDGET_H
