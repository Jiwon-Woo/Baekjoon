#include <stdio.h>

int main(void)
{
    int n;
    int nsum = 0;
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
        nsum += i;
    printf("%d\n", nsum);
}