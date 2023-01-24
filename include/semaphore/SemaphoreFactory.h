#pragma once

#include <memory>

#include "SemaphoreIf.h"

namespace COPA
{
class SemaphoreFactoryIf
{
   public:
    virtual std::shared_ptr< SemaphoreIf > create() const = 0;
};

class SemaphoreFactory : public SemaphoreFactoryIf
{
   public:
    SemaphoreFactory();

    virtual std::shared_ptr< SemaphoreIf > create() const override;
};

}
