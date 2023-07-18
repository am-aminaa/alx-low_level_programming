#include "main.h"
#include <stdlib.h>
/**
 * creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: car to assign
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsined int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

