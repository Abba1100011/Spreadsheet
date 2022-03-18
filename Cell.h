#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "AbstractSubject.h"
#include "Formulas.h"

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
};


#endif //SPREADSHEET_CELL_H
