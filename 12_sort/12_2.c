#include <stdio.h>
#include <stdlib.h>

// 이렇게 하라고 해서 하긴했는데.. 왜 이렇게 해야하는지 잘 모르겠습니다...
int compare(const void *first, const void *second)
{
    return (*(int *)first - *(int *)second);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    
    qsort(num, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
        printf("%d\n", num[i]);
}