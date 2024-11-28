#include "human.h"
#include <QBrush>
#include <QPen>
#include <QPolygonF>
#include <QColor>

Human::Human() : ComplexObject() {
    QColor skinColor(255, 204, 153); // Цвет кожи

        // Голова
        QGraphicsEllipseItem* head = new QGraphicsEllipseItem(-30, -100, 60, 80);
        head->setBrush(QBrush(skinColor));
        head->setPen(QPen(Qt::black));
        addItem(head);

        // Тело
        QGraphicsRectItem* body = new QGraphicsRectItem(-30, -60, 60, 80);
        body->setBrush(QBrush(Qt::blue));
        body->setPen(QPen(Qt::black));
        addItem(body);

        // Левая рука
        QGraphicsRectItem* leftArm = new QGraphicsRectItem(-60, -40, 30, 10);
        leftArm->setBrush(QBrush(skinColor));
        leftArm->setPen(QPen(Qt::black));
        addItem(leftArm);

        // Правая рука
        QGraphicsRectItem* rightArm = new QGraphicsRectItem(30, -40, 30, 10);
        rightArm->setBrush(QBrush(skinColor));
        rightArm->setPen(QPen(Qt::black));
        addItem(rightArm);

        // Левая нога
        QGraphicsRectItem* leftLeg = new QGraphicsRectItem(-20, 20, 10, 40);
        leftLeg->setBrush(QBrush(Qt::blue));
        leftLeg->setPen(QPen(Qt::black));
        addItem(leftLeg);

        // Правая нога
        QGraphicsRectItem* rightLeg = new QGraphicsRectItem(10, 20, 10, 40);
        rightLeg->setBrush(QBrush(Qt::blue));
        rightLeg->setPen(QPen(Qt::black));
        addItem(rightLeg);

        // Глаза
        QGraphicsEllipseItem* leftEye = new QGraphicsEllipseItem(-16, -84, 8, 8);
        leftEye->setBrush(QBrush(Qt::white));
        leftEye->setPen(QPen(Qt::black));
        addItem(leftEye);

        QGraphicsEllipseItem* rightEye = new QGraphicsEllipseItem(8, -84, 8, 8);
        rightEye->setBrush(QBrush(Qt::white));
        rightEye->setPen(QPen(Qt::black));
        addItem(rightEye);

        // Зрачки
        QGraphicsEllipseItem* leftPupil = new QGraphicsEllipseItem(-14, -82, 4, 4);
        leftPupil->setBrush(QBrush(Qt::black));
        addItem(leftPupil);

        QGraphicsEllipseItem* rightPupil = new QGraphicsEllipseItem(10, -82, 4, 4);
        rightPupil->setBrush(QBrush(Qt::black));
        addItem(rightPupil);

        // Рот
        QGraphicsLineItem* mouth = new QGraphicsLineItem(-10, -72, 10, -72);
        mouth->setPen(QPen(Qt::black));
        addItem(mouth);
}
