#include "mesh.h"

/*
 * _strcpy - Copies string src to dest
 * @dest: Destination to copy to
 * @src: String to copy
 *
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


/*
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: A pointer to dest
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dup = malloc(sizeof(char) * _strlen(str));

	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
