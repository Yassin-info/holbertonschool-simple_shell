#include "main.h"
/**
* *_strcpy - copies string pointed to by src to the buffer pointed to dest
* @dest: string destination
* @src: string source
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];

	return (dest);
}
/**
* _strlen - returns the length of a string
* @s: string to be evaluated
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
