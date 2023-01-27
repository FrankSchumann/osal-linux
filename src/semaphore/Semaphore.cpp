#include "Semaphore.h"

#include <iostream>

namespace osal
{
Semaphore::Semaphore()
{
}

void Semaphore::acquire() const
{
    std::cout << "Semaphore::acquire" << std::endl;
}

void Semaphore::release() const
{
    std::cout << "Semaphore::release" << std::endl;
}

}
