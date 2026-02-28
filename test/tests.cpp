// Copyright 2025 UNN-CS

#include "alg.h"
#include <cstdint>
#include <gtest/gtest.h>

TEST(st1, checkPrimeTest1) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(11));
}

TEST(st1, checkPrimeTest2) {
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(10));
}

TEST(st1, checkPrimeTest3) {
  EXPECT_TRUE(checkPrime(997));
  EXPECT_FALSE(checkPrime(999));
  EXPECT_TRUE(checkPrime(1009));
}

TEST(st1, nPrimeTest1) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nPrimeTest2) {
  EXPECT_EQ(nPrime(10), 29);
  EXPECT_EQ(nPrime(20), 71);
}

TEST(st1, nPrimeTest3) { EXPECT_EQ(nPrime(0), 0); }

TEST(st1, nextPrimeTest1) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(st1, nextPrimeTest2) {
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(13), 17);
  EXPECT_EQ(nextPrime(100), 101);
}

TEST(st1, nextPrimeTest3) {
  EXPECT_EQ(nextPrime(997), 1009);
  EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(st1, sumPrimeTest1) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17; // 2+3+5+7=17
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrimeTest2) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77; // 2+3+5+7+11+13+17+19=77
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrimeTest3) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrimeTest4) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(5), 5); // 2+3=5
}
