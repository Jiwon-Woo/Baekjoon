#include <stdio.h>

unsigned int seq(unsigned int index)
{
    unsigned int sum;

    if (index == 1)
        return (1);
    else if (index == 2)
        return (2);
    else
    {
        if (index % 2 == 0)
            sum = (1 + (index / 2)) * (index / 2);
        else
            sum = (1 + (index / 2)) * (index / 2) + (index / 2) + 1;
        return (sum);
    }
}

int main(void)
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        unsigned int x, y;
        unsigned int index = 1;

        scanf("%d %d", &x, &y);

        while (y - x > seq(index))
            index++;

        printf("%d\n", index);
    }
}