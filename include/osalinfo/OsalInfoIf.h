#pragma once

#include <stdint.h>

#include <string>

namespace COPA
{
class OsalInfoIf
{
   public:
    virtual std::string getVersion() const = 0;
    virtual uint32_t getMajorVersion() const = 0;
    virtual uint32_t getMinorVersion() const = 0;
    virtual uint32_t getPatchVersion() const = 0;
    virtual uint32_t getTweakVersion() const = 0;

    virtual std::string getName() const = 0;
    virtual std::string getDescription() const = 0;
    virtual void show() const = 0;
};

}
