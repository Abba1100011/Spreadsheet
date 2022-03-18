#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H

#include "Formulas.h"

class Sum final : public Formulas {
public:
    Sum();

    ~Sum() final;

    float GetSum();
};


#endif //SPREADSHEET_SUM_H
