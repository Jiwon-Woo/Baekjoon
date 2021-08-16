#include <stdio.h>

int line(int x)
{
    int index = 0;
    int sum = 0;

    while (x > sum)
    {
        index++;
        sum += index;
    }

    return (index);
}

int order(int x)
{
    int index;
    int sum = 0;

    for (int i = 1; i < line(x); i++)
        sum += i;

    index = x - sum;

    return (index);
}

int main(void)
{
    int x;
    int a, b;

    scanf("%d", &x);

    if (line(x) % 2 == 1)
    {
        a = line(x) + 1 - order(x);
        b = order(x);
    }
    else
    {
        a = order(x);
        b = line(x) + 1 - order(x);
    }

    printf("%d/%d\n", a, b);
}