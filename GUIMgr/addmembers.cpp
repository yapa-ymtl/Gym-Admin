#include "addmembers.h"
#include "ui_addmembers.h"

AddMembers::AddMembers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMembers)
{
    ui->setupUi(this);

    // connect();
}

AddMembers::~AddMembers()
{
    delete ui;
}
