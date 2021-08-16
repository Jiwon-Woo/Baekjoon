#include <stdio.h>

int main(void)
{
    int n;
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        num[i] = n % 42;
    }
    int flag;
    int count = 1;
    for (int i = 1; i < 10; i++)
    {
        flag = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (num[i] == num[j])
            {
                flag = 1;
                break ;
            }
        }
        if (flag == 0)
            count++;
    }
    printf("%d", count);
}