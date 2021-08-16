#include <stdio.h>

int max(double *arr, int size)
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
    int num;
    int n;
    scanf("%d", &num);
    double arr[num];
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        arr[i] = n;
    }
    int maximum = max(arr, num);
    for(int i = 0; i < num; i++)
    {
        arr[i] = (arr[i] / maximum) * 100;
    }
    double sum = 0;
    for(int i = 0; i < num; i++)
        sum += arr[i];
    double mean = sum / num;
    printf("%.2f", mean);  
}