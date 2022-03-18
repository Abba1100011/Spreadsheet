cmake_minimum_required(VERSION 3.21)
project(Spreadsheet)

set(CMAKE_CXX_STANDARD 14)

add_executable(Spreadsheet main.cpp AbstractSubject.h AbstractObserver.h Cell.cpp Cell.h Formulas.cpp Formulas.h Sum.cpp Sum.h Max.cpp Max.h Min.cpp Min.h Mean.cpp Mean.h)
