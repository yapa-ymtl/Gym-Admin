#include "mainwindow.h"
// #include "maintabwidget.h"
#include "Mgr/ui_mainwindow.h"
#include <QStackedWidget>
#include <QVBoxLayout>
#include <qcombobox.h>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _pagesStack(nullptr)
    , _pageNamesList(nullptr)
{
    ui->setupUi(this);

    // _mainTabWidget = new MainTabWidget(this);
    // // _mainTabWidget->setTabPosition(QTabWidget::West);

    QWidget *firstPageWidget = new QWidget;
    QWidget *secondPageWidget = new QWidget;
    QWidget *thirdPageWidget = new QWidget;

    _pagesStack = new QStackedWidget(this);
    _pagesStack->addWidget(firstPageWidget);
    _pagesStack->addWidget(secondPageWidget);
    _pagesStack->addWidget(thirdPageWidget);

    _pageNamesList = new QListWidget(this);
    // _pageNamesList->setViewMode(QListView::IconMode);
    _pageNamesList->setIconSize(QSize(96,84));
    _pageNamesList->setMovement(QListView::Static);
    _pageNamesList->setSpacing(5);
    _pageNamesList->setMinimumHeight(1920);
    _pageNamesList->setMinimumWidth(150);
    _pageNamesList->setFlow(QListView::TopToBottom);
    _pageNamesList->setLayoutMode(QListView::SinglePass);
    _pageNamesList->setSelectionRectVisible(true);

    QListWidgetItem *firstPageName = new QListWidgetItem(_pageNamesList);
    firstPageName->setText(tr("First"));
    firstPageName->setSizeHint(QSize(50, 30));
    firstPageName->setTextAlignment(Qt::AlignHCenter);

    QListWidgetItem *secondPageName = new QListWidgetItem(_pageNamesList);
    secondPageName->setText(tr("Second"));
    secondPageName->setTextAlignment(Qt::AlignHCenter);

    QListWidgetItem *thirdPageName = new QListWidgetItem(_pageNamesList);
    thirdPageName->setText(tr("Third"));
    thirdPageName->setTextAlignment(Qt::AlignHCenter);

    _pageNamesList->setCurrentRow(0);
    _pagesStack->setCurrentIndex(0);

    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(_pageNamesList);
    hLayout->addWidget(_pagesStack,1);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(hLayout);
    mainLayout->addStretch(1);
    mainLayout->addSpacing(12);

    setLayout(mainLayout);

    connect(_pageNamesList, &QListWidget::itemClicked,
        this, &MainWindow::_pageNameClicked);
}

void MainWindow::_pageNameClicked(QListWidgetItem *item)
{
    int index = 0;
    index = _pageNamesList->row(item);
    _pagesStack->setCurrentIndex(index);
    qDebug() << "clicked";

}

MainWindow::~MainWindow()
{
    delete ui;
}
