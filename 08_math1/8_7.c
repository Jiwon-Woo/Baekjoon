#include <stdio.h>

int family(int k, int n)
{
    if (k == 0)
        return (n);
    else if (n == 1)
        return (1);
    else
        return (family(k - 1, n) + family(k, n - 1));
}

int main(void)
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int k, n;

        scanf("%d %d", &k, &n);

        printf("%d\n", family(k, n));
    }
}