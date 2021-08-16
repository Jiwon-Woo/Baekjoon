#include <stdio.h>
#include <stdlib.h>

int stat[21][21] = {0, };
int	flag[21] = {0, };
int	team = 0;
int	min = 10000;

void	startlink(int n, int index, int combi)
{
	int	start = 0;
	int link = 0;

	if (team == index / 2)
	{
		for (int i = 1; i <= index; i++)
		{
			for (int j = 1; j <= index; j++)
			{
				if (flag[i] == 0 && flag[j] == 0)
					start += stat[i][j];
				else if (flag[i] == 1 && flag[j] == 1)
					link += stat[i][j];
			}
		}
	
		if (abs(start - link) < min)
			min = abs(start - link);
		
		return ;
	}

	for (int i = 1; i <= index; i++)
	{
		if (i > combi && flag[i] == 0)
		{
			flag[i] = 1;
			team++;

			startlink(n + 1, index, i);

			if (min == 0)
				break ;
			
			flag[i] = 0;
			team--;
		}
	}
}

int	main(void)
{
	int	n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &stat[i][j]);
	
	startlink(1, n, 0);

	printf("%d\n", min);
}