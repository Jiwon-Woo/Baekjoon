#include <stdio.h>

int main(void)
{
    int n, num;

    scanf("%d", &n);

    int sort[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &sort[i]);
    
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                num = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = num;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", sort[i]);
}