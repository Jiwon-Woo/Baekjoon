#include <stdio.h>

int near(int a, int b)
{
    if (a < b - a)
        return (a);
    else
        return (b - a);
}

int main(void)
{
    int x, y, w, h;
    int distance;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    if (near(x, w) < near(y, h))
        distance = near(x, w);
    else
        distance = near(y, h);

    printf("%d\n", distance);
}