#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>

namespace Ui {
class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

public slots:
    void _sAddMemberClicked();

private:
    Ui::HomePage *ui;
};

#endif // HOMEPAGE_H
