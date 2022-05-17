#include "gtest/gtest.h"
#include "../MaxColumn.h"

TEST(MaxColumnTest, unsignedTestOutput) {
    MaxColumn a;
    Cell b(5);
    Cell c(10);
    Cell d(4);
    b.Subscribe(&a);
    EXPECT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_EQ(a.getResult(), 10);
    d.Subscribe(&a);
    EXPECT_EQ(a.getResult(), 10);
    c.Unsubscribe(&a);
    EXPECT_EQ(a.getResult(), 5);
    b.Unsubscribe(&a);
    EXPECT_EQ(a.getResult(), 4);
}

TEST(MaxColumnTest, negativeTestOutput) {
    MaxColumn a;
    Cell b(-3);
    Cell c(-4);
    Cell d(-7);
    b.Subscribe(&a);
    EXPECT_EQ(a.getResult(), -3);
    c.Subscribe(&a);
    EXPECT_EQ(a.getResult(), -3);
    d.Subscribe(&a);
    EXPECT_EQ(a.getResult(), -3);
    c.Unsubscribe(&a);
    EXPECT_EQ(a.getResult(), -3);
    b.Unsubscribe(&a);
    EXPECT_EQ(a.getResult(), -7);

}

TEST(MaxColumnTest, floatTestOutput) {
    MaxColumn a;
    Cell b(5.0);
    Cell c(5.31);
    Cell d(5.3);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.0);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.31);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.31);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.3);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5.3);

}

TEST(MaxColumnTest, mixedTestOutput) {
    MaxColumn a;
    Cell b(5);
    Cell c(-10);
    Cell d(4.4);
    b.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    d.Subscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    c.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 5);
    b.Unsubscribe(&a);
    EXPECT_FLOAT_EQ(a.getResult(), 4.4);

}