#pragma once

#include "copa-pdk/osal/osalinfo/OsalInfoIf.h"

namespace COPA
{
class OsalInfo : public OsalInfoIf
{
   public:
    OsalInfo();
    virtual ~OsalInfo();

    virtual std::string getVersion() const override;
    virtual uint32_t getMajorVersion() const override;
    virtual uint32_t getMinorVersion() const override;
    virtual uint32_t getPatchVersion() const override;
    virtual uint32_t getTweakVersion() const override;

    virtual std::string getName() const override;
    virtual std::string getDescription() const override;

    virtual void show() const override;
};

}
