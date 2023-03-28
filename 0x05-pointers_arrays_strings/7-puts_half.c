#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int s, n, len;

	len = 0;
	s = 0;

	while (str[s] != '\0')
	{
		len++;
		s++;
	}

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);
	s = n;
	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
