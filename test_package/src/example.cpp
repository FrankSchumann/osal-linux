#include "Info.h"
#include "semaphore/SemaphoreFactory.h"
#include "semaphore/SemaphoreIf.h"

int main()
{
    osal::Info::show();

    osal::SemaphoreFactory semaphoreFactory;
}
