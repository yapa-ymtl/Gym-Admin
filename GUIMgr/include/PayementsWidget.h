#ifndef PAYEMENTWIDGET_H
#define PAYEMENTWIDGET_H

#include <QWidget>

class PayementsWidget : public QWidget 
{
    Q_OBJECT
public:
    PayementsWidget(QWidget* parent);
    PayementsWidget(PayementsWidget &&) = delete;
    PayementsWidget(const PayementsWidget &) = delete;
    PayementsWidget &operator=(PayementsWidget &&) = delete;
    PayementsWidget &operator=(const PayementsWidget &) = delete;
    // ~PayementsWidget();

private:
    
};

#endif // !PAYEMENTWIDGET_H
