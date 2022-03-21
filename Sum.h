
#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H

#include "Formulas.h"
#include <list>

class Sum final : public Formulas {
public:
    Sum();

    ~Sum() final;

    float GetSum();

protected:
    std::list<Cell *> CellParameters;
};


#endif //SPREADSHEET_SUM_H
