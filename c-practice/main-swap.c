#include <stdio.h>
#include "main.h"

int main ()
{
	int z1 = 43;
	int z2 = 64;

	printf("initial value of a: %d\n", z1);
	printf("initial value of b: %d\n", z2);

	swap_int(&z1, &z2);

	printf("new value of a: %d\n", z1);
	printf("new value of b: %d\n", z2);
}
