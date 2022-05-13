
#include "MeanColumn.h"

MeanColumn::MeanColumn() {

}

MeanColumn::~MeanColumn() {

}

float MeanColumn::update() {
    float value = 0;
    float count = 0;

        auto it = SubCells.begin();
        if (*it == nullptr)
            this->result = std::numeric_limits<float>::quiet_NaN();
        else {
            for (auto MeanCell: SubCells) {
                value += MeanCell->getCellValue();
                count++;
            }
            value = value / count;
            this->result = value;
        }
    return result;
}
