#ifndef DIALOGIKKUNAYKSI_H
#define DIALOGIKKUNAYKSI_H

#include <QDialog>

namespace Ui {
class DialogIkkunaYksi;
}

class DialogIkkunaYksi : public QDialog
{
    Q_OBJECT

public:
    explicit DialogIkkunaYksi(QWidget *parent = nullptr);
    ~DialogIkkunaYksi();

private:
    Ui::DialogIkkunaYksi *ui;
};

#endif // DIALOGIKKUNAYKSI_H
