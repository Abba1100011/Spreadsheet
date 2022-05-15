cmake_minimum_required(VERSION 3.21)
project(Spreadsheet)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Test)

set(SOURCE_FILES AbstractObserver.h AbstractSubject.h Cell.cpp Cell.h MaxColumn.cpp MaxColumn.h MeanColumn.cpp MeanColumn.h MinColumn.cpp MinColumn.h OperationColumn.cpp OperationColumn.h SumColumn.cpp SumColumn.h)
add_executable(Spreadsheet main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Spreadsheet core)
