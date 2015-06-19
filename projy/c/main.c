#include "a/a_struct.h"
int main() {
struct a_struct s;
a_func();
b_func();
s.member = 7;
b_calls_a_func(s);
//exported_func();
return 0;
}
