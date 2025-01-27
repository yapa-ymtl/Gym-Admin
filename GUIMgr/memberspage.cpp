#include "memberspage.h"
#include "ui_memberspage.h"
#include "addmembers.h"

MembersPage::MembersPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MembersPage)
{
    ui->setupUi(this);

    connect(ui->pbAddMember, &QPushButton::clicked, this, &MembersPage::_sAddMemberClicked);
}

void MembersPage::_sAddMemberClicked()
{
    AddMembers dialog(this);

    if(dialog.exec() == QDialog::Accepted)
    {
        //Handle dialog data or do something
    }
}

MembersPage::~MembersPage()
{
    delete ui;
}
