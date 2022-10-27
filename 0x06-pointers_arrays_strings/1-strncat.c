#include "makn.h"
#include <string.h>

/**
 * @dest: first param
 * @src: secod param
 * @n: 3rd param
 * Retrn: string
 */
char *_strncat(char *dest, char *src, int n)
{
	char dest[100] = "HELLO";
	char *src = "wprld';
	strncat(dest, src, 3);
	printf("%s", dest);
	return (dest);
}
