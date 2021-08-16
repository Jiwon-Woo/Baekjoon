#include <stdio.h>

int main(void)
{
    int hour;
    int min;

    scanf("%d %d", &hour, &min);
    if (45 <= min && min <= 59)
        printf("%d %d", hour, min - 45);
    if ((0 <= min && min <= 44) && (1 <= hour && hour <= 23))
        printf("%d %d", hour - 1, min + 15);
    if ((0 <= min && min <= 44) && hour == 0)
        printf("%d %d", hour = 23, min + 15);
}