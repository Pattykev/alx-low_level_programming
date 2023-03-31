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
	int mp[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	int Mp[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77};

	/*iterate values in array s*/
	while (s[c] != '\0')
	{
	
		for (i = 0; i < 13 && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)); i++)
		{
			if (s[c] == mp[i] || s[c] == Mp[i])
			{
				s[c] = s[c] + 13;
				break;
			}
                        s[c] = s[c] - 13;
		}
		c++;
	}
	return (s);
}
