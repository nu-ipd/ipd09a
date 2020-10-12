#include <limits.h>
#include <stdio.h>

// Computes the Fibs[n] iteratively.
//
// This is fast, but it gives the correct result only when the
// result <= ULONG_MAX.
unsigned long fib_iter(int n)
{
    unsigned long curr = 0,
                  next = 1;

    while (n > 0) {
        unsigned long prev = curr;

        curr = next;
        next = prev + curr;
        n -= 1;
    }

    return curr;
}

int main(void)
{ }
