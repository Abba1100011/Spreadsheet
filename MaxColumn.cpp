#include "MaxColumn.h"

MaxColumn::MaxColumn() {

}

MaxColumn::~MaxColumn() {

}

float MaxColumn::update() {
    float value;
    auto it = SubCells.begin();
    if (*it == nullptr)
        this->result = std::numeric_limits<float>::quiet_NaN();
    else {
        value = (*it)->getCellValue();
        for (auto MaxCells: SubCells) {
            if (MaxCells->getCellValue() > value) {
                value = MaxCells->getCellValue();
            }
        }
        this->result = value;
    }
    return result;
}