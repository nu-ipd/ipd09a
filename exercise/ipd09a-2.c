#include <libipd.h>
#include <stdio.h>

// Returns -1 if n is negative, 1 if n is positive, or 0 if n is 0.
//
// Examples:
//  - signum( 0) ==  0
//  - signum(15) ==  1
//  - signum(-5) == -1
int signum(int n)
{
    // TODO: This result is usually wrong. Make it always right.
    return 0;
}

void test_signum(void)
{
    CHECK_INT( signum( 0),  0 );
    CHECK_INT( signum(15),  1 );
    CHECK_INT( signum(-5), -1 );
}

// Returns the largest of its three arguments.
//
// Examples: See test_max3()
double max3(double a, double b, double c)
{
    // TODO: This result is usually wrong. Make it always right.
    return 0;
}

void test_max3(void)
{
    CHECK_DOUBLE( max3(5, 5, 5), 5 );
    // TODO: You need a bunch more test cases. Add them right here.
}

int main(void)
{
    test_signum();
    test_max3();
}
