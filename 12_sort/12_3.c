#include <stdio.h>

int main(void)
{
    int n, num;
    int count[10000];

    scanf("%d", &n);

    for (int i = 0; i < 10000; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        count[num - 1]++;
    }

    for (int i = 0; i < 10000; i++)
        for (int j = 0; j < count[i]; j++)
            printf("%d\n", i + 1);
}