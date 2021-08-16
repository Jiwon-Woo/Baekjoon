#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int i = 0;

    scanf("%d", &a);
    if (0 <= a && a <= 99)
    {
        b = (a / 10) + (a % 10);
        c = (a % 10) * 10 + (b % 10);
        i++;
        while (a != c)
        {
            c = (c % 10) * 10 + (((c / 10) + (c % 10)) % 10);
            i++;
        }
        printf("%d", i);
    }
}