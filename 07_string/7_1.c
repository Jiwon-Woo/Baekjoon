#include <stdio.h>

int main(void)
{
    char    c;

    scanf("%c", &c);
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c && c <= '9'))
        printf("%d\n", c);
}