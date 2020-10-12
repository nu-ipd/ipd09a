// we can read input in addition to producing output
// ... but there are gotchas

#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    printf("%d * %d = %d\n", x, y, x * y);
}
