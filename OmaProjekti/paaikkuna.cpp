#include "paaikkuna.h"
#include "ui_paaikkuna.h"

PaaIkkuna::PaaIkkuna(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PaaIkkuna)
{
    ui->setupUi(this);
    objectDialogIkkunaYksi = new DialogIkkunaYksi;
}

PaaIkkuna::~PaaIkkuna()
{
    delete ui;
    delete objectDialogIkkunaYksi;
}


void PaaIkkuna::on_nappiAvaaDialogIkkunaYksi_clicked()
{
    objectDialogIkkunaYksi->show();
}
