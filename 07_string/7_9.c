#include <stdio.h>
#include <string.h>

int main(void)
{
    char    cro[100];
    int     i = 0;
    int     count = 0;

    scanf("%s", cro);

    while (cro[i] != '\0')
    {
        if (cro[i] == 'c' && (cro[i + 1] == '=' || cro[i + 1] == '-'))
            i++;
        else if ((cro[i] == 'l' || cro[i] == 'n') && cro[i + 1] == 'j')
            i++;
        else if ((cro[i] == 's' || cro[i] == 'z') && cro[i + 1] == '=')
            i++;
        else if (cro[i] == 'd' && cro[i + 1] == '-')
            i++;
        else if (cro[i] == 'd' && cro[i + 1] == 'z' && cro[i + 2] == '=')
            i += 2;
        count++;
        i++;
    }
    printf("%d\n", count);
}