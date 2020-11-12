#include "omalabel.h"

omaLabel::omaLabel(const QString & text, QWidget * parent) : QLabel(parent)
{

}

omaLabel::~omaLabel()
{

}

void omaLabel::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "Ovea klikattu - ollaan mousePressEvent() -funktiossa" << endl;
    emit clicked();
}
