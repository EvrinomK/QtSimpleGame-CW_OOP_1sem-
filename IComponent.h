#ifndef ICOMPONENT_H
#define ICOMPONENT_H

#include <QPair>
#include <QString>

class IComponent
{
public:
    virtual QString getProperty() = 0;
    virtual void addComponent(IComponent* p) = 0;
    virtual ~IComponent() {}
};

#endif // ICOMPONENT_H
