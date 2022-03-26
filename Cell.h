#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H


#include "AbstractSubject.h"
#include "Formulas.h"

class Cell : public AbstractSubject {
public:
    Cell(float v);

    ~Cell();

    void Subscribe() override;

    void Unsubscribe() override;

    void Notify() override;

    float SumFunction();

    float MaxFunction();

    float MinFunction();

    float MeanFunction();

private:
    float CellValue;

    Formulas *CellFunction;

    friend class Max;

    friend class Min;

    friend class Sum;

    friend class Mean;
};


#endif //SPREADSHEET_CELL_H
