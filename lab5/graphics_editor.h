#ifndef GRAPHICS_EDITOR_H
#define GRAPHICS_EDITOR_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem> // для вставки картинок
#include <QPushButton>
#include <QComboBox>

class CustomGraphicsView;

class GraphicsEditorWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit GraphicsEditorWindow(QWidget *parent = nullptr);
    ~GraphicsEditorWindow();

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;  // обработка события начала перетаскивания
    void dropEvent(QDropEvent *event) override;  // обработка события конца перетаскивания

private slots:
    void addCircle();
    void addRectangle();
    void addTriangle();
    void addLine();
    void saveImage();
    void importImage();
    void setBrushSize();
    void setBrushColor();
    void setEraser();
    void changeBackgroundColor();
    void setBrushStyle();
    void deleteSelectedItem();
    void addText();

private:
    QGraphicsScene *scene;    // Сцена для отрисовки элементов
    QColor currentBrushColor;
    qreal currentBrushSize;
    Qt::BrushStyle currentBrushStyle;
    bool isEraserMode;
};

#endif // GRAPHICS_EDITOR_H
