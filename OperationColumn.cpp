#include "OperationColumn.h"


void OperationColumn::attach(AbstractSubject *c) {
    SubCells.push_back(c);
}

void OperationColumn::detach(AbstractSubject *c) {
    SubCells.remove(c);
}

float OperationColumn::getResult() const {
    return result;
}
