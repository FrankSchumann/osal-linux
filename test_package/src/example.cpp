#include "osal.h"

#include "osalinfo/OsalInfoIf.h"
#include "osalinfo/OsalInfoFactory.h"

#include "semaphore/SemaphoreFactory.h"
#include "semaphore/SemaphoreIf.h"

int main() {
    osal();

    COPA::OsalInfoFactory osalInfoFactory;
    COPA::SemaphoreFactory semaphoreFactory;
}
