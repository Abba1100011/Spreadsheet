#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "AbstractSubject.h"


class Cell : public AbstractSubject {
public:
    Cell(float v);

    virtual ~Cell();

    void Subscribe(AbstractObserver *Ao) override;

    void Unsubscribe(AbstractObserver *Ao) override;

    void Notify() override;

    float getCellValue();

    void setCellValue(float cellValue);


private:
    float CellValue;

    AbstractObserver *Column;

};


#endif //SPREADSHEET_CELL_H
