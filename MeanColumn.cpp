
#include "MeanColumn.h"

MeanColumn::MeanColumn() {

}

MeanColumn::~MeanColumn() {

}

float MeanColumn::update() {
    float value = 0;
    float count = 0;
    for (auto MeanCell: SubCells) {
        value += MeanCell->getCellValue();
        count++;
    }
    value = value / count;
    this->result = value;
    return value;
}
