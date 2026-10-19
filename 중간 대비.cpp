/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 소수 판별 함수 (함수 1)
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// 메인 함수 (함수 2)
int main() {
    srand((unsigned int)time(NULL));
    int n1, n2;
    int arr[3]; // 배열 사용


    while (1) {
        printf("<<<<< n1 입력: ");
        if (scanf("%d", &n1) != 1) {
            while (getchar() != '\n');
            continue;
        }
        printf("<<<<< n2 입력: ");
        if (scanf("%d", &n2) != 1) {
            while (getchar() != '\n');
            continue;
        }

        if (n1 > 0 && n2 > 0 && n2 > n1) {
            break;
        }
        else {
            printf(">>> ERROR: 입력 오류!!! > 입력조건: n1>0 && n2>0 && n1 < n2\n");
        }
    }


    for (int i = 0; i < 3; i++) {
        arr[i] = n1 + rand() % (n2 - n1 + 1);
    }


    printf(">>> %d-%d 사이에서 발생된 난수 3개: ", n1, n2);
    for (int i = 0; i < 3; i++) {
        printf("%d", arr[i]);
        if (i < 2) printf(", ");
    }
    printf("\n");


    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 3; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // 최대값 출력
    printf(">>> 3개의 난수중 최대값: %d(%s/%s)\n",
        max,
        (max % 2 == 0 ? "짝수" : "홀수"),
        (isPrime(max) ? "소수" : "소수 아님"));

    // 최소값 출력
    printf(">>> 3개의 난수중 최소값: %d(%s/%s)\n",
        min,
        (min % 2 == 0 ? "짝수" : "홀수"),
        (isPrime(min) ? "소수" : "소수 아님"));

    return 0;
}
*/