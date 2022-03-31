
#ifndef SPREADSHEET_MIN_H
#define SPREADSHEET_MIN_H


#include "Formulas.h"

class Min final : public Formulas {
public:
    Min();

    virtual ~Min() final;

    float update() override;

};

#endif //SPREADSHEET_MIN_H
