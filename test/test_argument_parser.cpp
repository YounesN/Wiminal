#include <gtest/gtest.h>

#include "src/parser/argument_parser.hpp"

TEST(WIMINAL_TEST, EmptyArguments) {
  const char *args[] = {};
  ArgumentParser parser(args);
  EXPECT_TRUE(true);
}