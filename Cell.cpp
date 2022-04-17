#include "Cell.h"
#include <iostream>

Cell::Cell(float v) : CellValue(v) {

}

Cell::~Cell() {

}

void Cell::Subscribe() {
    CellFunction->attach(this);
    Notify();
}

void Cell::Unsubscribe() {
    CellFunction->detach(this);
    Notify();

}

void Cell::Notify() {
    CellFunction->update();
}

float Cell::getCellValue() {
    return CellValue;
}

void Cell::setCellValue(float cellValue) {
    CellValue = cellValue;
}




