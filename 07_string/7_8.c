#include <stdio.h>
#include <string.h>

int main(void)
{
    char    word[16];
    int     time = 0;

    scanf("%s", word);

    for (int i = 0; i < (int)strlen(word); i++)
    {
        if (65 <= word[i] && word[i] <= 67)
            time += 3;
        else if (68 <= word[i] && word[i] <= 70)
            time += 4;
        else if (71 <= word[i] && word[i] <= 73)
            time += 5;
        else if (74 <= word[i] && word[i] <= 76)
            time += 6;
        else if (77 <= word[i] && word[i] <= 79)
            time += 7;
        else if (80 <= word[i] && word[i] <= 83)
            time += 8;
        else if (84 <= word[i] && word[i] <= 86)
            time += 9;
        else if (87 <= word[i] && word[i] <= 90)
            time += 10;
    }
    printf("%d\n", time);
}