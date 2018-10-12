#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of size bytes
 * @size: size of array
 * Return: pointer to the allocated array; NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

/**
 * _memset - sets first n bytes of the memory
 * @s: array to set
 * @b: character to set to
 * @n: n bytes
 * Return: pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
