#include "gtest/gtest.h"
#include "../MeanColumn.h"

#define PRECISION 0.0009

TEST(MeanColumnTest, unsignedTestImput) {
    MeanColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.000, PRECISION);
    c.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 7.500, PRECISION);
    d.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 6.333, PRECISION);
    c.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), 4.500, PRECISION);
    b.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), 4.000, PRECISION);

}

TEST(MeanColumnTest, negativeTestImput) {
    MeanColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), -3.000, PRECISION);
    c.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), -3.500, PRECISION);
    d.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), -4.666, PRECISION);
    c.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), -5.000, PRECISION);
    b.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), -7.000, PRECISION);

}

TEST(MeanColumnTest, floatTestImput) {
    MeanColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.000, PRECISION);
    c.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.155, PRECISION);
    d.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.203, PRECISION);
    c.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.150, PRECISION);
    b.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.300, PRECISION);

}

TEST(MeanColumnTest, mixedTestImput) {
    MeanColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), 5.000, PRECISION);
    c.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), -2.500, PRECISION);
    d.Subscribe(&a);
    EXPECT_NEAR(a.getResult(), -0.200, PRECISION);
    c.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), 4.700, PRECISION);
    b.Unsubscribe(&a);
    EXPECT_NEAR(a.getResult(), 4.400, PRECISION);

}