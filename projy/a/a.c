#include "a.h"
#include <sys/types.h>
#include <unistd.h>
int a_func() {
printf("a func called, pid is %d\n", getpid());
}
