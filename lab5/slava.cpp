#include "slava.h"
#include <QBrush>
#include <QPen>
#include <QPolygonF>
#include <QColor>

Slava::Slava() : ComplexObject() {
    QPen pen(Qt::white, 4);

    // S
    QGraphicsLineItem* s1 = new QGraphicsLineItem(0, 65, 30, 65);
    QGraphicsLineItem* s2 = new QGraphicsLineItem(30, 65, 30, 35);
    QGraphicsLineItem* s3 = new QGraphicsLineItem(30, 35, 0, 35);
    QGraphicsLineItem* s4 = new QGraphicsLineItem(0, 35, 0, 0);
    QGraphicsLineItem* s5 = new QGraphicsLineItem(0, 0, 30, 0);

    s1->setPen(pen); s2->setPen(pen); s3->setPen(pen); s4->setPen(pen); s5->setPen(pen);

    addItem(s1); addItem(s2); addItem(s3); addItem(s4); addItem(s5);

    // L
    QGraphicsLineItem* l1 = new QGraphicsLineItem(50, 65, 50, 0);
    QGraphicsLineItem* l2 = new QGraphicsLineItem(50, 65, 80, 65);

    l1->setPen(pen); l2->setPen(pen);

    addItem(l1); addItem(l2);

    // A
    QGraphicsLineItem* a1 = new QGraphicsLineItem(100, 0, 130, 0);
    QGraphicsLineItem* a2 = new QGraphicsLineItem(100, 65, 100, 0);
    QGraphicsLineItem* a3 = new QGraphicsLineItem(130, 65, 130, 0);
    QGraphicsLineItem* a4 = new QGraphicsLineItem(100, 35, 130, 35);

    a1->setPen(pen); a2->setPen(pen); a3->setPen(pen); a4->setPen(pen);

    addItem(a1); addItem(a2); addItem(a3); addItem(a4);

    // V
    QGraphicsLineItem* v1 = new QGraphicsLineItem(140, 0, 160, 65);
    QGraphicsLineItem* v2 = new QGraphicsLineItem(160, 65, 190, 0);

    v1->setPen(pen); v2->setPen(pen);
    addItem(v1); addItem(v2);

    // A
    QGraphicsLineItem* aa1 = new QGraphicsLineItem(200, 0, 230, 0);
    QGraphicsLineItem* aa2 = new QGraphicsLineItem(200, 65, 200, 0);
    QGraphicsLineItem* aa3 = new QGraphicsLineItem(230, 65, 230, 0);
    QGraphicsLineItem* aa4 = new QGraphicsLineItem(200, 35, 230, 35);

    aa1->setPen(pen); aa2->setPen(pen); aa3->setPen(pen); aa4->setPen(pen);

    addItem(aa1); addItem(aa2); addItem(aa3); addItem(aa4);
}
