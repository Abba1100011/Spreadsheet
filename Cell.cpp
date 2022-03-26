#include "Cell.h"
#include <iostream>

Cell::Cell(float v) : CellValue(v) {

}

Cell::~Cell() {

}

void Cell::Subscribe() {
    CellFunction->attach(this);
}

void Cell::Unsubscribe() {
    CellFunction->detach(this);
}

void Cell::Notify() {

}

float Cell::SumFunction() {
    std::cout << "richiesta funzione: somma" << std::endl;
    CellValue = CellFunction->update();
    return CellValue;
}

float Cell::MaxFunction() {
    std::cout << "richiesta funzione: massimo" << std::endl;
    CellValue = CellFunction->update();
    return CellValue;
}

float Cell::MinFunction() {
    std::cout << "richiesta funzione: minimo" << std::endl;
    CellValue = CellFunction->update();
    return CellValue;
}

float Cell::MeanFunction() {
    std::cout << "richiesta funzione: media" << std::endl;
    CellValue = CellFunction->update();
    return CellValue;
}
