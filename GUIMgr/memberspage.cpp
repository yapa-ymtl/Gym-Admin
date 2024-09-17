#include "memberspage.h"
#include "ui_memberspage.h"

MembersPage::MembersPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MembersPage)
{
    ui->setupUi(this);
}

MembersPage::~MembersPage()
{
    delete ui;
}
