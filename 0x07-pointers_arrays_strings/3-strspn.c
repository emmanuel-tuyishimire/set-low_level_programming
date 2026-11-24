#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to scan
 * @accept: pointer to the string containing accepted characters
 *
 * Return: number of bytes in the initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;
	int j;
	int found;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
		{
			return (count);
		}
		count++;
		i++;
	}

	return (count);
}
