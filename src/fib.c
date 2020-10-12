#include <stdio.h>


// This tells the C preprocessor that if it hasn't been given a
// definition for `FIB` to define it to be `fib_rec`. This causes
// subsequent occurrences of `FIB` to be replaced with `fib_rec`
// (or whatever `FIB` was previously defined to be).
#ifndef FIB
#  define FIB fib_rec
#endif

/*
 * In this file I use `Fibs[i]` to mean the `i`th Fibonacci number.
 */

// Computes Fibs[n] (the `n`th Fibonacci number) recursively.
//
// This takes too long.
unsigned long fib_rec(int n)
{
    if (n < 2) {
        return n;
    } else {
        return fib_rec(n - 2) + fib_rec(n - 1);
    }
}


// I don't want you to think, incorrectly, that recursion is
// necessarily slow for this kind of thing. See `fast_fib_rec`
// (below `main()`) for a fast, recursive Fibonacci function.
unsigned long fast_fib_rec(int);


// Computes the Fibs[n] iteratively.
//
// This is fast, but it gives the correct result only when the
// result fits in an unsigned long.
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


// Reads a `int` from the user, computes a Fibonacci number, and prints
// a result. The function calls `FIB`, which we define as a C
// preprocessor macro to expand to which of `fib_rec` or `fib_iter`
// we want to use.
int main(void)
{
    int input;

    while (scanf("%d", &input) == 1) {
        printf("fib(%d) = %lu\n", input, FIB(input));
    }
}


/************************************************************
 * The rest of this file contains the definition of a fast, *
 * recursive Fibonacci function.  The trick is to turn the  *
 * local variables from the iterative version into the      *
 * ACCUMULATORS that they actually are ;)                   *
 ************************************************************/

// Given Fibs[i - 1] (`prev`) and Fibs[i] for some `i`, computes
// `Fibs[i + n]`.
//
// Here are some examples:
//
//   +------+------+-----+--------+
//   | prev | curr | n   | result |
//   +------+------+-----+--------+
//   |   13 |   21 |   2 |     55 |
//   |   13 |   21 |   1 |     34 |
//   |   13 |   21 |   0 |     21 |
//   |    8 |   13 |   1 |     21 |
//   |    5 |    8 |   2 |     21 |
//   |    3 |    5 |   3 |     21 |
//   |    2 |    3 |   4 |     21 |
//   |    1 |    2 |   5 |     21 |
//   |    1 |    1 |   6 |     21 |
//   |    0 |    1 |   7 |     21 |
//   +------+------+-----+--------+
//
unsigned long fast_fib_rec_helper(long prev, long curr, int n)
{
    if (n == 0) {
        return curr;
    } else {
        return fast_fib_rec_helper(curr, curr + prev, n - 1);
    }
}

unsigned long fast_fib_rec(int n)
{
    // If n < 2 then we can return the result right away; otherwise
    // we pass the helper Fibs[1], Fibs[2], and `n - 2`. The helper
    // computes `Fibs[2 + (n - 2)]`, which is what we want.
    if (n < 2) {
        return n;
    } else {
        return fast_fib_rec_helper(1, 1, n - 2);
    }
}