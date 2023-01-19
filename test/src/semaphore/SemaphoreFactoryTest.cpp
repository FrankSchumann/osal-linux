#include <gtest/gtest.h>

#include "copa-pdk/osal/semaphore/SemaphoreFactory.h"

TEST( SemaphoreFactoryTest, Failed )
{
	GTEST_FAIL();
}

TEST( SemaphoreFactoryTest, create )
{
    auto const semaphoreFactory = COPA::SemaphoreFactory();

    auto const semaphore = semaphoreFactory.create();

    ASSERT_NE( nullptr, semaphore );
}
