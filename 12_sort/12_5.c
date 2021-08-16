#include <stdio.h>
#include <stdlib.h>

// num배열이 char형이면 return에도 char를 써야함. int를 쓰면 정렬이 제대로 안됨(수가 작을 때는 또 된다). 왜지...
int compare(const void *first, const void *second)
{
    return (*(char *)second - *(char *)first);
}

// num배열을 int로 써도 맞긴한데, 0도 출력되었으면 해서 char형으로 썼다.
int main(void)
{
    int n;
    int n_copy, len = 0;
    
    scanf("%d", &n);

    n_copy = n;

    while (n_copy > 0)
    {
        n_copy /= 10;
        len++;
    }

    char num[len + 1];

    for (int i = 0; i < len; i++)
    {
        num[i] = (n % 10) + '0';
        n /= 10;
    }
    num[len] = '\0';

    // sizeof(num) / sizeof(char) 대신 len 써도 통과
    qsort(num, sizeof(num) / sizeof(char), sizeof(char), compare);

    for (int i = 0; i < len; i++)
        printf("%c", num[i]);
    printf("\n");
}