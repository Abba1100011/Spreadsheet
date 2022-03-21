#ifndef SPREADSHEET_MEAN_H
#define SPREADSHEET_MEAN_H

#include "Formulas.h"
#include <list>

class Mean final : public Formulas {
public:
    Mean();

    ~Mean() final;

    float GetMean();

protected:
    std::list<Cell *> CellParameters;
};


#endif //SPREADSHEET_MEAN_H
