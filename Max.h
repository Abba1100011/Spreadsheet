
#ifndef SPREADSHEET_MAX_H
#define SPREADSHEET_MAX_H

#include "Formulas.h"
#include <list>

class Max final : public Formulas {
public:
    Max();

    ~Max() final;

    float GetMax();

protected:
    std::list<Cell *> CellParameters;

};


#endif //SPREADSHEET_MAX_H
