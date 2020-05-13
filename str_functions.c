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
/**
 * _itoa - converts an integer to a string
 * @num: integer argument
 * @base: integer argument
 *
 * Return: the converted string
 */
char *_itoa(unsigned int num, unsigned int base)
{
	int pos = 0, length = 0;
	unsigned int aux = 0;
	char *str = NULL;

	length = num_len(num, base);
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num == 0)
	{
		str[pos++] = '0';
		str[pos] = '\0';
		return (str);
	}
	for (pos = 0; num != 0; pos++)
	{
		aux = num % base;
		if (aux > 9)
			str[pos] = (aux - 10) + 97;
		else
			str[pos] = aux + '0';
		num = num / base;
	}
	str[pos] = '\n';
	rev_string(str, pos);
	return (str);
}
/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 * @size: size of the string
 *
 * Return: void
 */
void rev_string(char *s, int size)
{
	int a = 0, b = 0, aux = 0;

	a = size - 1;
	for (b = 0; b < a; b++)
	{
		aux = *(s + b);
		*(s + b) = *(s + a);
		*(s + a) = aux;
		a--;
	}
}
/**
 * num_len - function that calculate the length of a number to be converted to
 * string
 * @num: number expected to convert to string
 * @base: base number
 *
 * Return: the length of characters needed to convert the num to string
 */
int num_len(unsigned int num, unsigned int base)
{
	int len = 0;

	if (num == 0)
		len++;
	for (; num != 0; len++)
		num = num / base;
	return (len);
}
