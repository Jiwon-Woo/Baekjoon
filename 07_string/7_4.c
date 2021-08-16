#include <stdio.h>
#include <string.h>

int main(void)
{
    int     t;
    int     r;
    char    s[21];

    scanf("%d", &t);

    for (int j = 0; j < t; j++)
    {
        scanf("%d %s", &r, s);
        for (int i = 0; i < (int)strlen(s); i++)
        {
            for(int k = 0; k < r; k++)
                printf("%c", s[i]);
        }
        printf("\n");
    }
}