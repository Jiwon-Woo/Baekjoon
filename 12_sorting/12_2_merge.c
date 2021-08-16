#include <stdio.h>

int     sort[1000000];

void    merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;

    if (start < end)
    {
        merge(arr, start, mid);
        merge(arr, mid + 1, end);
        
        while (i <= mid && j <= end)
        {
            if (arr[i] < arr[j])
            {
                sort[k] = arr[i];
                i++;
            }
            else
            {
                sort[k] = arr[j];
                j++;
            }
            k++;
        }

        while (i <= mid)
            sort[k++] = arr[i++];

        while (j <= end)
            sort[k++] = arr[j++];

        for (int a = start; a <= end; a++)
            arr[a] = sort[a];
    }
}

int     main(void)
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    merge(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}