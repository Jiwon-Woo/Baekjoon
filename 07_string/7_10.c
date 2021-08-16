#include <stdio.h>
#include <string.h>

int main(void)
{
    int     n;
    char    word[100];
    int     alphabet[26];
    int     flag;
    int     count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 26; k++)
            alphabet[k] = 0;
        flag = 1;

        scanf("%s", word);

        for (int j = 0; j < (int)strlen(word); j++)
        {
            alphabet[word[j] - 97]++;
            if (alphabet[word[j] - 97] > 1)
            {
                if (word[j] != word[j - 1])
                {
                    flag = 0;
                    break ;
                }
            }
        }
        if (flag == 1)
            count++;
    }
    printf("%d\n", count);
}