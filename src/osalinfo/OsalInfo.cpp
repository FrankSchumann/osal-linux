#include "OsalInfo.h"

#include <iostream>

#include "config.h"

namespace COPA
{
OsalInfo::OsalInfo()
{
}

OsalInfo::~OsalInfo()
{
}

std::string OsalInfo::getVersion() const
{
    return OSAL_VERSION;
}

uint32_t OsalInfo::getMajorVersion() const
{
    return OSAL_VERSION_MAJOR;
}

uint32_t OsalInfo::getMinorVersion() const
{
    return OSAL_VERSION_MINOR;
}

uint32_t OsalInfo::getPatchVersion() const
{
    return OSAL_VERSION_PATCH;
}

uint32_t OsalInfo::getTweakVersion() const
{
    return OSAL_VERSION_TWEAK;
}

std::string OsalInfo::getName() const
{
    return OSAL_NAME;
}

std::string OsalInfo::getDescription() const
{
    return OSAL_DESCRIPTION;
}

void OsalInfo::show() const
{
    std::cout << "OsalInfo::show" << std::endl;
    std::cout << std::endl;
    std::cout << "Version: " << OSAL_VERSION << std::endl;
    std::cout << "Major: " << OSAL_VERSION_MAJOR << std::endl;
    std::cout << "Minor: " << OSAL_VERSION_MINOR << std::endl;
    std::cout << "Patch: " << OSAL_VERSION_PATCH << std::endl;
    std::cout << "Tweak: " << OSAL_VERSION_TWEAK << std::endl;
    std::cout << std::endl;
    std::cout << "Name: " << OSAL_NAME << std::endl;
    std::cout << "Description: " << OSAL_DESCRIPTION << std::endl;
}

}
