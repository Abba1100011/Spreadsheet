#include "Cell.h"

Cell::Cell(float v) : CellValue(v) {

}

Cell::~Cell() {

}

void Cell::Subscribe(AbstractObserver *observer) {

}

void Cell::Unsubscribe(AbstractObserver *observer) {

}

void Cell::Notify() {

}

float Cell::SumFunction() {
    float value;
    return value;
}

float Cell::MaxFunction() {
    float value;
    return value;
}

float Cell::MinFunction() {
    float value;
    return value;
}

float Cell::MeanFunction() {
    float value;
    return value;
}
