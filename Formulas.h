#ifndef SPREADSHEET_FORMULAS_H
#define SPREADSHEET_FORMULAS_H


#include <list>
#include "AbstractObserver.h"
#include "Cell.h"


class Formulas : public AbstractObserver {
public:
    virtual float update() = 0;

    float attach(AbstractSubject *c) override;

    void detach(AbstractSubject *c) override;

protected:
    std::list<Cell *> CellParameters;
};


#endif //SPREADSHEET_FORMULAS_H
