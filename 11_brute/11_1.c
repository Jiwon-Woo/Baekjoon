#include <stdio.h>

int blackjack(int *deck, int size, int limit)
{
    int sum = 0;

    for(int i = 0; i < size - 2; i++)
    {
        for(int j = i + 1; j < size - 1; j++)
        {
            for(int k = j + 1; k < size; k++)
            {
                if (deck[i] + deck[j] + deck[k] == limit)
                    return(limit);
                else if (sum < deck[i] + deck[j] + deck[k] && deck[i] + deck[j] + deck[k] < limit)
                    sum = deck[i] + deck[j] + deck[k];
            }
        }
    }

    return(sum);
}

int main(void)
{
    int n, m;
    int card;

    scanf("%d %d", &n, &m);

    int deck[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &card);
        deck[i] = card;
    }

    printf("%d\n", blackjack(deck, n, m));
}