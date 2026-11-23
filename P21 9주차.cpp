/*
 #define _CRT_SECURE_NO_WARNINGS

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 // 난수 및 입력 범위
 #define NLLIMIT 9
 #define NHLIMIT 99
 #define RLLIMIT -99
 #define RHLIMIT 99

 int Get_Integer(void);
 void Generate_Rand_Num(int* nData, int n);
 void Sort_Data(const int* nData, int* nSortData, int n);
 void Print_Results(const int* nData, const int* nSortData, int n);


 // 1. 홀수 정수 입력 함수
 int Get_Integer(void)
 {
    int n;

    do
    {
        printf("\n<<< 홀수 정수 n(%3d <= n <= %3d) 입력: ",
            NLLIMIT, NHLIMIT);

        scanf("%d", &n);

        if (n < NLLIMIT || n > NHLIMIT || n % 2 != 1)
        {
            printf("\n>>> ERROR: 입력 오류!!!\n");
        }

    } while (n < NLLIMIT || n > NHLIMIT || n % 2 != 1);

    return n;
 }


 // 2. 난수 생성 함수
 void Generate_Rand_Num(int* nData, int n)
 {
    int i;

    for (i = 0; i < n; i++)
    {
        nData[i] = RLLIMIT +
            rand() % (RHLIMIT - RLLIMIT + 1);
    }
 }



 // 3. 내림차순 정렬 함수
 void Sort_Data(const int* nData, int* nSortData, int n)
 {
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        nSortData[i] = nData[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (nSortData[j] < nSortData[j + 1])
            {
                temp = nSortData[j];
                nSortData[j] = nSortData[j + 1];
                nSortData[j + 1] = temp;
            }
        }
    }
 }



 // 4. 결과 출력 함수
 void Print_Results(const int* nData, const int* nSortData, int n)
 {
    int i;

    printf("\n===== 결과 출력 =====\n");

    printf("\n[발생된 난수]\n");

    for (i = 0; i < n; i++)
    {
        printf("%5d", nData[i]);
    }

    printf("\n\n[내림차순 정렬 결과]\n");

    for (i = 0; i < n; i++)
    {
        printf("%5d", nSortData[i]);
    }

    printf("\n\n최댓값 : %d", nSortData[0]);
    printf("\n중간값 : %d", nSortData[n / 2]);
    printf("\n최솟값 : %d\n", nSortData[n - 1]);
 }



 // 5. 메인 함수
 int main(void)
 {
    int nData[99], nSortData[99];
    int n;

    n = Get_Integer();

    srand((unsigned)time(NULL));

    Generate_Rand_Num(nData, n);

    Sort_Data(nData, nSortData, n);
   
    Print_Results(nData, nSortData, n);

    return 0;
 }



 // 6. limit보다 큰 홀수 정수 입력 함수 정의
 int Get_Integer(void)
 {
     int n;

     do
     {
         printf("\n<<< 홀수 정수 n(%3d <= n) 입력: ", NLLIMIT);
         scanf("%d", &n);

         if (n < NLLIMIT || n % 2 != 1)
             printf("\n>>> ERROR: 입력 오류!!!\n");

     } while (n < NLLIMIT || n % 2 != 1);

     return n;
 }



 // 7. RLLimit ~ RHLimit 사이의 n개의 난수 발생 함수 정의
 void Generate_Rand_Num(int* nData, int n)
 {
     int i;

     for (i = 0; i < n; i++)
         nData[i] = RLLIMIT + rand() % (RHLIMIT - RLLIMIT + 1);
 }


 int main(void)
 {
     int n;
     int* nData = NULL, * nSortData = NULL;
     n = Get_Integer();
     nData = (int*)calloc(sizeof(int), n);
     nSortData = (int*)calloc(sizeof(int), n);

     if (nData == NULL || nSortData == NULL)
     {
         printf("\n>>> ERROR: Memory allocation error!!!\n\n");
         return -1;
     }
 }



 // 8. 발생된 난수, 내림차순 정렬된 난수,
 // 최대값, 중간값, 최소값 출력 함수 정의
 void Print_Results(const int* nData, const int* nSortData, int n)
 {
     int i;

     printf("\n>>> %d개의 난수 발생 data:\n", n);

     for (i = 0; i < n; i++)
         printf("%4d", nData[i]);

     printf("\n");

     printf("\n>>> %d개의 내림차순 정렬된 data:\n", n);

     for (i = 0; i < n; i++)
         printf("%4d", nSortData[i]);

     printf("\n");

     printf("\n>>> 최대값: %d", nSortData[0]);
     printf("\n");

     printf("\n>>> 중간값: %d", nSortData[n / 2]);
     printf("\n");

     printf("\n>>> 최소값: %d\n\n\n", nSortData[n - 1]);
 }
*/