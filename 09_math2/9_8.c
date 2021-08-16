#include <stdio.h>

int arr_only(int *square)
{
    int flag[3] = {0, 0, 0};
    int index = -1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (square[i] == square[j])
            {
                flag[i] = 1;
                flag[j] = 1;
                break ;
            }
        }
    }

    for (int k = 0; k < 3; k++)
    {
        if (flag[k] == 0)
            index = k;
    }

    return (square[index]);
}

int main(void)
{
    int square_x[3];
    int square_y[3];
    int x, y;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x, &y);

        square_x[i] = x;
        square_y[i] = y;
    }

    printf("%d %d\n", arr_only(square_x), arr_only(square_y));
}