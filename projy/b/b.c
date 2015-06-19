#include <stdio.h>
#include "b.h"
int b_func() {
printf("b func called\n");
}

int b_calls_a_func(struct a_struct s) {
printf("got paramteter %d\n", s.member);
a_func();
}
