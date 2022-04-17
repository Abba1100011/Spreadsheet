#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "AbstractObserver.h"
#include "AbstractSubject.h"
#include "OperationColumn.h"
#include "SumColumn.h"
#include "MinColumn.h"
#include "MeanColumn.h"
#include "MaxColumn.h"


class Cell : public AbstractSubject {
public:
    Cell(float v);

    virtual ~Cell();

    void Subscribe() override;

    void Unsubscribe() override;

    void Notify() override;

    float getCellValue();

    void setCellValue(float cellValue);


private:
    float CellValue;

    OperationColumn *CellFunction;

};


#endif //SPREADSHEET_CELL_H
