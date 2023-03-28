#include "main.h"
/**
 * puts2 - a function that prints only one character out of two
 * starting with the first one
 * @str: string input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *s = str;
	int st;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	a = len - 1;
	for (st = 0 ; st <= a ; st++)
	{
		if (st % 2 == 0)
		{
			_putchar(str[st]);
		}
	}
	_putchar('\n');
}
