#include <libipd.h>
#include <stdio.h>

// Computes the `n`th triangular number.
//
// Examples: See test_tri()
unsigned long tri(int n)
{
    // TODO: This result is usually wrong. Make it always right.
    return 0;
}

void test_tri(void)
{
    CHECK_ULONG( tri(5), 15 );
    // TODO: You need more test cases. Add them right here.
}

int main(void)
{
    test_tri();
}
