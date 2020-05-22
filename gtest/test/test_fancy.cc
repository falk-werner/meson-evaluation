#include <gtest/gtest.h>
#include "fancy.h"

TEST(fancy, add)
{
    ASSERT_EQ(0, fancy_add(1, -1));
    ASSERT_EQ(42, fancy_add(40, 2));
}