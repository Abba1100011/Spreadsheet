
#ifndef SPREADSHEET_MAX_H
#define SPREADSHEET_MAX_H


#include "Formulas.h"
#include "Cell.h"


class Max final : public Formulas {
public:
    Max();

    virtual ~Max() final;

    float update() override;

};


#endif //SPREADSHEET_MAX_H
