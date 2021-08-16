#include <stdio.h>

int main(void)
{
    int a = -1;
    int b = -1;
    int c[100];
    int i = 0;

    while (a !=0 && b!= 0)
    {
        scanf("%d %d", &a, &b);
        c[i] = a + b;
        i++;
    }
    i = 0;
    while (c[i] != 0)
    {
        printf("%d\n", c[i]);
        i++;
    }
}