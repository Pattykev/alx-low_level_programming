/**
 * reverse_array - a function to reverse an array
 *
 * @a: array to reverse
 * @n: the number of elements of the array
 *
 * Return: 0 
 *
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i =1; i <= n; i++)
  {
		temp = a[n-i];
    a[n-i] = a[i];
    a[i] = temp;
	}
