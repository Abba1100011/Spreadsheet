#include "Formulas.h"


float Formulas::attach(AbstractSubject *c) {
    CellParameters.push_back(c);
}

void Formulas::detach(AbstractSubject *c) {
    CellParameters.remove(c);
}
