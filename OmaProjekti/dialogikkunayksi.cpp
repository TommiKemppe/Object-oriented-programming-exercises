#include "dialogikkunayksi.h"
#include "ui_dialogikkunayksi.h"

DialogIkkunaYksi::DialogIkkunaYksi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogIkkunaYksi)
{
    ui->setupUi(this);
}

DialogIkkunaYksi::~DialogIkkunaYksi()
{
    delete ui;
}
