
#include "MaxColumn.h"

MaxColumn::MaxColumn() {

}

MaxColumn::~MaxColumn() {

}

float MaxColumn::update() {
    float value;
    auto it = SubCells.begin();
    if (*it != nullptr)
        value = (*it)->getCellValue();
    for (auto MaxCells: SubCells) {
        if (MaxCells->getCellValue() > value) {
            value = MaxCells->getCellValue();
        }
    }
    this->result = value;
    return value;
}

