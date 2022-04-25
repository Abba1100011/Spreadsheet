#include "MaxColumn.h"

MaxColumn::MaxColumn() {

}

MaxColumn::~MaxColumn() {

}

float MaxColumn::update() {
    float value;
    try {
        auto it = SubCells.begin();
        if (*it == nullptr) {
            throw std::domain_error("no parameters inside the column");
        } else {
            value = (*it)->getCellValue();
            for (auto MaxCells: SubCells) {
                if (MaxCells->getCellValue() > value) {
                    value = MaxCells->getCellValue();
                }
            }
            this->result = value;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error while updating result : " << e.what() << std::endl;
        this->result = std::numeric_limits<float>::max();
    }
    return result;
}