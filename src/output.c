// variables must all have declared types
// main point (in C) for declaring the type is
// to indicate how big (how many bytes) need to
// be saved for this variable.
// sometimes we know ahead of time what that size is (eg char = 1 byte)
// sometimes we don't know until we ask (int can be several different sizes)

#include <stdio.h>

int main(void)
{
    int    x = 5;
    double f = 5.1;

    printf("x = %d\nf = %.60e\n", x, f);
    printf("sizeof x = %zu bytes\n", sizeof x);
    printf("sizeof f = %zu bytes\n", sizeof f);
}
