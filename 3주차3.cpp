/*
#include <stdio.h>

int main()
{
	int x[] = { 18, 62, 31, 57, 8, 3 };

	int size = sizeof(x) / sizeof(x[0]);
	for (int i = 0; i < size; i++)
	{
		int value = 0;
		int count = i;
		for (int k = i+1; k < size; k++)
		{
			if (x[count] > x[k])
			{
				count = k;
			}
		}
		if (x[i] != x[count])
		{
			value = x[i];
			x[i] = x[count];
			x[count] = value;
		}
	}
}
*/