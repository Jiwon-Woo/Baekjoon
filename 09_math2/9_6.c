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

int last_prime(unsigned int n)
{
    for (unsigned int i = n / 2; i <= n; i++)
    {
        if (is_prime(i) == 1)
        {
            if (is_prime(n - i) == 1)
                return (i);
        }
    }
    return (0);
}

int main(void)
{
    int t, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        printf("%d %d\n", n - last_prime(n), last_prime(n));
    }
}