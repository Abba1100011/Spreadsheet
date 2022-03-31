
#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H


#include "Formulas.h"

class Sum final : public Formulas {
public:
    Sum();

    virtual ~Sum() override;

    float update() override;

};


#endif //SPREADSHEET_SUM_H
