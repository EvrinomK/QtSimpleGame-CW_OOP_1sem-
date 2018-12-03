#include "CustomGraphicScene.h"
#include <QWidget>

CustomGraphicScene::CustomGraphicScene(QObject *parent):
    QGraphicsScene ()
{
    Q_UNUSED(parent)
    pointer = nullptr;
    connect(this, &CustomGraphicScene::signalTargetCoordinate, this, &CustomGraphicScene::slotTargetPointer);
}

CustomGraphicScene::~CustomGraphicScene()
{
}

void CustomGraphicScene::slotTargetPointer(QPointF point)
{
    if(pointer)
        this->removeItem((QGraphicsItem*)pointer);

    pointer = this->addLine(0, -200, point.rx(), point.ry());
}



void CustomGraphicScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->buttons().testFlag(Qt::LeftButton))
        emit signalTargetCoordinate(event->scenePos());
}

void CustomGraphicScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(pointer)
        this->removeItem((QGraphicsItem*)pointer);
}
