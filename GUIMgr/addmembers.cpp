#include "addmembers.h"
#include "ui_addmembers.h"
#include "utility.h"

AddMembers::AddMembers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMembers)
{
    ui->setupUi(this);



    //ui->horizontalLayout->addWidget(ui->buttonBox);
    //connect(ui->buttonBox)
    // connect();
}

AddMembers::~AddMembers()
{
    delete ui;
}

void AddMembers::on_buttonBox_accepted()
{
    _name           = ui->_leName->text();
    _gender         = Utility::stringToGender(ui->_cbGender->currentText()).value();
    _phoneNumber    = ui->_lePhoneNumber->text();
    _email          = ui->_leEmail->text();
    _nic            = ui->_leNIC->text();
    _emergency      = ui->_leEmergency->text();
    _dob            = ui->_deDOB->date();
    _address        = ui->_teAdress->toPlainText();

    qDebug() << "name = " << _name;
    qDebug() << "_gender = " << Utility::genderToString(_gender);
    qDebug() << "_phoneNumber = " << _phoneNumber;
    qDebug() << "_email = " << _email;
    qDebug() << "_nic = " << _nic;
    qDebug() << "_emergency = " << _emergency;
    qDebug() << "_dob = " << _dob;
    qDebug() << "_address = " << _address;

    this->accept();
}


void AddMembers::on_buttonBox_rejected()
{
    this->close();
}

