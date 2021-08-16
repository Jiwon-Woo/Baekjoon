#include <stdio.h>

int main(void)
{
    int kg;

    scanf("%d", &kg);
    int x = kg / 5;
    int y = 0;

    while (5 * x + 3 * y < kg)
    {
        y++;
        if (5 * x + 3 * y > kg)
        {
            y = 0;
            x--;
            if (x < 0)
                break ;
        }
    }
    if (5 * x + 3 * y == kg)
        printf("%d\n", x + y);
    else
        printf("%d\n", -1);
    
}