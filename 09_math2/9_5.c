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
    unsigned int    n;
    int             prime;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break ;

        prime = 0;
        for (unsigned int i = n + 1; i <= 2 * n; i++)
        {
            if (is_prime(i) == 1)
                prime++;
        }
        printf("%d\n", prime);
    }
}