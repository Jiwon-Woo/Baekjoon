#include <stdio.h>

int main(void)
{
    int a, b, v;
    int sum = 0;

    scanf("%d %d %d", &a, &b, &v);
    
    int day = (v - a) / (a - b);
    int rest = v - (a - b) * day;

    while (sum < rest)
    {
        sum += a;
        if (sum < rest)
            sum -= b;
        day++;
    }

    printf("%d\n", day);
}