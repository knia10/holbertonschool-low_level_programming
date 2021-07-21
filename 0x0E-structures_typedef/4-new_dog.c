#include <stdio.h>
#include "dog.h"
/**
 *_strlen -  function that returns the length of a string.
 *Description: use loop.
 *@s: variable to check.
 *Return: return a char i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * *_strcpy - function that copies a string.
 *@dest: string to copy.
 *@src: string copy of dest.
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
/**
 * new_dog - function that creates a new dog.
 *@name: name of new dog.
 *@age: age of new dog.
 *@owner: owner of new dog.
 *Return: string copy.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copydog;
	char *copyname;
	char *copyowner;

	copydog = malloc(sizeof(dog_t));
	if (copydog == NULL)
	{
		return (NULL);
	}

	copydog->age = age;

	if (name != NULL)
	{
		copyname = malloc(_strlen(name) + 1);
		if (copyname == NULL)
		{
			free(copydog);
			return (NULL);
		}
		copydog->name = _strcpy(copyname, name)
	}
	else
		copydog->name = NULL;

	if (owner != NULL)
	{
		copyowner = malloc(_strlen(owner) + 1);
		if (copyowner == NULL)
		{
			free(copydog);
			free(copyname);
			return (NULL);
		}
		copydog->owner = _strcpy(copyowner, owner)
	}
	else
		copydog->owner = NULL;

	return (copydog);
}
