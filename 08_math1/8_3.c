#include <stdio.h>

int bee(int n)
{
    int index = 0;
    int sum = 1;

    while (n > sum)
    {
        index++;
        sum += 6 * index;
    }

    return (index + 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", bee(n));
}