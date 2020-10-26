#include <gtest/gtest.h>

#include "src/parser/argument_parser.hpp"

TEST(WIMINAL_TEST, EmptyArguments) {
  const char *args[] = { (char *)("/Users/younes/projects/Wiminal/build/Wiminal") };
  ArgumentParser parser(args, 1);
  EXPECT_EQ(parser.GetRawArgc(), 1);
}