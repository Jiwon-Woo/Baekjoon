#include <stdio.h>

int is_prime(unsigned int num)
{
    unsigned int    i = 2;

    if (num == 1)
        return (0);
    while (num >= i * i)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    unsigned int    m, n;

    scanf("%d %d", &m, &n);

    for (unsigned int i = m; i <= n; i++)
    {
        if (is_prime(i) == 1)
            printf("%d\n", i);
    }
}