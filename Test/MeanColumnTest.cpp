#include "gtest/gtest.h"
#include "../MeanColumn.h"

TEST(MeanColumnTest, unsignedTestImput) {
    MeanColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 7.5);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 6.333335);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.5);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4);

}

TEST(MeanColumnTest, negativeTestImput) {
    MeanColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -3);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -3.5);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -4.666666);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -5);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -7);

}

TEST(MeanColumnTest, floatTestImput) {
    MeanColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.155);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.20333);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.15);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.3);

}

TEST(MeanColumnTest, mixedTestImput) {
    MeanColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -2.5);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -0.2);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.7);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.4);

}