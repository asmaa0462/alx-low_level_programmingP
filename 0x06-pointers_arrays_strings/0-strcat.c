#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: inpust value
 * @src: inpust value
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
