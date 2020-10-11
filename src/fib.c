#include <stdio.h>


// This tells the C preprocessor that if it hasn't been given a
// definition for `FIB` to define it to be `fib_rec`. This causes
// subsequent occurrences of `FIB` to be replaced with `fib_rec`
// (or whatever `FIB` was previously defined to be).
#ifndef FIB
#  define FIB fib_rec
#endif


// Computes the `n`th Fibonacci number, recursively. This takes
// too long.
long fib_rec(int n)
{
    if (n < 2) {
        return n;
    } else {
        return fib_rec(n - 2) + fib_rec(n - 1);
    }
}


// Computes the `n`th Fibonacci number, iteratively. This is
// fast, but its behavior is undefined if `fib(n) > LONG_MAX`.
long fib_iter(int n)
{
    long curr = 0;
    long next = 1;

    while (n > 0) {
        long prev = curr;

        curr = next;
        next = prev + curr;
        n -= 1;
    }

    return curr;
}


int main(void)
{
    int input;

    while (scanf("%d", &input) == 1) {
        printf("fib(%d) = %ld\n", input, FIB(input));
    }
}
