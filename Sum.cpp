
#include "Sum.h"

Sum::Sum() {

}

Sum::~Sum() {

}

float Sum::update() {
    float value = 0;
    for (auto SumCells: CellParameters) {
        value += SumCells->CellValue;
    }
    return value;
}
