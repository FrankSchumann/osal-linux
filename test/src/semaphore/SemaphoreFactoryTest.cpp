#include <gtest/gtest.h>

#include "semaphore/SemaphoreFactory.h"

TEST( SemaphoreFactoryTest, Failed )
{
	GTEST_FAIL();
}

TEST( SemaphoreFactoryTest, create )
{
    auto const semaphoreFactory = osal::SemaphoreFactory();

    auto const semaphore = semaphoreFactory.create();

    ASSERT_NE( nullptr, semaphore );
}
