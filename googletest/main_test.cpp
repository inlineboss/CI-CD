#include "gtest/gtest.h"
#include "lib.h"

TEST(TEST_VERSION, version)
{
	EXPECT_TRUE(version() > 0);
}

int main(int argc, char** argv){
 ::testing::InitGoogleTest(&argc, argv);

  int ret { RUN_ALL_TESTS() };
  return ret;
}
