#include "portalpage.h"
#include "ui_portalpage.h"

#include "clientmodel.h"
#include "walletmodel.h"
#include "optionsmodel.h"
#include "guiutil.h"
#include "guiconstants.h"

#include <QAbstractItemDelegate>
#include <QPainter>

PortalPage::PortalPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PortalPage),
    clientModel(0)
{
    ui->setupUi(this);        
}

PortalPage::~PortalPage()
{
    delete ui;
}

void PortalPage::setModel(ClientModel *model)
{
    this->clientModel = model;
}