#include "gtest/gtest.h"
#include "../SumColumn.h"

TEST(SumColumnTest, unsignedTestImput) {
    SumColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 15);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 19);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 9);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4);

}

TEST(SumColumnTest, negativeTestImput) {
    SumColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -3);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -7);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -14);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -10);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -7);

}

TEST(SumColumnTest, floatTestImput) {
    SumColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.0);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 10.31);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 15.61);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 10.3);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.3);

}

TEST(SumColumnTest, mixedTestImput) {
    SumColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -5);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), -0.6);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 9.4);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.4);
}