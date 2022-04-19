#ifndef SPREADSHEET_ABSTRACTSUBJECT_H
#define SPREADSHEET_ABSTRACTSUBJECT_H

#include "AbstractObserver.h"

class AbstractSubject {
public:
    virtual ~AbstractSubject() = default;

    virtual void Subscribe(AbstractObserver *Ao) = 0;

    virtual void Unsubscribe(AbstractObserver *Ao) = 0;

    virtual void Notify() = 0;

    virtual float getCellValue() = 0;

};


#endif //SPREADSHEET_ABSTRACTSUBJECT_H
