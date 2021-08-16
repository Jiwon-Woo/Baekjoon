#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t 	max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

int	main(void)
{
	char	a[10001];
	char	b[10001];
	char	add[10002] = {0, };
	size_t	len, alen, blen, i, index;

	scanf("%s %s", a, b);

	alen = strlen(a);
	blen = strlen(b);
	len = max(alen, blen) + 1;
	
	add[len - 1] = '0';
	i = 1;
	while (alen >= i && blen >= i)
	{
		if ((a[alen - i] - '0') + (b[blen - i] - '0') + (add[len - i] - '0') > 9)
		{
			add[len - i - 1] = '1';
			add[len - i] = ((a[alen - i] - '0') + (b[blen - i] - '0') + (add[len - i] - '0') - 10) + '0';
		}
		else
		{
			add[len - i - 1] = '0';
			add[len - i] = ((a[alen - i] - '0') + (b[blen - i] - '0') + (add[len - i] - '0')) + '0';
		}
		i++;
	}
	while (alen >= i)
	{
		if ((a[alen - i] - '0') + (add[len - i] - '0') > 9)
		{
			add[len - i - 1] = '1';
			add[len - i] = ((a[alen - i] - '0') + (add[len - i] - '0') - 10) + '0';
		}
		else
		{
			add[len - i - 1] = '0';
			add[len - i] = ((a[alen - i] - '0') + (add[len - i] - '0')) + '0';
		}
		i++;
	}
	while (blen >= i)
	{
		if ((b[blen - i] - '0') + (add[len - i] - '0') > 9)
		{
			add[len - i - 1] = '1';
			add[len - i] = ((b[blen - i] - '0') + (add[len - i] - '0') - 10) + '0';
		}
		else
		{
			add[len - i - 1] = '0';
			add[len - i] = ((b[blen - i] - '0') + (add[len - i] - '0')) + '0';
		}
		i++;
	}
	add[len] = 0;
	
	if (add[0] == '0')	
	{
		index = 0;
		while (add[index + 1])
		{
			add[index] = add[index + 1];
			index++;
		}
		add[index] = 0;
	}
	printf("%s\n", add);
}