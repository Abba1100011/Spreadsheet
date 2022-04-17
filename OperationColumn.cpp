#include "OperationColumn.h"


float OperationColumn::attach(Cell *c) {
    CellParameters.push_back(c);
}

void OperationColumn::detach(Cell *c) {
    CellParameters.remove(c);
}
