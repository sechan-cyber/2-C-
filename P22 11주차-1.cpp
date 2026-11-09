// 문자열 바꾸기//
/*
#define_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[10] = "";
	char str2[10] = "";
	char temp[10];

	printf("2개의 문자열: ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s, str2 = %s\n", str1, str2);
}
*/