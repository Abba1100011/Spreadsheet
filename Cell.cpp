#include "Cell.h"
#include <iostream>

Cell::Cell(float v) : CellValue(v) {

}

Cell::~Cell() {

}

void Cell::Subscribe(AbstractObserver *Ao) {
    Column = Ao;
    Column->attach(this);
    Notify();
}

void Cell::Unsubscribe(AbstractObserver *Ao) {
    Column->detach(this);
    Notify();
    Column = nullptr;
}

void Cell::Notify() {
    if (Column) {
        Column->update();
    } else {
        std::cout << "error. this cell is not subscribed to any operation column" << std::endl;
    }
}

float Cell::getCellValue() {
    return CellValue;
}

void Cell::setCellValue(float cellValue) {
    CellValue = cellValue;
    Notify();
}

