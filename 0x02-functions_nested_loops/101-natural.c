#include <stdio.h>

/**
 * main - enter point of the functions
 *
 * Description - return the sum of the multiple of 3 and 5
 *
 * Return: Always  0
 *
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
