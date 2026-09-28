/*
#include <stdio.h>

int main(void)
{

	int a = 10;
	int *p = &a;
	int* q = NULL;
	int* r = 0;

	printf("p = %p\n", p);
	printf("q = %p\n", q);
	printf("r = %p\n", r);
}
*/

//예제  8-3 포인터 사용//

#include <stdio.h>
int main(void)
{

	int a = 10;
	int* p = &a;
	printf("a = %d\n", a);
	printf("&a = %p\n", &a);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", &p);
	*p = 20;
	printf("*p = %d\n", *p);

}