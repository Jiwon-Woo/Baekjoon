#include <stdio.h>

int main(void)
{
    int t;

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int h, w, n;
        int room;

        scanf("%d %d %d", &h, &w, &n);

        if (n % h == 0)
            room = h * 100 + (n / h);
        else
            room = (n % h) * 100 + ((n / h) + 1);
        
        printf("%d\n", room);
    }
}