#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: num of bytes to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		teminate(98);

	return (ptr);
}
