#include "main.h"
#include <stdio.h>

int main ()
{
	char test1 = 'a';
	char test2 = 'B';
	int y;
	int x;

	y = alpha(test1);
	x = alpha(test2);

	printf("%d\n", y);
	printf("%d\n", x);

	return 0;
}
