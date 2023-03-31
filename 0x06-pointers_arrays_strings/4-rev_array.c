/**
 * reverse_array - a function to reverse an array
 *
 * @a: array to reverse
 * @n: the number of elements of the array 
 *
*/

void reverse_array(int *a, int n)
{
	int i, temp, b;
	
	b=n;
	for (i =0; i < n; i++)
  	{
		b--;
		temp = a[b];
    		a[b] = a[i];
    		a[i] = temp;
	}
}
