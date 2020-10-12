// we can check the result code to make sure there were
// two numbers read from the stream and we can limit the
// number of characters read to avoid overflow
// (which is undefined behavior ... let's explore that next)

#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter two integers: ");

    if (scanf("%8d%8d", &x, &y) != 2) {
        fprintf(stderr, "Input error\n");
        return 1;
    }

    printf("%d * %d = %d\n", x, y, x * y);
}
