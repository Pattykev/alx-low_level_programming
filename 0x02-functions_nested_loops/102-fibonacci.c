#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print a fibonacci numbers
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int cal = 2, i, num = 1;

	printf("%d, %d, ", num, cal);
	for (i = 1; i <= 47; i++)
	{
		num = cal;
		cal += num;
		printf("%d, ", cal);
	}
	printf("\n");
	return (0);
}
