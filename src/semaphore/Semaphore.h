#pragma once

#include "semaphore/SemaphoreIf.h"

namespace COPA
{
class Semaphore : public SemaphoreIf
{
   public:
    Semaphore();

    void acquire() const override;
    void release() const override;
};

}
