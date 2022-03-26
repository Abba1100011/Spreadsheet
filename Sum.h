
#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H


#include "Formulas.h"

class Sum final : public Formulas {
public:
    Sum();

    ~Sum() final;

    float GetSum();

    float update() override;

};


#endif //SPREADSHEET_SUM_H
