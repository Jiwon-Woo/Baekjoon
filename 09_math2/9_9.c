#include <stdio.h>

int max(int a, int b, int c)
{
    int num = a;

    if (a < b)
    {
        num = b;
        if (b < c)
            num = c;
    }
    else if (a < c)
        num = c;

    return (num);
}

int main(void)
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break ;
        else if (max(a, b, c) == c && a * a + b * b == c * c)
            printf("right\n");
        else if (max(a, b, c) == a && a * a == b * b + c * c)
            printf("right\n");
        else if (max(a, b, c) == b && a * a + c * c == b * b)
            printf("right\n");
        else
            printf("wrong\n");
    }
}