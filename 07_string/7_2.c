#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    int i = 0;

    scanf("%d", &n);
    char    str[n];

    scanf("%s", str);
    while (str[i] != '\0')
    {
        sum += str[i] - '0';
        i++;
    }
    printf("%d\n", sum);
}