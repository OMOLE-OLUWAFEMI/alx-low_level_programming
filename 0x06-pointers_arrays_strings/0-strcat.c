#include "main.h"

/**
* _strcat - concatenates the string pointed to by @src to 
* the end of the string pointed to by @dest
* @dest: String that will be apppended
* @src: String to be concatenated upon
*
* Return: return poiner to @dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] ! src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
