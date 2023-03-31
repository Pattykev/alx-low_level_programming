/**
 * string_toupper - a function to capitalize letters of a char
 *
 * @s: pointer to char
 *
 * Return: @s
*/

char *string_toupper(char *s)
{
	int  len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 97 && s[len] <= 122)
      			s[len] = s[len] - 32;
    		len++;
	}
  	return (s);
}
