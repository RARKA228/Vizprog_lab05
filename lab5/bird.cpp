#include "bird.h"
#include <QBrush>
#include <QPen>
#include <QPolygonF>
#include <QColor>

Bird::Bird() : ComplexObject() {
    QColor yellow(255, 223, 0); // Определим желтый цвет для тела

    // Тело птицы
    QGraphicsEllipseItem* body = new QGraphicsEllipseItem(-30, -40, 60, 80);
    body->setBrush(QBrush(yellow));
    body->setPen(QPen(Qt::black));
    addItem(body);

    // Голова птицы
    QGraphicsEllipseItem* head = new QGraphicsEllipseItem(-20, -60, 40, 40);
    head->setBrush(QBrush(yellow));
    head->setPen(QPen(Qt::black));
    addItem(head);

    // Глаза птицы
    QGraphicsEllipseItem* leftEye = new QGraphicsEllipseItem(-15, -55, 10, 10);
    leftEye->setBrush(QBrush(Qt::white));
    leftEye->setPen(QPen(Qt::black));
    addItem(leftEye);

    QGraphicsEllipseItem* rightEye = new QGraphicsEllipseItem(5, -55, 10, 10);
    rightEye->setBrush(QBrush(Qt::white));
    rightEye->setPen(QPen(Qt::black));
    addItem(rightEye);

    // Зрачки птицы
    QGraphicsEllipseItem* leftPupil = new QGraphicsEllipseItem(-12, -52, 3, 3);
    leftPupil->setBrush(QBrush(Qt::black));
    addItem(leftPupil);

    QGraphicsEllipseItem* rightPupil = new QGraphicsEllipseItem(8, -52, 3, 3);
    rightPupil->setBrush(QBrush(Qt::black));
    addItem(rightPupil);

    // Клюв птицы
    QPolygonF beak;
    beak << QPointF(0, -45) << QPointF(-5, -35) << QPointF(5, -35);
    QGraphicsPolygonItem* beakItem = new QGraphicsPolygonItem(beak);
    beakItem->setBrush(QBrush(QColor(255, 140, 0))); // Оранжевый цвет для клюва
    beakItem->setPen(QPen(Qt::black));
    addItem(beakItem);

    // Левое крыло птицы
    QPolygonF leftWing;
    leftWing << QPointF(-30, -20) << QPointF(-60, 0) << QPointF(-30, 20);
    QGraphicsPolygonItem* leftWingItem = new QGraphicsPolygonItem(leftWing);
    leftWingItem->setBrush(QBrush(yellow));
    leftWingItem->setPen(QPen(Qt::black));
    addItem(leftWingItem);

    // Правое крыло птицы
    QPolygonF rightWing;
    rightWing << QPointF(30, -20) << QPointF(60, 0) << QPointF(30, 20);
    QGraphicsPolygonItem* rightWingItem = new QGraphicsPolygonItem(rightWing);
    rightWingItem->setBrush(QBrush(yellow));
    rightWingItem->setPen(QPen(Qt::black));
    addItem(rightWingItem);

    // Лапки птицы
    QGraphicsEllipseItem* leftFoot = new QGraphicsEllipseItem(-15, 40, 10, 10);
    leftFoot->setBrush(QBrush(Qt::black));
    addItem(leftFoot);

    QGraphicsEllipseItem* rightFoot = new QGraphicsEllipseItem(5, 40, 10, 10);
    rightFoot->setBrush(QBrush(Qt::black));
    addItem(rightFoot);
}
