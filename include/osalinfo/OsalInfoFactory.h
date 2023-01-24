#pragma once

#include <memory>

#include "OsalInfoIf.h"

namespace COPA
{
class OsalInfoFactoryIf
{
   public:
    virtual std::shared_ptr< OsalInfoIf > create() const = 0;
};

class OsalInfoFactory : public OsalInfoFactoryIf
{
   public:
    OsalInfoFactory();
    virtual ~OsalInfoFactory();

    virtual std::shared_ptr< OsalInfoIf > create() const override;
};

}
