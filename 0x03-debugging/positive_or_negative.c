#include"main.h"

/**
 * main - Entry point
 *
 * positive_or_negative - print value of n satus; zero, positive or negative
 *
 * @n: Parameter
*/

void positive_or_negative( int n)
{

	/*my code*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
