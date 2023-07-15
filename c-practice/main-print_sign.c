#include "main.h"
#include <stdio.h>

int main ()
{
	int sign1;
	int sign2;
	int sign3;

	sign1 = print_sign(5);
	sign2 = print_sign(-9);
	sign3 = print_sign(0);

	printf("sign: %d\n", sign1);
	printf("sign: %d\n", sign2);
	printf("sign: %d\n", sign3);

	return 0;
}
