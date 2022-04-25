
#include "MeanColumn.h"

MeanColumn::MeanColumn() {

}

MeanColumn::~MeanColumn() {

}

float MeanColumn::update() {
    float value = 0;
    float count = 0;
    try {
        auto it = SubCells.begin();
        if (*it == nullptr)
            throw std::domain_error("no parameters inside the column");
        else {
            for (auto MeanCell: SubCells) {
                value += MeanCell->getCellValue();
                count++;
            }
            value = value / count;
            this->result = value;
        }
    }
    catch (const std::exception &e) {
        std::cerr << "Error while updating result : " << e.what() << std::endl;
        this->result = std::numeric_limits<float>::quiet_NaN();
    }
    return result;
}
