#ifndef CUSTOMGRAPHICSCENE_H
#define CUSTOMGRAPHICSCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class CustomGraphicScene: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit CustomGraphicScene(QObject *parent = nullptr);
    ~CustomGraphicScene() override;

public slots:
    void slotTargetPointer(QPointF point);

signals:
    void signalTargetCoordinate(QPointF point);

private:
    // Функция, в которой производится отслеживание положения мыши
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    //void enterEvent(QEvent * event);
private:
    QGraphicsLineItem * pointer;
};

#endif // CUSTOMGRAPHICSCENE_H
