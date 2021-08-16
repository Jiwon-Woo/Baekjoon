#include <stdio.h>

int  main(void)
{
    int    a, b, c;
    int    n = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (b >= c)
        printf("%d\n", -1);
    else
    {
        n = a / (c - b);
        printf("%d\n", n + 1);
    }
}