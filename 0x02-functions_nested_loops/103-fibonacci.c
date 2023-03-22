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
	unsigned long cal = 2, i, a, num = 1, sum = 2;

	for (i = 1; i <= 48; i++)
	{
		a = num;
		num = cal;
		cal += a;
		if (i < 48)
			printf("%lu, ", cal);
		else
			printf("%lu", cal);
	}
	printf("\n");
	return (0);
}
