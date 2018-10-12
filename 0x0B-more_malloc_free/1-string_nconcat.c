#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings to newly allocated space in memory
 * @s1: string1
 * @s2: string 2 to appended to string1
 * @n: n byte of string 2 to concatenate to string 1
 * Return: pointer to the concatenated string; NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	return (str);
}
