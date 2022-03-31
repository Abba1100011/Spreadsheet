#include "Cell.h"
#include <iostream>

Cell::Cell(float v) : CellValue(v) {
    int a;
    char l;
    std::cout << "Prego scegliere la la funzione desiderata dalla cellula" << std::endl;
    std::cout
            << "Inserire 1 per la funzione Somma,2 per la funzione di minimo,3 per la funzione di massimo,4 per la media aritmetica"
            << std::endl;
    std::cout << "Qualunque altro inserimento lascerà la cella scollegata da qualunque operazione" << std::endl;
    std::cin >> a;
    switch (a) {
        case 1 :
            std::cout << "operazione richiesta: somma" << std::endl;
            CellFunction = new Sum();
            break;
        case 2:
            std::cout << "operazione richiesta: minimo" << std::endl;
            CellFunction = new Min();
            break;
        case 3:
            std::cout << "operazione richiesta: massimo" << std::endl;
            CellFunction = new Max();
            break;
        case 4:
            std::cout << "operazione richiesta: media aritmetica" << std::endl;
            CellFunction = new Mean();
            break;
        default:
            std::cout << "Cella scollegata" << std::endl;
    }
    std::cout << "Vuoi che il valore di questa cella modifichi il risultato di operazioni? Y/n" << std::endl;
    std::cin >> l;
    if (l == 'Y') {
        std::cout << "LockProperty disattivato. Puoi cambiare questa proprietà tramite LockSetting" << std::endl;
        LockProperty = false;
    } else {
        std::cout << "LockProperty attivato. Puoi cambiare questa proprietà tramite LockSetting" << std::endl;
        LockProperty = true;
    }
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


bool Cell::LockSetting() {
    if (LockProperty) {
        std::cout << "LockProperty OFF" << std::endl;
        LockProperty = false;
        return LockProperty;
    }
    if (!LockProperty) {
        std::cout << "LockProperty ON" << std::endl;
        LockProperty = true;
        return LockProperty;
    }

}
