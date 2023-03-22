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

	for (i = 1; i <= 25; i++)
	{
		a = num;
		num = cal;
		cal += a;
		if (cal % 2 == 0)
			sum += cal;
	}
	printf("%lu\n", sum);
	return (0);
}
