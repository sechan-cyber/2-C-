/*
#include <stdio.h>
#define COL 2
int main(void)
{
	int data[][COL] = {
		{10, 20}, {30, 40}, {50, 60},
	};

	int row_size = sizeof(data) / sizeof(data[0]);
	int i, j;
	for (i = 0; i < row_size; i++)
	{
				for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
				printf("\n");
	}
}
*/

/*
#include <stdio.h>
#define COL 4
int main(void)
{
		int data[][COL] =
	{
		{0, 40, 15, 20},
		{1, 31, 30, 19},
		{2, 35, 32, 18},
		{3, 40, 40, 20},
		{4, 0, 0, 0}
	};

	int row_size = sizeof(data) / sizeof(data[0]);
	int i, j;
	for (i = 0; i < row_size; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]); 
		printf("\n");

	}
}
*/