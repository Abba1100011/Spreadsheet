#ifndef SPREADSHEET_MEAN_H
#define SPREADSHEET_MEAN_H


#include "Formulas.h"

class Mean final : public Formulas {
public:
    Mean();

    ~Mean() final;

    float GetMean();

    float update() override;

};


#endif //SPREADSHEET_MEAN_H
