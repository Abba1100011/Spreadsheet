
#include "MinColumn.h"

MinColumn::MinColumn() {

}

MinColumn::~MinColumn() {

}

float MinColumn::update() {
    float value;
    auto it = CellParameters.begin();
    value = (*it)->getCellValue();
    for (auto MinCells: CellParameters) {
        if (MinCells->getCellValue() < value) {
            value = MinCells->getCellValue();
        }
    }
    this->result = value;
    return value;
}
