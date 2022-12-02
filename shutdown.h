#include <unistd.h>
#include <cstdlib>

void shutdown(int delayTime)
{
    sleep(delayTime);
    system("shutdown now");
}