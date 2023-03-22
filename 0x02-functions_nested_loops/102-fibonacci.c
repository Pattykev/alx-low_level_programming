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
	int cal = 2, i, a, num = 1;

	printf("%d, %d, ", num, cal);
	for (i = 1; i <= 47; i++)
	{
		a = num;
		num = cal;
		cal += a;
		if (i < 47)
			printf("%d, ", cal);
		else
			printf("%d", cal);
	}
	printf("\n");
	return (0);
}
