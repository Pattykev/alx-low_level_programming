#include "main.h"

/**
 * _isupper - if a number is a upper or lower
 *
 * Return: 1 if upper and 0 if lower
 *
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
  if (c >= 65 && c <= 90)
    return (1);
}
