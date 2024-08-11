#ifndef MEMBERWIDGET_H
#define MEMBERWIDGET_H

#include <QWidget>

class MemberWidget : public QWidget 
{
    Q_OBJECT
public:
    MemberWidget(QWidget* parent);
    MemberWidget(MemberWidget &&) = delete;
    MemberWidget(const MemberWidget &) = delete;
    MemberWidget &operator=(MemberWidget &&) = delete;
    MemberWidget &operator=(const MemberWidget &) = delete;
    ~MemberWidget();

private:
    
};

#endif // !HOMEWIDGET_H
