
#include "MinColumn.h"

MinColumn::MinColumn() {

}

MinColumn::~MinColumn() {

}

float MinColumn::update() {
    float value;
    auto it = SubCells.begin();
    if (*it != NULL)
        value = (*it)->getCellValue();
    for (auto MinCells: SubCells) {
        if (MinCells->getCellValue() < value) {
            value = MinCells->getCellValue();
        }
    }
    this->result = value;
    return value;
}
