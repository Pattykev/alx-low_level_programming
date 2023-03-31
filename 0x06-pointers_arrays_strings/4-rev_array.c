/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, temp, b;
	
	b=n-1;
	for (i =0; i < n; i++)
  	{
		temp = a[b];
    		a[b] = a[i];
    		a[i] = temp;
		b--;
	}
}
