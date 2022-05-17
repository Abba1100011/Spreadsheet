#include "gtest/gtest.h"
#include "../MeanColumn.h"

TEST(MeanColumnTest, unsignedTestOutput) {
    MeanColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}

TEST(MeanColumnTest, negativeTestOutput) {
    MeanColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}

TEST(MeanColumnTest, floatTestOutput) {
    MeanColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}

TEST(MeanColumnTest, mixedTestOutput) {
    MeanColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    c.Subscribe(&a);
    d.Subscribe(&a);

}