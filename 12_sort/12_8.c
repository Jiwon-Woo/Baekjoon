#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *first, const void *second)
{
    char    *a = (char *)first;
    char    *b = (char *)second;

    if (strlen(a) > strlen(b))
        return (1);
    else if (strlen(a) == strlen(b) && strcmp(a, b) > 0)
        return (1);
    else
        return (strlen(a) - strlen(b));
}

int main(void)
{
    int     n;

    scanf("%d", &n);

    char    str[n][51];

    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    qsort(str, n, sizeof(str[0]), compare);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%s\n", str[i]);
        else if (strcmp(str[i], str[i - 1]) != 0)
            printf("%s\n", str[i]);
    }
}