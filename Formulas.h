#ifndef SPREADSHEET_FORMULAS_H
#define SPREADSHEET_FORMULAS_H


#include "AbstractObserver.h"
#include "Cell.h"

class Formulas : public AbstractObserver {
public:
// creare 4 classi derivate una per ogni operazione
    void update() override;

};


#endif //SPREADSHEET_FORMULAS_H
