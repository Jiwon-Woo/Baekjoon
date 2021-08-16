#include <stdio.h>
#include <stdlib.h>

struct People
{
    int     age;
    char    name[101];
};

int compare(const void *first, const void *second)
{
    struct People *a, *b;

    a = (struct People *)first;
    b = (struct People *)second;

    return(a->age - b->age);
}

int main(void)
{
    int     n;

    scanf("%d", &n);

    struct People member[n];

    for (int i = 0; i < n; i++)
        scanf("%d %s", &member[i].age, member[i].name);

    qsort(member, n, sizeof(struct People), compare);

    for (int i = 0; i < n; i++)
        printf("%d %s\n", member[i].age, member[i].name);
}
