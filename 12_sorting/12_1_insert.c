#include <stdio.h>

int main(void)
{
    int n, num;

    scanf("%d", &n);

    int sort[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &sort[i]);
    
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (sort[j - 1] > sort[j])
            {
                num = sort[j];
                sort[j] = sort[j - 1];
                sort[j - 1] = num;
            }
            else
                break ;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", sort[i]);
}