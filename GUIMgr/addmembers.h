#ifndef ADDMEMBERS_H
#define ADDMEMBERS_H

#include <QDialog>
#include <QDate>

#include "utility.h"

namespace Ui {
class AddMembers;
}

class AddMembers : public QDialog
{
    Q_OBJECT

public:
    explicit AddMembers(QWidget *parent = nullptr);
    ~AddMembers();

private slots:
    //void on_lineEdit_3_textChanged(const QString &arg1);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddMembers *ui;

    QString _name;
    Utility::Gender _gender;
    QString _phoneNumber;
    QString _email;
    QString _nic;
    QString _emergency;
    QDate _dob;
    QString _address;


};

#endif // ADDMEMBERS_H
