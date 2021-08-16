#include <stdio.h>

int self_num(int num)
{
    int flag = 0;
    for (int i = 1; i < num; i++)
    {
        int sum = 0;
        int j = i;
        while (j > 0)
        {
            sum += j % 10;
            j = j / 10;
        }
        if (num == i + sum)
        {
            flag = 1;
            break ;
        }
    }
    return (flag);
}

int main(void)
{
    for (int i = 1; i <= 10000; i++)
    {
        if (self_num(i) == 0)
            printf("%d\n", i);
    }
}