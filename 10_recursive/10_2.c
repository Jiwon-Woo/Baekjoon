#include <stdio.h>

int fibonacci(int index)
{
    if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    else
        return (fibonacci(index - 1) + fibonacci(index - 2));
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", fibonacci(n));
}