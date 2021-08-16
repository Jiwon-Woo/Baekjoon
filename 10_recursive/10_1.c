#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return (1);
    else
        return (n * factorial(n - 1));
}

int main(void)
{
    int n;
    int fact;

    scanf("%d", &n);
    fact = factorial(n);

    printf("%d\n", fact);
}