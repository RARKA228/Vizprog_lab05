#include "marina.h"
#include <QBrush>
#include <QPen>
#include <QPolygonF>
#include <QColor>

Marina::Marina() : ComplexObject() {
            QPen pen(Qt::blue, 4);

            // M
            QGraphicsLineItem* m1 = new QGraphicsLineItem(0, 100, 0, 30);
            QGraphicsLineItem* m2 = new QGraphicsLineItem(0, 30, 35, 70);
            QGraphicsLineItem* m3 = new QGraphicsLineItem(35, 70, 70, 30);
            QGraphicsLineItem* m4 = new QGraphicsLineItem(70, 100, 70, 30);



            m1->setPen(pen); m2->setPen(pen); m3->setPen(pen); m4->setPen(pen);

            addItem(m1); addItem(m2); addItem(m3); addItem(m4);


            // A
            QGraphicsLineItem* a1 = new QGraphicsLineItem(85, 30, 110, 30);
            QGraphicsLineItem* a2 = new QGraphicsLineItem(85, 30, 85, 100);
            QGraphicsLineItem* a3 = new QGraphicsLineItem(110, 30, 110, 100);
            QGraphicsLineItem* a4 = new QGraphicsLineItem(85, 70, 110, 70);

            a1->setPen(pen); a2->setPen(pen); a3->setPen(pen); a4->setPen(pen);

            addItem(a1); addItem(a2); addItem(a3); addItem(a4);


            // R
            QGraphicsLineItem* r1 = new QGraphicsLineItem(125, 30, 125, 100);
            QGraphicsLineItem* r2 = new QGraphicsLineItem(125, 30, 150, 30);
            QGraphicsLineItem* r3 = new QGraphicsLineItem(150, 30, 150, 60);
            QGraphicsLineItem* r4 = new QGraphicsLineItem(150, 60, 125, 60);
            QGraphicsLineItem* r5 = new QGraphicsLineItem(125, 60, 150, 100);

            r1->setPen(pen); r2->setPen(pen); r3->setPen(pen); r4->setPen(pen); r5->setPen(pen);

            addItem(r1); addItem(r2); addItem(r3); addItem(r4); addItem(r5);

            // I
            QGraphicsLineItem* i1 = new QGraphicsLineItem(165, 30, 185, 30);
            QGraphicsLineItem* i2 = new QGraphicsLineItem(175, 30, 175, 100);
            QGraphicsLineItem* i3 = new QGraphicsLineItem(165, 100, 185, 100);

            i1->setPen(pen); i2->setPen(pen); i3->setPen(pen);

            addItem(i1); addItem(i2); addItem(i3);


            // N
            QGraphicsLineItem* n1 = new QGraphicsLineItem(200, 30, 200, 100);
            QGraphicsLineItem* n2 = new QGraphicsLineItem(200, 30, 240, 100);
            QGraphicsLineItem* n3 = new QGraphicsLineItem(240, 100, 240, 30);

            n1->setPen(pen); n2->setPen(pen); n3->setPen(pen);

            addItem(n1); addItem(n2); addItem(n3);


            // A
            QGraphicsLineItem* aa1 = new QGraphicsLineItem(255, 30, 280, 30);
            QGraphicsLineItem* aa2 = new QGraphicsLineItem(255, 30, 255, 100);
            QGraphicsLineItem* aa3 = new QGraphicsLineItem(280, 30, 280, 100);
            QGraphicsLineItem* aa4 = new QGraphicsLineItem(255, 70, 280, 70);

            aa1->setPen(pen); aa2->setPen(pen); aa3->setPen(pen); aa4->setPen(pen);

            addItem(aa1); addItem(aa2); addItem(aa3); addItem(aa4);

}
