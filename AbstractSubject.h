#ifndef SPREADSHEET_ABSTRACTSUBJECT_H
#define SPREADSHEET_ABSTRACTSUBJECT_H

#include "AbstractObserver.h"

class AbstractSubject {
public:
    virtual ~AbstractSubject() = default;

    virtual void Attach(AbstractObserver *observer) = 0;

    virtual void Detach(AbstractObserver *observer) = 0;

    virtual void Notify() = 0;
};


#endif //SPREADSHEET_ABSTRACTSUBJECT_H
