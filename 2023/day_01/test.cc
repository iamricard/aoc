#include <gtest/gtest.h>

#include "lib.h"

TEST(HelloTest, GetGreet) { EXPECT_EQ(get_greet("Bazel"), "Hello Bazel"); }
