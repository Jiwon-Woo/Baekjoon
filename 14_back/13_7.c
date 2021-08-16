#include <stdio.h>

int	num[11] = {0, };
int	oper[4] = {0, };
int	cal[10] = {0, };
int	max = -1000000000;
int	min = 1000000000;

void operation(int n, int index)
{
	int	rst;

	if (n == index)
	{
		rst = num[0];
		for (int i = 0; i < 10; i++)
		{
			if (cal[i] == 1)
				rst += num[i + 1];
			else if (cal[i] == 2)
				rst -= num[i + 1];
			else if (cal[i] == 3)
				rst *= num[i + 1];
			else if (cal[i] == 4)
				rst /= num[i + 1];
			else
				break ;
		}

		if (rst < min)
			min = rst;
		
		if (rst > max)
			max = rst;
		
		return ;
	}

	for (int i = 0; i < 4; i++)
	{
		if (oper[i] != 0)
		{
			cal[n] = i + 1;
			oper[i]--;

			operation(n + 1, index);

			cal[n] = 0;
			oper[i]++;
		}
	}
}

int	main(void)
{
	int	n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 4; i++)
		scanf("%d", &oper[i]);

	operation(0, n - 1);
	printf("%d\n%d", max, min);
}