#include "main.h"
#include <stdio.h>

int print_sign(int n)
{
	if (n < 0)
	{
		return -1;
		printf("-");
	}
	else if (n == 0)
	{
		return 0;
		printf("0");
	}
	else
	{
		return 1;
		printf("+");
	}
}
