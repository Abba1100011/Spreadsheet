#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "AbstractObserver.h"
#include "AbstractSubject.h"
#include "Formulas.h"
#include "Sum.h"
#include "Min.h"
#include "Mean.h"
#include "Max.h"

class Cell : public AbstractSubject {
public:
    Cell(float v);

    virtual ~Cell();

    void Subscribe() override;

    void Unsubscribe() override;

    void Notify() override;

    bool LockSetting();

    float SumFunction();

    float MaxFunction();

    float MinFunction();

    float MeanFunction();


private:
    float CellValue;

    bool LockProperty;

    Formulas *CellFunction; //ricontrollare costruttore

    friend class Max;

    friend class Min;

    friend class Sum;

    friend class Mean;
};


#endif //SPREADSHEET_CELL_H
