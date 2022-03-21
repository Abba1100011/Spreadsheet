#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "AbstractSubject.h"
class Formulas;

class Cell : public AbstractSubject {
public:
    Cell(float v);

    ~Cell();

    void Subscribe(AbstractObserver *observer) override;

    void Unsubscribe(AbstractObserver *observer) override;

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
