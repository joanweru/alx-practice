#include <stdio.h>
#include "main.h"

void print_alphabet()
{
	char letter = 'a';

	for( int i = 0; i < 26; i++)
	{
		printf("%c", letter);
		letter++;
	}

	printf("\n");
}
