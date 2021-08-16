#include <stdio.h>

int	main(void)
{
	unsigned int	a, b, i, j, k;

	scanf("%d %d", &a, &b);
	i = a*(b%10);
	j = a*((b/10)%10);
	k = a*(b/100);
	printf("%d\n%d\n%d\n%d", i, j, k, 100*k + 10*j + i);
}