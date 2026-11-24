#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}

	return (s);
}
