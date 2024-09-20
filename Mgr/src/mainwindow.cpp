#include <QStackedWidget>
#include <QVBoxLayout>
#include <qcombobox.h>
#include <QListWidgetItem>
#include <QPushButton>


#include "mainwindow.h"
#include "Mgr/ui_mainwindow.h"
#include "../../GUIMgr/memberspage.h"
#include "../../GUIMgr/homepage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _pagesStack(nullptr)
    , _pageNamesList(nullptr)
{
    ui->setupUi(this);

    MembersPage *_membersPage = new MembersPage(this);
    HomePage *_homePage = new HomePage(this);
    QWidget *firstPageWidget = new QWidget;
    // HomePage *_homePage = new HomePage(this);
    QWidget *secondPageWidget = new QWidget;
    QWidget *thirdPageWidget = new QWidget;

    // QPushButton *pb1 = new QPushButton(firstPageWidget);
    // QVBoxLayout *vLayout4first = new QVBoxLayout(firstPageWidget);
    // vLayout4first->addWidget(pb1);

    // firstPageWidget->setLayout(vLayout4first);

    // _pagesStack = new QStackedWidget(this);

    // _pageNamesList = new QListWidget(this);
    // _pageNamesList->setViewMode(QListView::IconMode);

    ui->_pageNamesList->setIconSize(QSize(96,84));
    ui->_pageNamesList->setMovement(QListView::Static);
    ui->_pageNamesList->setSpacing(5);
    // ui->_pageNamesList->setMinimumHeight(1920);
    ui->_pageNamesList->setMinimumWidth(150);
    ui->_pageNamesList->setMaximumWidth(250);
    ui->_pageNamesList->setFlow(QListView::TopToBottom);
    ui->_pageNamesList->setLayoutMode(QListView::SinglePass);
    ui->_pageNamesList->setSelectionRectVisible(true);

    _addNewPage2Stack(_homePage, "Home");
    _addNewPage2Stack(_membersPage, "Members");
    _addNewPage2Stack(secondPageWidget, "Second");
    _addNewPage2Stack(thirdPageWidget, "Third");

    ui->_pageNamesList->setCurrentRow(0);
    ui->_pageStack->setCurrentIndex(0);

    // QHBoxLayout *hLayout = new QHBoxLayout(this);
    // hLayout->addWidget(_pageNamesList);
    // hLayout->addWidget(_membersPage,Qt::AlignRight);
    // // hLayout->addWidget(_membersPage,1);

    // QVBoxLayout *mainLayout = new QVBoxLayout(this);
    // mainLayout->addLayout(hLayout);
    // mainLayout->addWidget(_membersPage);
    // mainLayout->addStretch(1);
    // mainLayout->addSpacing(12);

    // setLayout(mainLayout);
    // setCentralWidget()

    connect(ui->_pageNamesList, &QListWidget::itemClicked,
        this, &MainWindow::_pageNameClicked);
}

bool MainWindow::_addNewPage2Stack(QWidget *pageWidget_, const QString &pageName_)
{
    ui->_pageStack->addWidget(pageWidget_);

    QListWidgetItem *pageNameWidgetItem = new QListWidgetItem(ui->_pageNamesList);
    pageNameWidgetItem->setText(pageName_);
    pageNameWidgetItem->setSizeHint(QSize(50, 30));
    pageNameWidgetItem->setTextAlignment(Qt::AlignHCenter);

    return true;
}

void MainWindow::_pageNameClicked(QListWidgetItem *item)
{
    int index = 0;
    index = ui->_pageNamesList->row(item);
    ui->_pageStack->setCurrentIndex(index);
    // _pagesStack->currentWidget()->show();
    // qDebug() << "clicked. INdex : " ;

}

MainWindow::~MainWindow()
{
    delete ui;
}
