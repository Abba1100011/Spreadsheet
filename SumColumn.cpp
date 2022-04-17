
#include "SumColumn.h"

SumColumn::SumColumn() {

}

SumColumn::~SumColumn() {

}

float SumColumn::update() {
    float value = 0;
    for (auto SumCells: CellParameters) {
        value += SumCells->getCellValue();
    }
    this->result = value;
    return value;
}
