#ifndef SPREADSHEET_ABSTRACTOBSERVER_H
#define SPREADSHEET_ABSTRACTOBSERVER_H


#include "AbstractSubject.h"

class AbstractObserver {
public:
    virtual ~AbstractObserver() = default;

    virtual float update() = 0;

    virtual float attach(AbstractSubject *c) = 0;

    virtual void detach(AbstractSubject *c) = 0;
};


#endif //SPREADSHEET_ABSTRACTOBSERVER_H
