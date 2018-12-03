#ifndef BOX_H
#define BOX_H

#include <QList>
#include <QString>
#include <QPair>

#include "IComponent.h"

class Box: public IComponent
{
public:
    Box();
    QString getProperty() override;
    void addComponent(IComponent* p) override;
    ~Box() override;

private:
    QString property;
    QList<IComponent*> componentList;
};

#endif // BOX_H
