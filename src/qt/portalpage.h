#ifndef PORTALPAGE_H
#define PORTALPAGE_H

#include <QWidget>

namespace Ui {
    class PortalPage;
}
class ClientModel;
class WalletModel;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Trade page widget */
class PortalPage : public QWidget
{
    Q_OBJECT

public:
    explicit PortalPage(QWidget *parent = 0);
    ~PortalPage();

    void setModel(ClientModel *clientModel);
    void setModel(WalletModel *walletModel);

public slots:

// signals:

private:
    Ui::PortalPage *ui;
    ClientModel *clientModel;
    WalletModel *walletModel;

private slots:

};

#endif // PORTALPAGE_H
