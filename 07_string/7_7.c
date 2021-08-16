#include <stdio.h>

int main(void)
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    int new_a = (a % 10) * 100 + ((a / 10) % 10) * 10 + (a / 100);
    int new_b = (b % 10) * 100 + ((b / 10) % 10) * 10 + (b / 100);

    if (new_a > new_b)
        printf("%d\n", new_a);
    else
        printf("%d\n", new_b);
}