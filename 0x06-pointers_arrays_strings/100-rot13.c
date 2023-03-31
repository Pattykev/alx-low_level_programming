/**
 * rot13 - a function that replace a letter with the 13th letter after it
 *
 * @s: string input
 *
 * Return: @s
*/

char *rot13(char *s)
{
	int i, c = 0;

	/*iterate values in array s*/
	while (s[c] != '\0')
	{
	        if((s[c] >= 110 && s[c] <= 122) || (s[c] >= 78 && s[c] <= 90))
           		s[c] = s[c] - 13;

		for (i = 0; i < 13 && ((s[c] >= 97 && s[c] <= 109) || (s[c] >= 65 && s[c] <= 77) ); i++)
		{
			s[c] = s[c] + 13;
			break;
		}
		c++;
	}
	return (s);
}
