#ifndef PAAIKKUNA_H
#define PAAIKKUNA_H

#include <QMainWindow>
#include <dialogikkunayksi.h>

QT_BEGIN_NAMESPACE
namespace Ui { class PaaIkkuna; }
QT_END_NAMESPACE

class PaaIkkuna : public QMainWindow
{
    Q_OBJECT

public:
    PaaIkkuna(QWidget *parent = nullptr);
    ~PaaIkkuna();

private slots:
    void on_nappiAvaaDialogIkkunaYksi_clicked();

private:
    Ui::PaaIkkuna *ui;
    DialogIkkunaYksi *objectDialogIkkunaYksi;
};
#endif // PAAIKKUNA_H
