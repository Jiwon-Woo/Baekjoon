#include <stdio.h>

int find_666(int num)
{
    while (num >= 666)
    {
        if (num % 1000 == 666)
            return (1);
        num = num / 10;
    }
    return (0);
}

int main(void)
{
    int n;
    int count = 0;
    int num = 666;
    
    scanf("%d", &n);

    while (1)
    {
        if (find_666(num) == 1)
            count++;
        if (count == n)
            break ;
        num++;
    }

    printf("%d\n", num);
}