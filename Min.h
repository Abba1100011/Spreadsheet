
#ifndef SPREADSHEET_MIN_H
#define SPREADSHEET_MIN_H

#include "Formulas.h"
#include <list>

class Min final : public Formulas {
public:
    Min();

    ~Min() final;

    float GetMin();

protected:
    std::list<Cell *> CellParameters;
};

#endif //SPREADSHEET_MIN_H
