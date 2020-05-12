#include "monty.h"
#include <stdlib.h>
/**
 *_strlen - calculate the length of a string
 *@s: char pointer
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *(s + a) != 0; a++)
	{
	}
	return (a);
}
/**
 *str_concat - concatenates two strings.
 *
 *@s1: char pointer argument
 *@s2: char pointer argument
 *Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *poin = NULL;

	int i = 0, j = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; *(s1 + i); i++)
	{
	}
	for (; *(s2 + j); j++)
	{
	}
	poin = malloc((i + j + 1) * sizeof(char));
	if (poin == NULL)
		return (NULL);
	for (; a < i; a++)
		*(poin + a) = *(s1 + a);
	for (; b < j; b++, a++)
		*(poin + a) = *(s2 + b);
	*(poin + a) = '\0';
	return (poin);
}
