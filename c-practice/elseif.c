#include <stdio.h>

/**
 * main - prints stuff
 * Return: retuens 0 if code was success
 */

int main(void)
{
	int time = 50;

	if (time < 20)
	{
		printf("good");
	}
	else if (time < 40)
	{
		printf("not so good");
	}
	else
	{
		printf("kinda bad");
	}
	return (0);

}
