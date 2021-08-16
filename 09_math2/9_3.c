#include <stdio.h>

int is_prime(int num)
{
    int	i = 2;

    if (num == 1)
        return (0);
    while (num >= i * i)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int	main(void)
{
	int	n, i;

	scanf("%d", &n);

	i = 1;
	while (n > 1)
	{
		if (is_prime(n) == 1)
		{
			printf("%d\n", n);
			break ;
		}
		while (is_prime(i) == 0 && n > i * i)
			i++;
		while (is_prime(i) == 1 && n % i == 0 && n >= i * i)
		{	
			n /= i;
			printf("%d\n", i);
		}
		i++;
	}
}
