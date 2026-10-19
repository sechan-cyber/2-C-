#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	int* arr = NULL;
	int i, sum;

	printf("정수의 개수");
	scanf("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		printf("메모리 할당 실패\n");
		return -1;
	}

	printf("%d개의 정수를 입력하세요;",size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[1]);
	for (i = 0, sum = 0; i < size; i++)
		sum += arr[1];
	printf("입력된 정수의 합계:%d\n", sum);
	free(arr);
	arr = NULL;

}