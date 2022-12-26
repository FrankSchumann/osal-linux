#include "copa-pdk/osal/osalinfo/OsalInfoFactory.h"

#include "OsalInfo.h"

namespace COPA
{
OsalInfoFactory::OsalInfoFactory()
{
}

OsalInfoFactory::~OsalInfoFactory()
{
}

std::shared_ptr< OsalInfoIf > OsalInfoFactory::create() const
{
    return std::make_shared< OsalInfo >();
}

}
