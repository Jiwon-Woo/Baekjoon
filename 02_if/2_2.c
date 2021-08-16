#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    if (90 <= n && n <= 100)
        printf("A");
    else if (80 <= n)
        printf("B");
    else if (70 <= n)
        printf("C");
    else if (60 <= n)
        printf("D");
    else
        printf("F");
}