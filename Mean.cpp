
#include "Mean.h"

Mean::Mean() {

}

Mean::~Mean() {

}

float Mean::GetMean() {
    float value = 0;
    float count = 0;
    for (auto MeanCell: CellParameters) {
        value += MeanCell->CellValue;
        count++;
    }
    value = value / count;
    return value;
}

float Mean::update() {
    return (GetMean());
}
