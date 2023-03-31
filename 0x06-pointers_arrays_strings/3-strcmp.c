#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input value
 * @s2: input value
 * Return: 0 if s1 and s2 are equals
 */
int _strcmp(char *s1, char *s2)
{
	int i, count;

	i = 0;
	count = 0;
	while (count == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		count = s1[i] - s2[i];
		i++;
	}
	return (count);
}
