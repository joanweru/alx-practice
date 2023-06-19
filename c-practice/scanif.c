#include <stdio.h>

/**
 * main - compares max of two numbers
 * Return: always zero if code was success
 */

int main(void)
{
int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	if (num1 > num2)
	{
		printf("%d is maximum", num1);
	}
	else
	{
		printf("%d is maximum", num2);
	}
	
	return 0;
}
