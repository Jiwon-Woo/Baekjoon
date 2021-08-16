#include <stdio.h>

int check(int x)
{
    int front = (x / 100) - ((x / 10) % 10);
    int back = ((x / 10) % 10) - (x % 10);
    if (1 <= x && x <= 99)
        return (1);
    else if (x == 1000)
        return (0);
    else if (front == back)
        return (1);
    else
        return (0);
}

int main(void)
{
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (check(i) == 1)
            count++;
    }
    printf("%d\n", count);
}