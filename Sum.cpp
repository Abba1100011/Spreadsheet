
#include "Sum.h"

Sum::Sum() {

}

Sum::~Sum() {

}

float Sum::GetSum() {
    float value = 0;
    for (auto SumCells: CellParameters) {
        value += SumCells->CellValue;
    }
    return value;
}

float Sum::update() {
    return (GetSum());
}
