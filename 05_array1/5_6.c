#include <stdio.h>

int len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    int num;
    scanf("%d", &num);
    char str[80];
    for (int n = 0; n < num; n++)
    {
        scanf("%s", str);
        int test[len(str)];
        int i = 0;
        int count;
        while(str[i] != '\0')
        {
            if (str[i] == 'O')
            {
                count = 1;
                for (int j = i - 1; j >= 0; j--)
                {
                    if (str[j] == 'O')
                        count++;
                    else
                        break ;
                }
                test[i] = count;
            }
            else
                test[i] = 0;
            i++;
        }
        int sum = 0;
        for (int a = 0; a < len(str); a++)
            sum += test[a];
        printf("%d\n", sum);
    }
}