#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "AbstractSubject.h"

class Cell : public AbstractSubject {
public:
    Cell();

    ~Cell();

    void Attach(AbstractObserver *observer) override;

    void Detach(AbstractObserver *observer) override;

    void Notify() override;

private:
    float CellValue;
};


#endif //SPREADSHEET_CELL_H
