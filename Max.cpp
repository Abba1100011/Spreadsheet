
#include "Max.h"

Max::Max() {

}

Max::~Max() {

}

float Max::GetMax() {
    float value;
    auto it = CellParameters.begin();
    value = (*it)->CellValue;
    for (auto MaxCells: CellParameters) {
        if (MaxCells->CellValue > value) {
            value = MaxCells->CellValue;
        }
    }
    return value;
}

float Max::update() {
    return (GetMax());
}

