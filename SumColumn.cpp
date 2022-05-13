
#include "SumColumn.h"

SumColumn::SumColumn() {

}

SumColumn::~SumColumn() {

}

float SumColumn::update() {
    float value = 0;
        auto it = SubCells.begin();
        if (*it == nullptr)
            this->result = std::numeric_limits<float>::quiet_NaN();
        else {
            for (auto SumCells: SubCells)
                value += SumCells->getCellValue();
            this->result = value;
        }
    return result;
}