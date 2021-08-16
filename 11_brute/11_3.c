#include <stdio.h>

void    body_rank(int *body, int n)
{
    int rank;

    for (int i = 0; i < n; i++)
    {
        rank = 1;

        for (int j = 0; j < n; j++)
            if (body[2 * i] < body[2 * j] && body[2 * i + 1] < body[2 * j + 1])
                rank++;
        
        printf("%d ", rank);
    }
}

int     main(void)
{
    int n;

    scanf("%d", &n);

    int body[2 * n];

    for (int i = 0; i < n; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        body[2 * i] = x;
        body[2 * i + 1] = y;
    }
    
    body_rank(body, n);
}