#ifndef SHELL_H
#define SHELL_H

#include "IComponent.h"
#include <QList>

class Shell: public IComponent
{
public:

    Shell();
    ~Shell() override;

    QString getProperty() override;
    void addComponent(IComponent* p) override;

private:

    //y = k*x + b

    double k;
    double b;

    QList<IComponent*> componentList;
};

#endif // SHELL_H
