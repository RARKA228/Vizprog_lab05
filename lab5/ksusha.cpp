#include "ksusha.h"
#include <QBrush>
#include <QPen>
#include <QPolygonF>
#include <QColor>

Ksusha::Ksusha() : ComplexObject() {
    QPen pen(Qt::red, 4);

    // K
    QGraphicsLineItem* k1 = new QGraphicsLineItem(0, 30, 0, 100);
    QGraphicsLineItem* k2 = new QGraphicsLineItem(0, 65, 35, 100);
    QGraphicsLineItem* k3 = new QGraphicsLineItem(0, 65, 35, 30);

    k1->setPen(pen); k2->setPen(pen); k3->setPen(pen);

    addItem(k1); addItem(k2); addItem(k3);


    // S
    QGraphicsLineItem* s1 = new QGraphicsLineItem(50, 30, 85, 30);
    QGraphicsLineItem* s2 = new QGraphicsLineItem(50, 30, 50, 65);
    QGraphicsLineItem* s3 = new QGraphicsLineItem(50, 65, 85, 65);
    QGraphicsLineItem* s4 = new QGraphicsLineItem(85, 65, 85, 100);
    QGraphicsLineItem* s5 = new QGraphicsLineItem(85, 100, 50, 100);

    s1->setPen(pen); s2->setPen(pen); s3->setPen(pen); s4->setPen(pen); s5->setPen(pen);

    addItem(s1); addItem(s2); addItem(s3); addItem(s4); addItem(s5);


    // U
    QGraphicsLineItem* u1 = new QGraphicsLineItem(100, 30, 100, 100);
    QGraphicsLineItem* u2 = new QGraphicsLineItem(130, 100, 100, 100);
    QGraphicsLineItem* u3 = new QGraphicsLineItem(130, 100, 130, 30);

    u1->setPen(pen); u2->setPen(pen); u3->setPen(pen);

    addItem(u1); addItem(u2); addItem(u3);


    // S
    QGraphicsLineItem* ss1 = new QGraphicsLineItem(145, 30, 180, 30);
    QGraphicsLineItem* ss2 = new QGraphicsLineItem(145, 30, 145, 65);
    QGraphicsLineItem* ss3 = new QGraphicsLineItem(145, 65, 180, 65);
    QGraphicsLineItem* ss4 = new QGraphicsLineItem(180, 65, 180, 100);
    QGraphicsLineItem* ss5 = new QGraphicsLineItem(180, 100, 145, 100);

    ss1->setPen(pen); ss2->setPen(pen); ss3->setPen(pen); ss4->setPen(pen); ss5->setPen(pen);

    addItem(ss1); addItem(ss2); addItem(ss3); addItem(ss4); addItem(ss5);


    // H
    QGraphicsLineItem* h1 = new QGraphicsLineItem(195, 30, 195, 100);
    QGraphicsLineItem* h2 = new QGraphicsLineItem(195, 65, 230, 65);
    QGraphicsLineItem* h3 = new QGraphicsLineItem(230, 100, 230, 30);

    h1->setPen(pen); h2->setPen(pen); h3->setPen(pen);

    addItem(h1); addItem(h2); addItem(h3);


    // A
    QGraphicsLineItem* a1 = new QGraphicsLineItem(245, 30, 280, 30);
    QGraphicsLineItem* a2 = new QGraphicsLineItem(245, 30, 245, 100);
    QGraphicsLineItem* a3 = new QGraphicsLineItem(280, 30, 280, 100);
    QGraphicsLineItem* a4 = new QGraphicsLineItem(245, 65, 280, 65);

    a1->setPen(pen); a2->setPen(pen); a3->setPen(pen); a4->setPen(pen);

    addItem(a1); addItem(a2); addItem(a3); addItem(a4);
}
