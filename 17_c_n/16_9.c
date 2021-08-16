#include <stdio.h>

int	combination(int m, int n)
{
	int dp[m + 1][m + 1];

	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
				dp[i][j] = 1;
			else if (i == j)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			if (i == m && j == n)
				break ;
		}
	}
	return (dp[m][n]);
}

int main()
{
	int	t;
	int	n, m;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &n, &m);
		printf("%d\n", combination(m, n));
	}
	return (0);
}