#include "holberton.h"

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
return (i);
}
}
