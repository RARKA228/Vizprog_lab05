#include "graphics_editor.h"
#include <QGraphicsView>
#include <QToolBar>
#include <QAction>
#include <QFileDialog>
#include <QPixmap>
#include <QPainter>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QInputDialog>
#include <QColorDialog>
#include <QDebug>
#include <QGraphicsTextItem>
#include <QFontDialog>
#include <QGraphicsPixmapItem> // Для отображения изображений
#include <QComboBox>
#include <customgraphicsview.h>
#include "QtMath"

GraphicsEditorWindow::GraphicsEditorWindow(QWidget *parent)
    : QMainWindow(parent), scene(new QGraphicsScene(this)),
      currentBrushSize(10), isEraserMode(false), currentBrushStyle(Qt::SolidPattern) {

    // Создаем вид и добавляем сцену
    QGraphicsView *view = new CustomGraphicsView(scene, this);
    setCentralWidget(view);
    setWindowTitle("Graphics Editor");

    // Устанавливаем минимальный и максимальный размер окна
    setMinimumSize(400, 400);  // Минимальный размер окна
    setMaximumSize(1600, 1600); // Максимальный размер окна
    setAcceptDrops(true);     // Разрешаем перетаскивание

    // Создаем панель инструментов
    QToolBar *toolbar = addToolBar("Shapes");



    // Кнопка для удаления выбранного элемента
    QAction *deleteAction = new QAction("Delete", this);
    toolbar->addAction(deleteAction);
    connect(deleteAction, &QAction::triggered, this, &GraphicsEditorWindow::deleteSelectedItem);


    // Добавляем кнопку для импорта изображения
    QAction *importAction = new QAction("Import Image", this);
    toolbar->addAction(importAction);
    connect(importAction, &QAction::triggered, this, &GraphicsEditorWindow::importImage);

    // Добавляем кнопку для сохранения изображения
    QAction *saveAction = new QAction("Save", this);
    toolbar->addAction(saveAction);
    connect(saveAction, &QAction::triggered, this, &GraphicsEditorWindow::saveImage);

    // Кнопка для изменения фона
    QAction *backgroundAction = new QAction("Background Color", this);
    toolbar->addAction(backgroundAction);
    connect(backgroundAction, &QAction::triggered, this, &GraphicsEditorWindow::changeBackgroundColor);

    // Кнопка для изменения размера кисти
    QAction *brushSizeAction = new QAction("Brush Size", this);
    toolbar->addAction(brushSizeAction);
    connect(brushSizeAction, &QAction::triggered, this, &GraphicsEditorWindow::setBrushSize);

    // Кнопка для изменения цвета кисти
    QAction *brushColorAction = new QAction("Brush Color", this);
    toolbar->addAction(brushColorAction);
    connect(brushColorAction, &QAction::triggered, this, &GraphicsEditorWindow::setBrushColor);

     QComboBox *brushStyleComboBox = new QComboBox(this);
     brushStyleComboBox->addItem("Solid", QVariant::fromValue(Qt::SolidPattern));
     brushStyleComboBox->addItem("Dense 1", QVariant::fromValue(Qt::Dense5Pattern));
     brushStyleComboBox->addItem("Dense 2", QVariant::fromValue(Qt::Dense6Pattern));
     brushStyleComboBox->addItem("Dense 3", QVariant::fromValue(Qt::Dense7Pattern));
     brushStyleComboBox->addItem("Dense 4", QVariant::fromValue(Qt::Dense7Pattern));
     brushStyleComboBox->addItem("Dense 5", QVariant::fromValue(Qt::Dense5Pattern));
     brushStyleComboBox->addItem("Dense 6", QVariant::fromValue(Qt::Dense6Pattern));
     brushStyleComboBox->addItem("Dense 7", QVariant::fromValue(Qt::Dense7Pattern));
     brushStyleComboBox->addItem("Cross", QVariant::fromValue(Qt::CrossPattern));
     brushStyleComboBox->addItem("Horizontal", QVariant::fromValue(Qt::HorPattern));
     brushStyleComboBox->addItem("Vertical", QVariant::fromValue(Qt::VerPattern));
     toolbar->addWidget(brushStyleComboBox);
     connect(brushStyleComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &GraphicsEditorWindow::setBrushStyle);

     // Кнопка для ластика
     QAction *eraserAction = new QAction("Eraser", this);
     toolbar->addAction(eraserAction);
     connect(eraserAction, &QAction::triggered, this, &GraphicsEditorWindow::setEraser);
}

