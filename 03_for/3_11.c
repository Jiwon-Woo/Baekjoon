#include <stdio.h>

int main(void)
{
    int n;
    int x;
    int num;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num < x)
            printf("%d\n", num);
    }
}