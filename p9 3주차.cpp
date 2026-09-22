
#include <stdio.h>
#define ROW 5
#define COL 4
void print_array(int arr[][COL]);

int main()
{

	int data[5][4] = 
	{
		{ 0, 40, 15, 20 },
		{ 1, 31, 30, 19 },
		{ 2, 35, 32, 18 },
		{ 3, 40, 40, 20 },
		{ 4 }
	};

	print_array(data);
}

void print_array(int arr[][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
