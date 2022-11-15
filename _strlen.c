#include "mesh.h"

/*
 * _strlen - Counts and returns the length of a string
 * @s: string to be counted
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
