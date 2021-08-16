#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
            printf(" ");
        for (int k = 0; k < i; k++)
            printf("*");
        printf("\n");
    }
}