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
	unsigned long cal = 2, i, a, num = 1;

	printf("%lu, %lu, ", num, cal);
	for (i = 1; i <= 98; i++)
	{
		a = num;
		num = cal;
		cal += a;
		if (i < 98)
			printf("%lu, ", cal);
		else
			printf("%lu", cal);
	}
	printf("\n");
	return (0);
}
