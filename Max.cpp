
#include "Max.h"

Max::Max() {

}

Max::~Max() {

}

float Max::update() {
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

