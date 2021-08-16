#include <stdio.h>

unsigned int tower(int n)
{
    unsigned int num = 1;

    for (int i = 0; i < n; i++)
        num *= 2;

    return (num - 1);
}

void hanoi(int n, int start, int end)
{
    int mid = 6 - start - end;

    if (n == 1)
        printf("%d %d\n", start, end);
    else
    {
        hanoi(n - 1, start, mid);
        printf("%d %d\n", start, end);
        hanoi(n - 1, mid, end);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", tower(n));
    hanoi(n, 1, 3);
}