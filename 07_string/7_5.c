#include <stdio.h>
#include <string.h>

int main (void)
{
    char    word[1000001];
    int     alphabet[26] = {0, };
    int     max = 0;
    int     count = 0;
    int     index;

    scanf("%s", word);
    
    for (int i = 0; i < (int)strlen(word); i++)
    {
        if (65 <= word[i] && word[i] <= 90)
            alphabet[word[i] - 65]++;
        else if (97 <= word[i] && word[i] <= 122)
            alphabet[word[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > max)
        {
            count = 0;
            max = alphabet[i];
            index = i + 65;
        }
        else if (alphabet[i] == max)
            count++;
    }
    if (count == 0)
        printf("%c\n", index);
    else
        printf("?\n");
}