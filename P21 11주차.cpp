//여러 가지 문자열 길이 구하기//
#include <stdio.h>
#include <string.h>

int main(void)
{

	char str[10] = "hello";
	int len = 0;
	printf("str의 길이: %d\n", strlen(str));
	printf("\"good day\" 길이: %d\n", sizeof("good day"));
	printf("str = %s\n", str);
	len = strlen(str);
	if (len > 0)
		str[len - 1] = '\0';
	printf("str = %s\n", str);

}