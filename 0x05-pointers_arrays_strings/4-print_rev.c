#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - Prints a string in reverse order putchar(10)
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int c = 0;
	while (s(c) != '\0')
	{
		c++;
	}
	for (c = 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
