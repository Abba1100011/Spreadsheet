#ifndef SPREADSHEET_MEAN_H
#define SPREADSHEET_MEAN_H


#include "Formulas.h"

class Mean final : public Formulas {
public:
    Mean();

    virtual ~Mean() final;

    float update() override;

};


#endif //SPREADSHEET_MEAN_H
