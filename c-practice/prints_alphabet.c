#include <stdio.h>

void print_alphabet(char l)
{
	for (l = 'a'; l <= 'z'; l++)
		printf("%c\n", l);
}
int main(void)
{
	char c;

	c = 'a';

	print_alphabet(c);

	return (0);
}
