#include <stdio.h>

int main(void)
{
    unsigned int n;
    scanf("%d", &n);
    for(unsigned int i = n; i > 0; i--)
        printf("%d\n", i);
}