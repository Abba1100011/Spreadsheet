
#include "MinColumn.h"

MinColumn::MinColumn() {

}

MinColumn::~MinColumn() {

}

float MinColumn::update() {
    float value;
    try {
        auto it = SubCells.begin();
        if (*it == nullptr)
            throw std::domain_error("no parameters inside the column");
        else {
            value = (*it)->getCellValue();
            for (auto MinCells: SubCells) {
                if (MinCells->getCellValue() < value) {
                    value = MinCells->getCellValue();
                }
            }
            this->result = value;
        }
    }
    catch (const std::exception &e) {
        std::cerr << "Error while updating result : " << e.what() << std::endl;
        this->result = std::numeric_limits<float>::quiet_NaN();
    }
    return result;
}
