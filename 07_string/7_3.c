#include <stdio.h>

int main(void)
{
    char s[100];
    int alpabet[27];
    int i = 0;

    scanf("%s", s);
    while (i < 26)
    {
        alpabet[i] = -1;
        i++;
    }
    alpabet[i] = '\0';

    i = 0;
    while (s[i] != '\0')
    {
        if (alpabet[s[i] - 97] == -1)
            alpabet[s[i] - 97] = i;
        i++;
    }
    for (int j = 0; j < 26; j++)
        printf("%d ", alpabet[j]);
}