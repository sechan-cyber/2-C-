//예제 9-3: 문자열 맞바꾸기
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "";
    char str2[10] = "";
    char temp[10];

    printf("2개의 문자열? ");
    scanf("%s %s", str1, str2);

    printf("str1 = %s, str2 = %s\n", str1, str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}
*/


// 예제 9 - 4: 문자열의 비교
/*

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[10] = "apple";
    char s2[10] = "apple";

    if (s1 == s2)
        printf("s1과 s2의 주소가 같습니다.\n");
    else
        printf("s1과 s2의 주소가 다릅니다.\n");

    if (strcmp(s1, s2) == 0)
        printf("s1과 s2의 내용이 같습니다.\n");
    else
        printf("s1과 s2의 내용이 다릅니다.\n");

    return 0;
}
*/


//예제 9-5: 문자열의 연결
/* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100] = "";
    char word[20];

    do {
        printf("단어? ");
        scanf("%s", word);

        strcat(sentence, word);
        strcat(sentence, " ");

    } while (strcmp(word, "") != 0);

    printf("%s\n", sentence);

    return 0;
}
*/