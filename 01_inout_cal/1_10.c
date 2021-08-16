#include <stdio.h>

int	main(void)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d", (a+b)%c, ((a%c)+(b%c))%c, (a*b)%c, ((a%c)*(b%c))%c);
}