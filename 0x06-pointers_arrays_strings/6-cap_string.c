/**
 * cap_string - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: @s
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}') && s[i++] != ' ')
			s[i++] = s[i++] - 32;
    		if (s[i] == ' ')
      			s[i++] = s[i++] - 32;
		i++;
	}
	return (s);
}
