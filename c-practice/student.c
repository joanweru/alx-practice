#include <stdio.h>

/**
 * main -prints student information
 */
int main(void)
{
	int id = 15;
	int age = 23;
	float fee = 72.25;
	char grade = 'B';

	printf("Student ID: %d\n", id);
	printf("Student age: %d\n", age);
	printf("Student fee: %.2f\n", fee);
	printf("Student grade: %c\n", grade);

	return (0);
}
