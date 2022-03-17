#ifndef SPREADSHEET_FORMULAS_H
#define SPREADSHEET_FORMULAS_H

#include <list>
#include "AbstractObserver.h"
#include "Cell.h"

class Formulas : public AbstractObserver {
public:
// creare 4 classi derivate una per ogni operazione
    void update() override;

private:
    std::list<Cell *> CellParameters;
};


#endif //SPREADSHEET_FORMULAS_H
