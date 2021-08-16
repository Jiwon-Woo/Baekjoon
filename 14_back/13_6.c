#include <stdio.h>
#include <stdlib.h>

int	square[9][9];
int	flag[10] = {0, };
int	zero[81][2] = {0, };

void	check(int x, int y)
{
	int	box_x = (x / 3) * 3;
	int	box_y = (y / 3) * 3;
	
	for (int i = 0; i < 9; i++)
		flag[square[i][y]] = 1;

	for (int j = 0; j < 9; j++)
		flag[square[x][j]] = 1;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			flag[square[box_x + i][box_y + j]] = 1;
}

void	sudoku(int n, int index)
{	
	int	row = zero[n][0];
	int	col = zero[n][1];

	if (n == index)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				printf("%d ", square[i][j]);
			printf("\n");
		}
		exit (0);
	}

	for (int i = 0; i < 9; i++)
	{
		//왜 check가 for 안으로 들어가야 맞게 나올까.. 밖에 있어도 될거 같은데....
		for (int j = 0; j <= 9; j++)
			flag[j] = 0;
		
		check(row, col);

		if (flag[i + 1] == 0)
		{
			square[row][col] = i + 1;
			flag[i + 1] = 1;
			
			sudoku(n + 1, index);

			//답이 많은 경우 실행을 빠져나오지 못함.. ctrl+z 눌러줘야 함...
			if (n + 1 == index)
				break ;
			
			square[row][col] = 0;
			flag[i + 1] = 0;
		}
	}	
}

int	main(void)
{
	int	index = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &square[i][j]);
			
			if (square[i][j] == 0)
			{
				zero[index][0] = i;
				zero[index][1] = j;
				index++;
			}
		}
	}
	
	sudoku(0, index);
}