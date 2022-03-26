
#ifndef SPREADSHEET_MIN_H
#define SPREADSHEET_MIN_H


#include "Formulas.h"

class Min final : public Formulas {
public:
    Min();

    ~Min() final;

    float GetMin();

    float update() override;

};

#endif //SPREADSHEET_MIN_H
