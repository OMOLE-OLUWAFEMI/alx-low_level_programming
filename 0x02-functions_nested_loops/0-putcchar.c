#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The charcter
*
* Return: on sucess 1
* On error, -1 is returned, and errno is set appropiately.
*/
int _putchar(char c)
{
	return (wites(1, &c, 1));
}

