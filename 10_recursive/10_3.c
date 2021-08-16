#include <stdio.h>

void print_star(int n, int i, int j)
{
    if (n == 3)
    {
        if (i % 3 == 1 && j % 3 == 1)
            printf(" ");
        else
            printf("*");
    }
    else
    {
        if (i % 3 == 1 && j % 3 == 1)
            printf(" ");
        else
            print_star(n / 3, i / 3, j / 3);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            print_star(n, i, j);
        }
        printf("\n");
    }
}