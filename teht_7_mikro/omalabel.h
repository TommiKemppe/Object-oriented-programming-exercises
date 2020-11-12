#ifndef OMALABEL_H
#define OMALABEL_H

#include <QWidget>
#include <QLabel>
#include <QDebug>

class omaLabel : public QLabel
{
    Q_OBJECT

public:
    omaLabel(const QString & text, QWidget *parent);
    ~omaLabel();

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent *event);

};

#endif // OMALABEL_H
