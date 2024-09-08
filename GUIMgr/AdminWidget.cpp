#include "AdminWidget.h"
#include "GUIMgr/ui_AdminWidget.h"

AdminWidget::AdminWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminWidget)
{
    ui->setupUi(this);
}

AdminWidget::~AdminWidget()
{
    delete ui;
}
