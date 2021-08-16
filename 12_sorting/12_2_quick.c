#include <stdio.h>

// 통과 못했습니다.. 문제점을 같이 찾아주세요ㅠㅠ
void    quick(int *arr, int start, int end)
{
    int pivot = arr[start];
    int low = start + 1;
    int high = end;
    int temp;
    int index;

    if (start < end)
    {
        // 왜 (low < high)로 하면 안될까요...?
        while (low <= high)
        {
            if (arr[low] > pivot && arr[high] < pivot)
            {
                temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
            else if (arr[low] < pivot && arr[high] < pivot)
                low++;
            else if (arr[low] > pivot && arr[high] > pivot)
                high--;
            else
            {
                low++;
                high--;
            }
        }

        if (low > high)
        {
            arr[start] = arr[high];
            arr[high] = pivot;
            index = high;
        }
        else
        {
            arr[start] = arr[low];
            arr[low] = pivot;
            index = low;
        }
                
        quick(arr, start, index - 1);
        quick(arr, index + 1, end); 
    }
}

int     main(void)
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quick(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}