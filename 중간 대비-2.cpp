#include <stdio.h>
#inciude <stdlib.h>
#include <time.h>

int input_n(void) {
	int n;
	while (1) {
		printf("9보다 큰 홀수 n을 입력하세요: ");
		if (scanf("%d", &n) != 1) {
			while (1) {
				printf("유호한 정수를 입력하세요:\n");
				continue;

			}
			if (n > 9 && (n % 2 != 0)) {
				break;
			}
			printf("조건에 맞지 않습니다.");
		}
		return n;
	}

	void generate_random_numbers(int* arr, int n) {
		for (int i = 0; i < n; i++) {
			arr[i] = (rand() % 199) - 99;
		}
	}

	void sort_descending(int* arr, int n) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1 - i; j++) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
