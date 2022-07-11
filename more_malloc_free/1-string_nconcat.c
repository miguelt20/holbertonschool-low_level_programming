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
	unsigned int i = 0, j = 0, x = 0, z = 0, n2;
	char *ns;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	n2 = n;

	if (n2 >= j)
		n2 = j;

	ns = malloc(sizeof(char) * (i + n2));

	if (!ns)
		return (NULL);

	while (s1[x] != '\0')
	{
		ns[z] = s1[x];
		x++;
		z++;
	}
	x = 0;
	while (s2[x])
	{
		if (x <= n2)
			ns[z] = s2[x];
		x++;
		z++;
	}
	ns[z] = '\0';
	return (ns);
}
