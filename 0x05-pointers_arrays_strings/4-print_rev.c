#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: string input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int rev;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (rev = len; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
