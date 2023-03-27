/**
 * swap_int - takes two pointers to  int parameters
 *               and swap the values
 *
 * @a: int parameter
 * @b: int parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
 *a += *b;
 *b = *a - *b;
 *a = *a - *b; 
}
