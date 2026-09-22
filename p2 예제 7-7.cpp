/*
#include <stdio.h>
#define ROW 3
#define COL 2

int main(void)
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++)

		for (j = 0; j < COL; j++, k++)
			data[i][j] = ++k;

	for (i = 0; i < ROW; i++)

		for (j = 0; j < COL; j++) {
			for (j = 0; j < COL; j++)
				printf("%3d ", data[i][j]);
			printf("\n");
		}

	printf("size of (data)       = %d\n", sizeof(data));
	printf("size of (data[0])    = %d\n", sizeof(data[0]));
	printf("size of (data[0][0]) = %d\n", sizeof(data[0][0]));
}
*/