#include <stdio.h>

int main(void)
{
    int n, num;

    scanf("%d", &n);

    int sort[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &sort[i]);
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sort[i] > sort[j])
            {
                num = sort[i];
                sort[i] = sort[j];
                sort[j] = num;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", sort[i]);
}