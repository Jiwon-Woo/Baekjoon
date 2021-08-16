#include <stdio.h>
#include <stdlib.h>

struct Coordinate {
    int x;
    int y;
};

int compare(const void *first, const void *second)
{
    struct Coordinate *a, *b;

    a = (struct Coordinate *)first;
    b = (struct Coordinate *)second;

    if (a->y > b->y)
        return (1);
    else if (a->y == b->y && (a->x > b->x))
        return (1);
    else
        return (a->y - b->y);
}

int main(void)
{
    int     n, x, y;
    
    scanf("%d", &n);

    struct  Coordinate coord[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        coord[i].x = x;
        coord[i].y = y;
    }

    qsort(coord, n, sizeof(struct Coordinate), compare);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", coord[i].x, coord[i].y);
}