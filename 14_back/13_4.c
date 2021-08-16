#include <stdio.h>

int arr[8] = {0, };
int num = 0;

void    replace(int n, int m, int number)
{
    if (m == 1)
    {
        arr[num] = number;
        
        for (int i = 0; i < 8; i++)
            if (arr[i] != 0)
                printf("%d ", arr[i]);
        printf("\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i >= number)
            {
                arr[num] = number;
                num++;

                replace(n, m - 1, i);

                num--;
            }
        }
    }
}

int     main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        replace(n, m, i);
}