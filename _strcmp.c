#include "mesh.h"

/*
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0 if s1 and s2 are the same string
 * return 1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		return (1);
	}
	return (0);
}

/*
 * _strncmp - Compares n bytes of two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0 if s1 and s2 are the same string
 * return 1 otherwise
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		return (1);
	}
	return (0);
}
