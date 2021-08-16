#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *first, const void *second)
{
    return (*(int *)first - *(int *)second);
}

int main(void)
{
    int n, sum = 0;
    int mean, median, mode, range;
    int count = 0, max = 0, index = 0, second = 0;

    scanf("%d", &n);

    int stat[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stat[i]);
        sum += stat[i];
    }

    qsort(stat, n, sizeof(int), compare);

    mean = (int)round((double)sum / n);
    median = stat[n / 2];
    range = stat[n - 1] - stat[0];

    for (int i = 1; i < n; i++)
    {
        if (stat[i] == stat[i - 1])
            count++;
        else
            count = 0;

        if (max < count)
        {
            max = count;
            index = i;
            second = 0;
        }
        else if (max == count)
        {
            second++;
            
            if (second == 1)
                index = i;
        }
    }

    mode = stat[index];

    printf("%d\n%d\n%d\n%d\n", mean, median, mode, range);
}