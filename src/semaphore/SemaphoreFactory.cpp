#include "semaphore/SemaphoreFactory.h"

#include "Semaphore.h"

namespace osal
{
SemaphoreFactory::SemaphoreFactory()
{
}

std::shared_ptr< SemaphoreIf > SemaphoreFactory::create() const
{
    return std::make_shared< Semaphore >();
}

}
