#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "version.h"

TEST(VersionTest,NumberVersion)
{
	EXPECT_TRUE(version() > 0);
}
