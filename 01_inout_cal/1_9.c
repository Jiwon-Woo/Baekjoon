#include <stdio.h>

int	main(void)
{
	unsigned int	a;
	unsigned int	b;

	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b, a % b);
}