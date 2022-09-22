#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings using at most
 * of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @i: index.
 * @n: The maximum number of bytes to copied from src.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
