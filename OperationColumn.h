#ifndef SPREADSHEET_OPERATIONCOLUMN_H
#define SPREADSHEET_OPERATIONCOLUMN_H

#include <list>
#include <stdexcept>
#include <limits>
#include <iostream>
#include "AbstractObserver.h"


class OperationColumn : public AbstractObserver {
public:
    virtual float update() = 0;

    float attach(AbstractSubject *c) override;

    void detach(AbstractSubject *c) override;

    float getResult() const;

protected:
    float result;
    std::list<AbstractSubject *> SubCells;
};


#endif //SPREADSHEET_OPERATIONCOLUMN_H
