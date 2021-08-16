#include <stdio.h>

int main(void)
{
    int c;
    int n;
    int score;
    int sum;
    double mean;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n);
        sum = 0;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &score);
            arr[j] = score;
            sum += arr[j];
        }
        mean = (double)sum / (double)n;
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if ((double)arr[j] > mean)
                flag++;
        }
        double student = ((double)flag / (double)n) * 100;
        printf("%.3f%%\n", student);
    }
}