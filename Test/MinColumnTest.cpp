#include "gtest/gtest.h"
#include "../MinColumn.h"

TEST(MinColumnTest, unsignedTestImput) {
    MinColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4);

}

TEST(MinColumnTest, negativeTestImput) {
    MinColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -3);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -4);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -7);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -7);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -7);

}

TEST(MinColumnTest, floatTestImput) {
    MinColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.0);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.0);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.0);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.0);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.3);

}

TEST(MinColumnTest, mixedTestImput) {
    MinColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -10);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -10);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.4);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.4);

}