GraphicsEditorWindow::~GraphicsEditorWindow() {
    delete scene;
}

// Слот для сохранения изображения
void GraphicsEditorWindow::saveImage() {
    QString filePath = QFileDialog::getSaveFileName(this, "Save Image", "", "PNG Files (*.png)");

    if (!filePath.isEmpty()) {
        // Устанавливаем размер изображения под размер сцены
        QPixmap pixmap(scene->sceneRect().size().toSize());

        // Создаём QPainter для рисования на QPixmap
        QPainter painter(&pixmap);

        // Отрисовываем сцену на QPixmap
        scene->render(&painter);

        // Сохраняем изображение в фа��л
        pixmap.save(filePath, "PNG");
    }
}

// Слот для импорта изображения

void GraphicsEditorWindow::importImage() {
    QString filePath = QFileDialog::getOpenFileName(this, "Import Image", "", "Images (*.png *.jpg *.jpeg *.bmp)");

    if (!filePath.isEmpty()) {
        QPixmap pixmap(filePath); // Загружаем изображение

        if (!pixmap.isNull()) {
            QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
            item->setPos(0, 0); // Устанавливаем позицию на сцене
            scene->addItem(item); // Добавляем изображение на сцену
        }
    }
}

void GraphicsEditorWindow::setBrushStyle() {
    QComboBox *brushStyleComboBox = qobject_cast<QComboBox*>(sender());
    if (brushStyleComboBox) {
        Qt::BrushStyle style = static_cast<Qt::BrushStyle>(brushStyleComboBox->currentData().toInt());
        currentBrushStyle = style;
        static_cast<CustomGraphicsView*>(centralWidget())->setBrushStyle(currentBrushStyle);
    }
}

void GraphicsEditorWindow::setBrushSize() {
    bool ok;
    qreal size = QInputDialog::getDouble(this, "Brush Size", "Enter brush size:", currentBrushSize, 1, 50, 1, &ok);
    if (ok) {
        currentBrushSize = size;
        static_cast<CustomGraphicsView*>(centralWidget())->setBrushSize(currentBrushSize);
    }
}

void GraphicsEditorWindow::setBrushColor() {
    QColor color = QColorDialog::getColor(currentBrushColor, this, "Select Brush Color");
    if (color.isValid()) {
        currentBrushColor = color;
        isEraserMode = false;
        static_cast<CustomGraphicsView*>(centralWidget())->setBrushColor(currentBrushColor);
    }
}

void GraphicsEditorWindow::setEraser() {
    isEraserMode = true;
    static_cast<CustomGraphicsView*>(centralWidget())->setBrushColor(scene->backgroundBrush().color());
}

void GraphicsEditorWindow::changeBackgroundColor() {
    QColor color = QColorDialog::getColor(scene->backgroundBrush().color(), this, "Select Background Color");
    if (color.isValid()) {
        scene->setBackgroundBrush(color);
        if (isEraserMode) {
            static_cast<CustomGraphicsView*>(centralWidget())->setBrushColor(color);
        }
    }
}

void GraphicsEditorWindow::deleteSelectedItem() {
    // Получаем выбранные элементы
    QList<QGraphicsItem*> selectedItems = scene->selectedItems();
    if (selectedItems.isEmpty()) {
        qDebug() << "No items selected for deletion."; // Отладочное сообщение
        return;
    }

    // Удаляем все выбранные элементы
    for (QGraphicsItem *item : selectedItems) {
        scene->removeItem(item); // Удаляем элемент из сцены
        delete item; // Удаляем объект из памяти
        qDebug() << "Item deleted."; // Подтверждение удаления
    }
}


// Обработка события входа перетаскивания
void GraphicsEditorWindow::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasImage()) {
        event->acceptProposedAction();
    }
}

// Обработка события завершения перетаскивания
void GraphicsEditorWindow::dropEvent(QDropEvent *event) {
    if (event->mimeData()->hasImage()) {
        QPixmap pixmap = qvariant_cast<QPixmap>(event->mimeData()->imageData());
        QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
        item->setPos(event->pos()); // Устанавливаем позицию на сцене
        scene->addItem(item);        // Добавляем изображение на сцену
        event->acceptProposedAction();
    }
}
