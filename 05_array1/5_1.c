#include <stdio.h>

int min(int *arr, int size)
{
    int min;

    min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return (min);
}

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

int main(void)
{
    int n;
    int num;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    printf("%d %d", min(arr, n), max(arr, n));
}