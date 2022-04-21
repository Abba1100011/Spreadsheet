
#include "MaxColumn.h"

MaxColumn::MaxColumn() {

}

MaxColumn::~MaxColumn() {

}

float MaxColumn::update() {
    float value = 0;
    auto it = SubCells.begin();
    if (typeid((*it)->getCellValue()) == typeid(float) && *it != NULL)
        value = (*it)->getCellValue();
    for (auto MaxCells: SubCells) {
        if (MaxCells->getCellValue() > value) {
            value = MaxCells->getCellValue();
        }
    }
    this->result = value;
    return value;
}

