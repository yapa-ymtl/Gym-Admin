#include "homepage.h"
#include "ui_homepage.h"
#include "addmembers.h"

HomePage::HomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
    // connect(ui->pbAddMember, &QPushButton::clicked, this, &MembersPage::_sAddMemberClicked);
    connect(ui->pbAddMember, &QPushButton::clicked, this, &HomePage::_sAddMemberClicked);
}

void HomePage::_sAddMemberClicked()
{
    AddMembers dialog(this);

    if(dialog.exec() == QDialog::Accepted)
    {
        //Handle dialog data or do something
    }
}

HomePage::~HomePage()
{
    delete ui;
}
