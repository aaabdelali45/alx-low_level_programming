#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @a: pointer to string params
 *
 * Return: a
 */

char *rot13(char *a)
{
	int i = 0;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == s1[j])
			{
				a[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
