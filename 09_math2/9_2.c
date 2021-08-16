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

int next_prime(unsigned int m, unsigned int n)
{
    for (unsigned int i = m; i <= n; i++)
    {
        if (is_prime(i) == 1)
            return (i);
    }
    return (0);
}

int main(void)
{
    unsigned int    m, n;
    int             sum = 0;

    scanf("%d %d", &m, &n);

    for (unsigned int i = m; i <= n; i++)
    {
        if (is_prime(i) == 1)
            sum += i;
    }

    if (next_prime(m, n) == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, next_prime(m, n));
}