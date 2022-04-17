
#include "MaxColumn.h"

MaxColumn::MaxColumn() {

}

MaxColumn::~MaxColumn() {

}

float MaxColumn::update() {
    float value;
    auto it = CellParameters.begin();
    value = (*it)->getCellValue();
    for (auto MaxCells: CellParameters) {
        if (MaxCells->getCellValue() > value) {
            value = MaxCells->getCellValue();
        }
    }
    this->result = value;
    return value;
}

