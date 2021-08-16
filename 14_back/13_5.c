#include <stdio.h>

int	chess[15][15] = {0, };
//int	flag[15] = {0, };
int	n_queen = 0;

void	queen(int row, int n)
{	
	if (row > n)
	{
		n_queen++;
		/*
		printf("[ ");
		for(int i = 1; i <= n; i++)
			printf("%d ", flag[i]);
		printf("]\n");
		*/
		return;
	}

	for (int col = 1; col <= n; col++)
	{
		if (chess[row][col] == 0)
		{
			for (int i = 1; i <= n; i++)
				if (chess[i][col] == 0)
					chess[i][col] = row;

			for (int j = 1; j <= n; j++)
				if (chess[row][j] == 0)
					chess[row][j] = row;

			for (int k = 1; (row + k <= n) && (col + k <= n); k++)
				if (chess[row + k][col + k] == 0)
					chess[row + k][col + k] = row;

			for (int k = 1; (row - k >= 1) && (col - k >= 1); k++)
				if (chess[row - k][col - k] == 0)
					chess[row - k][col - k] = row;
			
			for (int k = 1; (row + k <= n) && (col - k >= 1); k++)
				if (chess[row + k][col - k] == 0)
					chess[row + k][col - k] = row;

			for (int k = 1; (row - k >= 1) && (col + k <= n); k++)
				if (chess[row - k][col + k] == 0)
					chess[row - k][col + k] = row;

			//flag[row] = col;
			queen(row + 1, n);
			//flag[row] = 0;

			for (int i = 1; i <= n; i++)
				for (int j = 1; j <= n; j++)
					if (chess[i][j] == row)
						chess[i][j] = 0;
		}
	}
}

int	main(void)
{
	int	n;

	scanf("%d", &n);

	queen(1, n);
	printf("%d\n", n_queen);
}