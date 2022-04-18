#ifndef SPREADSHEET_OPERATIONCOLUMN_H
#define SPREADSHEET_OPERATIONCOLUMN_H


#include <list>
#include "AbstractObserver.h"

class Cell;

class OperationColumn : public AbstractObserver {
public:
    virtual float update() = 0;

    float attach(Cell *c);

    void detach(Cell *c);

    float getResult() const;

protected:
    float result;
    std::list<Cell *> CellParameters;
};


#endif //SPREADSHEET_OPERATIONCOLUMN_H
