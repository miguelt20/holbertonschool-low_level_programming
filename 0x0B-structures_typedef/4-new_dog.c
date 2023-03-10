#include "dog.h"
#include <stdlib.h>

/**
 *_strcpy - it copies the content into a pointer
 *Return: 0
 *@dest: pointer
 *@src: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/**
 *_strlen - it shows the length of the array
 *Return: 0
 *@s: this is the pointer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 **new_dog - creates a new dog
 *Return: doggy
 *@name: name
 *@age: age
 *@owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcpy(doggy->owner, owner);

	return (doggy);
}
