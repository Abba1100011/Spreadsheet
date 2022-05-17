#include "gtest/gtest.h"
#include "../MinColumn.h"

TEST(MinColumnTest, unsignedTestOutput) {
    MinColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}

TEST(MinColumnTest, negativeTestOutput) {
    MinColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}

TEST(MinColumnTest, floatTestOutput) {
    MinColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}

TEST(MinColumnTest, mixedTestOutput) {
    MinColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}