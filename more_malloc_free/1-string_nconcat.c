#include "main.h"
#include <stdlib.h>
/**
 **string_nconcat - concatenates two strings
 *Return: ns
 *@s1: first string
 *@s2: second string
 *@n: bytes
 */
char *string_nconcat(char *s1, char *s2,  unsigned int n)
{
	unsigned int len = n, i;
	char *ns;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	ns = malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		ns[len++] = s1[i++];

	for (i = 0; s2[i] && i < n; i++)
		ns[len++] = s2[i++];

	ns[len] = '\0';

	return (ns);
}
