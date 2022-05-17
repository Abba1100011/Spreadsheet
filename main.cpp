#include <iostream>
#include "Cell.h"
#include "SumColumn.h"
#include "MinColumn.h"
#include "MaxColumn.h"
#include "MeanColumn.h"

int main() {
    AbstractSubject *a;
    AbstractSubject *b;
    AbstractSubject *c;
    AbstractObserver *A;

    a = new Cell(10);
    b = new Cell(5);
    c = new Cell(3);
    A = new SumColumn(); //Sostituire con apposito costruttore a seconda dell'operazione richiesta

    a->Subscribe(A);
    b->Subscribe(A);
    c->Subscribe(A);

    //std::cout << a->getCellValue() << std::endl;
    //std::cout << b->getCellValue() << std::endl;
    //std::cout << c->getCellValue() << std::endl;
    std::cout << A->getResult() << std::endl;
    a->Unsubscribe(A);
    std::cout << A->getResult() << std::endl;
    b->Unsubscribe(A);
    std::cout << A->getResult() << std::endl;
    c->Unsubscribe(A);
    std::cout << A->getResult() << std::endl;

    return 0;
}
