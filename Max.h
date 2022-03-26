
#ifndef SPREADSHEET_MAX_H
#define SPREADSHEET_MAX_H


#include "Formulas.h"

class Max final : public Formulas {
public:
    Max();

    ~Max() final;

    float GetMax();

    float update() override;

};


#endif //SPREADSHEET_MAX_H
