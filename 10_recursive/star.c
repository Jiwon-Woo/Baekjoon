#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 3 == 1 && j % 3 == 1)
                printf(" ");
            else if ((i / 3) % 3 == 1 && (j / 3) % 3 == 1)
                printf(" ");
            else if ((i / 9) % 3 == 1 && (j / 9) % 3 == 1)
                    printf(" ");
            else if ((i / 27) % 3 == 1 && (j / 27) % 3 == 1)
                    printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}