#pragma once

#include "copa-pdk/osal/semaphore/SemaphoreIf.h"

namespace COPA
{
class Semaphore : public SemaphoreIf
{
   public:
    Semaphore();
    virtual ~Semaphore();

    void acquire() const override;
    void release() const override;
};

}
