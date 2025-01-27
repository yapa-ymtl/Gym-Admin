#ifndef MEMBERSPAGE_H
#define MEMBERSPAGE_H

#include <QWidget>

namespace Ui {
class MembersPage;
}

class MembersPage : public QWidget
{
    Q_OBJECT

public:
    explicit MembersPage(QWidget *parent = nullptr);
    ~MembersPage();

public slots:
    void _sAddMemberClicked();

private:
    Ui::MembersPage *ui;

};

#endif // MEMBERSPAGE_H
