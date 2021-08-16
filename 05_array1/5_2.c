#include <stdio.h>

int max(int *arr, int size)
{
    int max;

    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return (max);
}

int find_max(int *arr, int max, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
            return (i + 1);
    }
    return (0);
}

int main(void)
{
    int num;
    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    int maximum = max(arr,9);
    printf("%d\n%d", maximum, find_max(arr, maximum, 9));
}