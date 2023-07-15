#include "main.h"
#include <stdio.h>

void alphabet_10()
{
	int count = 0;
	char letter;

		while (count++ < 10)
		{
			for(letter ='a'; letter <= 'z'; letter++)
			{
				printf("%c", letter);
			}

			printf("\n");
		}
			
}
