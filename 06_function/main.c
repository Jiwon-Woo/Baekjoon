#include <stdio.h>

extern  long long sum(int *a, int n);

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%lld\n", sum(a, 10));
}