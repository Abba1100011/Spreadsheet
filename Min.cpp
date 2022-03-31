
#include "Min.h"

Min::Min() {

}

Min::~Min() {

}

float Min::update() {
    float value;
    auto it = CellParameters.begin();
    value = (*it)->CellValue;
    for (auto MinCells: CellParameters) {
        if (MinCells->CellValue < value) {
            value = MinCells->CellValue;
        }
    }
    return value;
}
