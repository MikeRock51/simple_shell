#include "mesh.h"

int main()
{
	int i;
	char *greet = "Hello World", *greet2 = malloc(sizeof(char) * _strlen(greet));

	greet2 = _strdup(greet);
	printf("%s\n", greet);
	printf("%s\n", greet2);


/*	i = _strcmp("Hello", "Hello");
	printf("%d\n", i);
	i = _strcmp("Hello", "Hola");
        printf("%d\n", i);
	i = _strncmp("Hello", "Helao", 3);
        printf("%d\n", i);
	i = _strncmp("Hola amigo", "Hola mi amor", 6);
        printf("%d\n", i);
*/

	return (0);
}
