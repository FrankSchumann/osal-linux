#pragma once

namespace osal
{
class SemaphoreIf
{
   public:
    virtual void acquire() const = 0;
    virtual void release() const = 0;
};

}
