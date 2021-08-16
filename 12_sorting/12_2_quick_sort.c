#include <stdio.h>

void    quick_sort(int *arr, int start, int end)
{
    int pivot = arr[start];
    int low = start + 1;
    int high = end;
    int temp;
    int index = start;

    if (start < end)
    {
        while (low <= high)
        {
            while (arr[low] < pivot && low <= end)
                low++;
            while (arr[high] > pivot && high >= start)
                high--;
            
            if (low >= high)
            {
                arr[start] = arr[high];
                arr[high] = pivot;
                index = high;
            }
            else
            {
                temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
        }

        quick_sort(arr, start, index - 1);
        quick_sort(arr, index + 1, end); 
    }
}

int     main(void)
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}