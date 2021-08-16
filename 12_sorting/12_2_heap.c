#include <stdio.h>

int	arr[1000001] = {0, };

void swap(int *arr, int a, int b)
{
	int	temp;
	
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void    heapify(int *arr, int num)
{
	int	root = 1;

    if (num > 1)
    {
		swap(arr, root, num);

		while (root <= (num - 1) / 2)
		{
			if ((root * 2 + 1 == num) || (arr[root * 2] > arr[root * 2 + 1]))
			{
				if (arr[root] < arr[root * 2])
				{
					swap(arr, root, root * 2);
					root = root * 2;
				}
				else
					break ;
			}
			else
			{
				if (arr[root] < arr[root * 2 + 1])
				{
					swap(arr, root, root * 2 + 1);
					root = root * 2 + 1;
				}
				else
					break ;
			}
		}
		heapify(arr, num - 1);
	}
}

int     main(void)
{
    int n;
	int	parent;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
	{
        scanf("%d", &arr[i]);

		parent = i;

		while (parent > 1)
		{
			if (arr[parent] > arr[parent / 2])
			{
				swap(arr, parent, parent / 2);
				parent /= 2;
			}
			else
				break ;
		}
	}

    heapify(arr, n);

    for (int i = 1; i <= n; i++)
        printf("%d\n", arr[i]);
    
    return (0);
}