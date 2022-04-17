cmake_minimum_required(VERSION 3.21)
project(Spreadsheet)

set(CMAKE_CXX_STANDARD 14)

add_executable(Spreadsheet main.cpp AbstractSubject.h AbstractObserver.h Cell.cpp Cell.h OperationColumn.cpp OperationColumn.h SumColumn.cpp SumColumn.h MaxColumn.cpp MaxColumn.h MinColumn.cpp MinColumn.h MeanColumn.cpp MeanColumn.h)
