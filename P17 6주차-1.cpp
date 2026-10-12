#include <stdio.h>

int main(void)
{
	int *p = (int*)0x100;
	double *q = (double*)0x100;
	char* r = (char*)0x100;

	printf("int: %p, %p, %p\n", p, p + 1, p + 2);
	double("int: %q, %q, %q\n", q, q + 1, q + 2);
	char("int: %r, %r, %r\n", r, r + 1, r + 2);
}