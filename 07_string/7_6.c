#include <stdio.h>
#include <string.h>

int main(void)
{
    char    word[1000001];
    int     space = 0;

    scanf("%[^\n]s", word);

    for (int i = 0; i < (int)strlen(word); i++)
    {
        if (word[i] == 32)
            space++;
    }
    if (word[0] == 32)
        space--;
    if (word[strlen(word) - 1] == 32)
        space--;
    printf("%d\n", space + 1);
}