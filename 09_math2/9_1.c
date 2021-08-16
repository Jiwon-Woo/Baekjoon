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
    int n;
    int prime = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        unsigned int num;

        scanf("%d", &num);

        if (is_prime(num) == 1)
            prime++;
        
    }
    printf("%d\n", prime);
}