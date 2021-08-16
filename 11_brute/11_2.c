#include <stdio.h>

int again_sum(int num)
{
    int sum = num;

    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    return (sum);
}

int main(void)
{
    int n;
    int num = 0;

    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n == again_sum(i))
        {
            num = i;
            break ;
        }
    }

    printf("%d\n", num);
}