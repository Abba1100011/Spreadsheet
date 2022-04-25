
#include "SumColumn.h"

SumColumn::SumColumn() {

}

SumColumn::~SumColumn() {

}

float SumColumn::update() {
    float value = 0;
    for (auto SumCells: SubCells) {
        value += SumCells->getCellValue();
    }
    this->result = value;
    return result;
}
